

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;
/*
int main()
{
	//Nombre de la imagen que se va a cargar	
	Mat src, src_gray, dst;
	
	//Cargado de la imgen
	src = imread("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\CodigoEjemplosOpenCVdescomprimido\\58 Umbralización usando las OpenCV\\iCab_382x256.jpg", 1);

	//Convertir la imagen a escala de grises
	cvtColor(src, src_gray, COLOR_RGB2GRAY);

	//Umbrailzar la imagen
	//threshold(src_gray [imagen origital], dst [imagen umbralizada], 50 [valor de T umbralizacion], 255 [valor aplicar], THRESH_BINARY [tipo de umbralizacion]);
	threshold(src_gray, dst, 50, 255, THRESH_BINARY);

	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", src);
	namedWindow("ThreShold", WINDOW_AUTOSIZE);
	imshow("ThreShold", dst);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/