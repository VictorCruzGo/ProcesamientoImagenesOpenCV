

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
// --------- Dibujar un rectangulo
int main()
{
	//Nombre de la imagen que se va a cargar	
	//Mat imagen = cv::imread("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\16_Acceso_pixeles_una_imagen\\16 Acceso a los píxeles de una imagen\\ivvi_684x684_gray.jpg");
	Mat imagen = cv::imread("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\cabezaIronMan.jpg");

	Mat imagenGray(imagen.rows, imagen.cols, CV_8UC1);

	for (size_t i = 0; i < imagen.rows; i++)
	{
		for (size_t j = 0; j < imagen.cols; j++)
		{
			Vec3b pixel = imagen.at<Vec3b>(i, j);

			uchar B = pixel[0];
			uchar G = pixel[1];
			uchar R = pixel[2];
			
			imagenGray.at<uchar>(i, j) = B + G + R / 3;
		}
	}


	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", imagen);

	namedWindow("Copia", WINDOW_AUTOSIZE);
	imshow("Copia", imagenGray);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/

