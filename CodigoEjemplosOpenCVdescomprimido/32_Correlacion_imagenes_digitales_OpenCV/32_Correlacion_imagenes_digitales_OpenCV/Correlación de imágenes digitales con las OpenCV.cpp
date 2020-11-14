//------------------Correlacion
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
	int i;
	//Nombre de la imagen que se va a cargar
	//char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\32_Correlacion_imagenes_digitales_OpenCV\\32_Correlacion_imagenes_digitales_OpenCV\\corr_norm.tif";
	//char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\imagenBlancoNegro2.tif";
	//char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\imagenBlancoNegro3.png";
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\imagenFondoNegro.png";
	
	//template o imagen a buscar.
	//char NombreModelo[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\32_Correlacion_imagenes_digitales_OpenCV\\32_Correlacion_imagenes_digitales_OpenCV\\modelo.tif";
	//char NombreModelo[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\templateCuadradoNegro2.tif";
	//char NombreModelo[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\templateCuadradoNegro3.png";
	char NombreModelo[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\templateCuadradoBlanco.png";
	//Cargamos las imagenes y se comprueba que lo ha hecho correctamente
	Mat src = imread(NombreImagen);
	Mat templ = imread(NombreModelo);

	if (!src.data || !templ.data) {
		cout << "Error al cargar la imagenes" << endl;
		exit(1);
	}

	//Matriz para almacenar los resultados de los metodos de matching
	Mat ftmp[6];
	int iwidth;
	int iheight;

	//Reservamos memoria para los diversos metodos
	iwidth = src.cols - templ.cols + 1;
	iheight = src.rows - templ.rows + 1;

	for (i = 0; i < 6; ++i)
		ftmp[i].create(iheight, iwidth, CV_32SC1);

	//Correlacion para los 6 metodos	
	for (i = 0; i < 6; ++i)
	//for (i = 0; i < 1; ++i)
	{
		//matchTemplate(src imagen, templ plantilla, ftmp[i] resultado, i metodo SQDIFF, CORR, CCOEFF);
		//normalize(ftmp[i] imagen, ftmp[i] imagen normalizada, 1 valor maximo, 0 valor minimo, NORM_MINMAX tipo normalizacion);
		matchTemplate(src, templ, ftmp[i], i);
		//cout << "Antes de la normalizacion" << endl;
		//cout <<ftmp[i] << endl;
		normalize(ftmp[i], ftmp[i], 1, 0, NORM_MINMAX);
		//cout << "Despues de la normalizacion" << endl;
		//cout << ftmp[i] << endl;
	}

	//Pantalla
	namedWindow("Modelo", WINDOW_AUTOSIZE);
	imshow("Modelo", templ);

	namedWindow("Imagen", WINDOW_AUTOSIZE);
	imshow("Imagen", src);

	namedWindow("SQDIFF", WINDOW_AUTOSIZE);
	imshow("SQDIFF", ftmp[0]);
	//cout << ftmp[0] << endl;
	
	namedWindow("SQDIFF_NORMED", WINDOW_AUTOSIZE);
	imshow("SQDIFF_NORMED", ftmp[1]);
	
	namedWindow("CCORR", WINDOW_AUTOSIZE);
	imshow("CCORR", ftmp[2]);
	
	namedWindow("CCORR_NORMED", WINDOW_AUTOSIZE);
	imshow("CCORR_NORMED", ftmp[3]);
	
	namedWindow("CCOEFF", WINDOW_AUTOSIZE);
	imshow("CCOEFF", ftmp[4]);
	
	namedWindow("CCOEFF_NORMED", WINDOW_AUTOSIZE);
	imshow("CCOEFF_NORMED", ftmp[5]);
	
	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/
