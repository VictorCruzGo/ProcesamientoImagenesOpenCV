// Pyramidal_LucasKanade: Optical Flow


#include <opencv2/core.hpp>
#include <opencv2/video/tracking.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace cv;
using namespace std;

//Cantidad de esquinas
#define MAX_CORNERS 500
#define ESCAPE 27

/*
int main(int argc, char* argv[])
{
	//Captura de video desde una webcam
	VideoCapture capture;

	// Objects
	Mat frame;

	// keyboard pressed
	char keypressed = 0;
	bool success;

	// Comprobar que la captura de video es correcta
	capture.open(0);
	// if not success, exit program
	if (!capture.isOpened()){
		cout << "error in VideoCapture: check path file" << endl;
		getchar();
		return 1;
	}

	//----Parametros del algoritmo Shi-Tomasi ----
	//Esquinas localizadas. cornersA esquinas localizadas. cornersB devolvera el metodo de Lucas Kannade
	vector<Point2f> cornersA, cornersB;
	//Por defecto
	double qualityLevel = 0.01;
	//Minima distancia entre esquinas
	double minDistance = 10;
	int blockSize = 3;
	//No utilizar el detector esquinas mejorado de Harris
	bool useHarrisDetector = false; 
	//Por defecto
	double k = 0.04;
	//Numero maximo de esquinas = 500
	int maxCorners = MAX_CORNERS;

	//----Parametros para el metodo de Lucas Kannade ----
	vector<uchar> status;
	vector<float> error;
	//Valor entre 11 y 13
	int winsize = 11;
	//Valor piramidal de Lucas Kannade
	int maxlvl = 5;

	//Definicion de matrices
	//grayA, grayB imagenes en escala de grises de las imagenes de entrada
	Mat img_prev, img_next, grayA, grayB;

	//Verificar que la captura es correcta
	success = capture.read(frame);
	if (success == false){
		cout << "Cannot read the frame from file" << endl;
		getchar();
		return 1;
	}
	//Clonar el frame capturado
	img_prev = frame.clone();

	// Windows for all the images
	namedWindow("Corners A", WINDOW_AUTOSIZE);
	namedWindow("Corners B", WINDOW_AUTOSIZE);

	//Bucle que se capturara con la webcam
	//Se ejecutara de forma continua
	while (keypressed != ESCAPE)
	{
		//Leer frame por frame en el bucle
		success = capture.read(frame);
		//Verificar que la captura es correcta
		if (success == false){
			cout << "Cannot read the frame from file" << endl;
			return 1;
		}

		img_next = frame.clone();

		//Convertir imagen previa y siguiente a escala de grises
		cvtColor(img_prev, grayA, COLOR_RGB2GRAY);
		cvtColor(img_next, grayB, COLOR_RGB2GRAY);

		//Funcion para detectar las esquinas con el metodo de SHI-TOMASI
		//Se obtendran las esquinas que se van a seguir en la imgen grayA 
		goodFeaturesToTrack(grayA,
			cornersA, //Obtenicion de esquinas de la imagen grayA
			maxCorners,
			qualityLevel,
			minDistance,
			Mat(),
			blockSize,
			useHarrisDetector,
			k);

		//Calcular el flujo optico de Luca Kannade Piramidal
		//calcOpticalFlowPyrLK(grayA [imagen inicial], grayB[siguiente imagen en la captura de video], cornersA [esquinas SHI-TOMASI], cornersB[resultado de la funcion. Siguiente esquina a seguir], status, error,
			//Size(winsize, winsize), maxlvl);
		calcOpticalFlowPyrLK(grayA, grayB, cornersA, cornersB, status, error,
			Size(winsize, winsize), maxlvl);

		//Dibujar las esquinas detectadas
		//cout << "Number of cornersA detected: " << cornersA.size() << endl;
		//cout << "Optical Flow corners detected: " << cornersB.size() << endl;		
		for (int i = 0; i < cornersA.size(); i++)
		{
			line(img_prev, cornersA[i], cornersB[i], Scalar(0, 255, 0), 2);
		}

		// Show image in the name of the window
		imshow("Corners A", img_prev);
		imshow("Corners B", img_next);

		// Function for show the image in ms.
		keypressed = waitKey(1);
		img_prev = img_next;

	}
	// Free memory
	img_prev.release();
	img_next.release();
	grayA.release();
	grayB.release();
	destroyAllWindows();
	// End of the program
	return 0;
}
*/