
// Sobel.cpp: define el punto de entrada de la aplicación de consola.
//
//----------------Sobel

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>
#include<iostream>

using namespace cv;
using namespace std;
int main()
{
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\CodigoEjemplosOpenCVdescomprimido\\47_Deteccion_bordes_basado_gradiente_OpenCV\\ivvi_684x684_gray.jpg";
	Mat src, src_gray;
	Mat grad;

	// Generar gradiente en el eje x, y. grad_x and grad_y
	Mat grad_x, grad_y;
	// Valores ponderados a 8 bits
	Mat abs_grad_x, abs_grad_y;

	//Factores de escale y delta y profundidad (ddepth) 16 bits
	char window_name[] = "Sobel Demo - Simple Edge Detector";
	int scale = 1;
	int delta = 0;
	int ddepth = CV_16S;

	int c;

	/// Cargamos la imagen
	src = imread(NombreImagen);

	if (!src.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}

	//Filtro gaussiano de 3x3
	GaussianBlur(src, src, Size(3, 3), 0, 0, BORDER_DEFAULT);

	/// Gradiente X
	// Sobel(src imagen de entrada, grad_x resultado de la gradiente, ddepth profundida del resultado 16 bits, 1 derivada en x, 0 no derivar en y, 3 kernel, scale factor de escala, delta, BORDER_DEFAULT valor de 4);
	Sobel(src, grad_x, ddepth, 1, 0, 3, scale, delta, BORDER_DEFAULT);
	//cout << "gradiente en x->" << grad_x<<endl;
	//Funcion de conversion de escala de 16 bits a 8 bits.
	convertScaleAbs(grad_x, abs_grad_x);
	//cout << "gradiente absoluta en x->" << abs_grad_x << endl;

	/// Gradiente Y
	Sobel(src, grad_y, ddepth, 0, 1, 3, scale, delta, BORDER_DEFAULT);
	convertScaleAbs(grad_y, abs_grad_y);

	/// Total Gradiente (approximado)
	//Permite la suma ponderada de cada uno de los gradientes
	//addWeighted(abs_grad_x, 0.5 gradiente x 0.5, abs_grad_y, 0.5 gradiente y 0.5, 0 suma en escala, grad resultado de la suma);
	addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad);
	//cout << "gradiente grad->" << grad << endl;
	
	//Umbralizacion de una imagen. Permite obtener una imagen binaria (blanco y negro)
	//threshold(grad, grad, 80, 255, THRESH_BINARY);
	threshold(grad, grad, 80, 255, THRESH_BINARY);

	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", src);
	namedWindow("Sobel", WINDOW_AUTOSIZE);
	imshow("Sobel", grad);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}