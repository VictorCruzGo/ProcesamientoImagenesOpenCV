//------------------ Imagen RGB

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;


/*
int main()
{
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\21_Espacios_color_OpenCV\\21 Espacios de color con las OpenCV\\ivvi_684x684.jpg";
	Mat imRGB, imHSV; 

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	imRGB = imread(NombreImagen);
	if (!imRGB.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}

	//Separar la imagen a 3 subimagenes ( A, V y R )
	//Separar la imagen RGB en 3 planos de color: R,G y B
	//vector<Mat> bgr_planes;
	//split(imRGB, bgr_planes);
	vector<Mat> bgr_planes;
	split(imRGB, bgr_planes);
	
	//Convertir RGB a HSV
	//cvtColor(imRGB, imHSV, COLOR_BGR2HSV);
	cvtColor(imRGB, imHSV, COLOR_BGR2HSV);
	
	//Separara la imagen HSV en 3 planos de color: H, S y V
	//vector<Mat> hsv_planes;
	//split(imHSV, hsv_planes);
	vector<Mat> hsv_planes;
	split(imHSV, hsv_planes);

	//Mostrar la imagen
	
	//namedWindow("Original RGB", WINDOW_AUTOSIZE);
	//imshow("Original RGB", imRGB);
	
	//Planos de color BGR
	//namedWindow("B", WINDOW_AUTOSIZE);
	//imshow("B", bgr_planes[0]);

	//namedWindow("G", WINDOW_AUTOSIZE);
	//imshow("G", bgr_planes[1]);

	//namedWindow("R", WINDOW_AUTOSIZE);
	//imshow("R", bgr_planes[2]);
	
	//namedWindow("HSV", WINDOW_AUTOSIZE);
	//imshow("HSV", imHSV);
	
	//Planos de color HSV
	namedWindow("H", WINDOW_AUTOSIZE);
	imshow("H", hsv_planes[0]);

	namedWindow("S", WINDOW_AUTOSIZE);
	imshow("S", hsv_planes[1]);

	namedWindow("V", WINDOW_AUTOSIZE);
	imshow("V", hsv_planes[2]);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/