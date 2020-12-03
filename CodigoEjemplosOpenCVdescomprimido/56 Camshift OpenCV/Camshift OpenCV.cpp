
#include <iostream>
#include <ctype.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/video/tracking.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/ml/ml.hpp>

using namespace std;
using namespace cv;

Mat image;
Mat histImage(400, 512, CV_8UC3, Scalar(0, 0, 0));
bool backprojMode = false;
bool selectObject = false;
int trackObject = 0;
bool showHist = true;
Point origin;
Rect selection;
int vmin = 10, vmax = 256, smin = 30;

//Selecionar con el raton el area de seguimiento
void onMouse(int event, int x, int y, int, void*)
{
	if (selectObject)
	{
		//Seleccion devuelve los puntos x,y del recuadro seleccionado para seguirlo con el metodo CamShift
		selection.x = MIN(x, origin.x);
		selection.y = MIN(y, origin.y);
		//Limitar los bordes
		selection.width = std::abs(x - origin.x);
		selection.height = std::abs(y - origin.y);
		selection &= Rect(0, 0, image.cols, image.rows);
	}

	switch (event)
	{
	//Pulsar el boton izquierdo del mouse
	case EVENT_LBUTTONDOWN:
		//Punto de origen
		origin = Point(x, y);
		//Rectangulo del punto inicial
		selection = Rect(x, y, 0, 0);
		selectObject = true;
		break;
	//Levantar el boton del mouse
	case EVENT_LBUTTONUP:
		selectObject = false;
		if (selection.width > 0 && selection.height > 0)
			//Iniciar el proceso de seguimiento
			trackObject = -1;
		break;
	}
}

/*
int main()
{
	VideoCapture cap(0);
	Rect trackWindow;
	RotatedRect trackBox;
	int hsize = 16;
	float hranges[] = { 0, 180 };
	const float* phranges = hranges;
	
	namedWindow("CamShift Demo", 1);
	setMouseCallback("CamShift Demo", onMouse, 0);
	
	Mat hsv, hue, mask, hist, histimg = Mat::zeros(200, 320, CV_8UC3), backproj;

	//Ejecutara de forma continua el algoritmo Camshift
	for (;;)
	{
		//Inicialmente pasar una imagen de la camara
		Mat frame;
		cap >> frame;
				
		if (frame.empty())
			break;
		//Convertir el frame al espacio de color HSV
		frame.copyTo(image);
		cvtColor(image, hsv, COLOR_BGR2HSV);

		//Objeto de seguimiento = true
		if (trackObject)
		{
			//Variables del espacio de color
			int _vmin = vmin, _vmax = vmax;

			//Seleccion los valores interezados dentro del espacio de color HSV
			inRange(hsv, Scalar(0, smin, MIN(_vmin, _vmax)),
				Scalar(180, 256, MAX(_vmin, _vmax)), mask);
			//channel
			int ch[] = { 0, 0 };
			//Crear una nueva matriz Hue. Pasar del HSV a Hue
			hue.create(hsv.size(), hsv.depth());
			//Obtner el Hue a partir del HSH
			mixChannels(&hsv, 1, &hue, 1, ch, 1);

			//Empieza el seguimiento object
			if (trackObject < 0)
			{

				Mat roi(hue, selection), maskroi(mask, selection);
				//Calcular el histograma del espacio de color H
				calcHist(&roi, 1, 0, maskroi, hist, 1, &hsize, &phranges);
				//Normalizar el histograma entre 0 y 255 para poder dibujarlo en pantalla
				normalize(hist, hist, 0, 255, NORM_MINMAX);
				//La ventana a seguir
				trackWindow = selection;
				//Iniciar el proceso
				trackObject = 1;

				//Parametros para dibujar el histograma
				histimg = Scalar::all(0);
				int binW = histimg.cols / hsize;
				Mat buf(1, hsize, CV_8UC3);
				//Recorrere el histograma para poderlo dibujar. Pasar de HSV a BGR para pintarlo
				for (int i = 0; i < hsize; i++)
					buf.at<Vec3b>(i) = Vec3b(saturate_cast<uchar>(i*180. / hsize), 255, 255);
				cvtColor(buf, buf, COLOR_HSV2BGR);

				//Recorrec el histograma y dibujar un rectangulo
				for (int i = 0; i < hsize; i++)
				{
					int val = saturate_cast<int>(hist.at<float>(i)*histimg.rows / 255);
					rectangle(histimg, Point(i*binW, histimg.rows), Point((i + 1)*binW, histimg.rows - val), 
						Scalar(buf.at<Vec3b>(i)), -1, 8);
				}
			}

			//Permite calcular conjunto de puntos que pertenecen a la region de interes
			calcBackProject(&hue, 1, 0, hist, backproj, &phranges);
			backproj &= mask;
			//Funcion CamShift. TermCriteria para parar el algoritmo.
			RotatedRect trackBox = CamShift(backproj, trackWindow, 
				TermCriteria(TermCriteria::EPS | TermCriteria::COUNT, 10, 1));
			
			if (backprojMode)
				cvtColor(backproj, image, COLOR_GRAY2BGR);
			ellipse(image, trackBox, Scalar(0, 0, 255), 3, LINE_AA);
		}

		//Realizar mas selecciones sobre la imagen para hacer el seguimiento
		if (selectObject && selection.width > 0 && selection.height > 0)
		{
			Mat roi(image, selection);
			bitwise_not(roi, roi);
		}
			
		imshow("CamShift Demo", image);

		char c = (char)waitKey(10);
		if (c == 27)
			break;		
	}	
	return 0;
}
*/