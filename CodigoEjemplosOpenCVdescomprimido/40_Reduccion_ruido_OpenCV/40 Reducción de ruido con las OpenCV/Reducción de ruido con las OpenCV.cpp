// Filtrado.cpp: define el punto de entrada de la aplicación de consola.
//
//-----------------Filtrado
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
	//Imagen con ruido gaussiano
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\40_Reduccion_ruido_OpenCV\\40 Reducción de ruido con las OpenCV\\ivvi_512x512_gray_rg.jpg";
	//Imagen con ruido impulsional (sal y pimienta)
	//char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\40_Reduccion_ruido_OpenCV\\40 Reducción de ruido con las OpenCV\\ivvi_512x512_gray_ri.jpg"; 
	char NombreImagenIvvi[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\40_Reduccion_ruido_OpenCV\\40 Reducción de ruido con las OpenCV\\ivvi_512x512_gray.jpg";
	Mat src, imBlr, imGus, imMed, imBil, ivvi;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	src = cv::imread(NombreImagen);
	ivvi = cv::imread(NombreImagenIvvi);
	if (!src.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}

	// Homogeneous blur
	//kernel normalizado
	//blur(src imagen origen, imBlr imagen con filtro, Size(5, 5) tamano del kernel, Point(-1, -1) centro del kernel, 4 defecto);
	//blur(src, imBlr, Size(5, 5), Point(-1, -1), 4);
	blur(src, imBlr, Size(5, 5), Point(-1, -1), 4);

	// Gaussian blur
	//kernel gaussiano
	//GaussianBlur(src imagen origen, imGus imagen con filtro, Size(5, 5) tamano del kernel, 0 defecto, 0 defecto, 4 defecto);
	//GaussianBlur(src, imGus, Size(5, 5), 0, 0, 4);
	GaussianBlur(src, imGus, Size(5, 5), 0, 0, 4);

	// Median blur
	//kernel de la mediana
	//medianBlur(src imagen origen, imMed imagen con filtro, 5 tamano del kernel);
	//medianBlur(src, imMed, 5);
	medianBlur(src, imMed, 5);

	//bilateral filter
	//kernel bilateral (no conosco)
	//bilateralFilter(src imagen origen, imBil iamgen con filtro, 15 defecto, 80 defecto, 80 defecto);
	//bilateralFilter(src, imBil, 15, 80, 80);
	bilateralFilter(src, imBil, 15, 80, 80);

	//Mostrar la imagenes
	namedWindow("Vehiculo IVVI", WINDOW_AUTOSIZE);
	imshow("Vehiculo IVVI", ivvi);

	namedWindow("Original con ruido", WINDOW_AUTOSIZE);
	imshow("Original con ruido", src);

	namedWindow("blur", WINDOW_AUTOSIZE);
	imshow("blur", imBlr);

	namedWindow("Gaussian", WINDOW_AUTOSIZE);
	imshow("Gaussian", imGus);

	namedWindow("Median", WINDOW_AUTOSIZE);
	imshow("Median", imMed);

	namedWindow("bilateral", WINDOW_AUTOSIZE);
	imshow("bilateral", imBil);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/