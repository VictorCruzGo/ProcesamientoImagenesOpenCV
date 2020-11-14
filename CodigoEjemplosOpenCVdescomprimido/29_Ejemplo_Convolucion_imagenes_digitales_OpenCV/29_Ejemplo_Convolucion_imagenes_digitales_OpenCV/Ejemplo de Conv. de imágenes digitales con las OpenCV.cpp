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
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\29_Ejemplo_Convolucion_imagenes_digitales_OpenCV\\29_Ejemplo_Convolucion_imagenes_digitales_OpenCV\\IMG.jpg";
	Mat src, dst;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	src = imread(NombreImagen);
	if (!src.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}
	
	//Creacion de la matriz kernel de 5x5 para filtrado suave
	//Mat kernel;
	//kernel = Mat::ones(5, 5, CV_32F) / (float)(5 * 5);
	//cout << "kernel: " << kernel << endl;
	Mat kernel;
	kernel = Mat::ones(5, 5, CV_32F) / (float)(5 * 5);
	cout << "kernel: " << kernel << endl;

	//Kernel 
	//Filtrado suave: 0.04. En caso de ser 1 el filtrado estaria muy saturado.
	//kernel:     [0.039999999, 0.039999999, 0.039999999, 0.039999999, 0.039999999;
				 //0.039999999, 0.039999999, 0.039999999, 0.039999999, 0.039999999;
				 //0.039999999, 0.039999999, 0.039999999, 0.039999999, 0.039999999;
				 //0.039999999, 0.039999999, 0.039999999, 0.039999999, 0.039999999;
				 //0.039999999, 0.039999999, 0.039999999, 0.039999999, 0.039999999]

	//Convolucion
	//filter2D(
	//	src, imagen de entrada
	//	dst, imagen de salida convolucionado
	//	-1, La imagen de salida con el mismo numero de bits que la imagen src
	//	kernel, kernel de 5x5
	//	Point(-1, -1) centro del kernel en el centro del kennel, 
	//	0 umbias, delta
	//	BORDER_DEFAULT borde por defecto
	//);
	//filter2D(src, dst, -1, kernel, Point(-1, -1), 0, BORDER_DEFAULT);
	filter2D(src, dst, -1, kernel, Point(-1, -1), 0, BORDER_DEFAULT);
	
	namedWindow("src", WINDOW_AUTOSIZE);
	imshow("src", src);
	namedWindow("dst", WINDOW_AUTOSIZE);
	imshow("dst", dst);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/