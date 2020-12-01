#include <opencv2/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/imgproc.hpp"
#include <opencv2/videoio.hpp>
#include "opencv2/video/background_segm.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;

int main()
{
	//frame
	//back
	//fore
	//dest
	Mat frame, back, fore, dest;
	VideoCapture cap("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\CodigoEjemplosOpenCVdescomprimido\\51 Deteccion_movimiento_camara_estatica\\IcabMovimientoEscenaEstatica.mp4");
	//VideoCapture cap("IcabMovimientoEscenaEstatica.mp4"), CAP_DSHOW);
	//
	//Ptr<BackgroundSubtractorMOG2> bg = createBackgroundSubtractorMOG2(500 [longitud del historial], 100 [umbral de la distancia al cuadrado], true [detectar sombras]);
	Ptr<BackgroundSubtractorMOG2> bg = createBackgroundSubtractorMOG2(500, 100, true);

	cv::namedWindow("Frame");
	cv::namedWindow("Background");
	cv::namedWindow("Foreground");

	for (;;)
	{
		cap >> frame;
		//verificar si el frame se cargo correcta
		if (!frame.data)
		{
			cout << "Error al cargar el frame.\n";
			exit(1);
		}
		//Numero de gausianas a utilizar=5
		bg->setNMixtures(5);
		//El metodo
		bg->apply(frame, fore);
		//Obtiene el background
		bg->getBackgroundImage(back);

		//Funciones para la eliminacion de ruidos
		//erode=erocion,
		erode(fore, fore, Mat());
		//dilatar una imagen
		dilate(fore, fore, Mat());
		//convertir de Gray a BGR
		cvtColor(fore, fore, COLOR_GRAY2BGR);
		//Diferencia entre la parte estatica con la dinamica
		//Fusionar y obtener en destino
		bitwise_and(frame, fore, dest);

		imshow("Frame", frame);
		imshow("Background", back);
		imshow("Foreground", dest);
		if (waitKey(30) >= 0) break;
	}
	return 0;
}
