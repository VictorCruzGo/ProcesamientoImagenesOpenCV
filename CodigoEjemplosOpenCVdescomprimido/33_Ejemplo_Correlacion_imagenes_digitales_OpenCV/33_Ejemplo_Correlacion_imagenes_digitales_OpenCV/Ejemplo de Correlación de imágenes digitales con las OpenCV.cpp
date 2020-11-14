//------------------Correlacion normalizada y búsqueda de máximos

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
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\33_Ejemplo_Correlacion_imagenes_digitales_OpenCV\\33_Ejemplo_Correlacion_imagenes_digitales_OpenCV\\IMG.jpg";
	char NombreModelo[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\33_Ejemplo_Correlacion_imagenes_digitales_OpenCV\\33_Ejemplo_Correlacion_imagenes_digitales_OpenCV\\MJ.jpg";
	
	//Cargamos las imagenes y se comprueba que lo ha hecho correctamente
	Mat src = imread(NombreImagen);
	Mat templ = imread(NombreModelo);

	if (!src.data || !templ.data) {
		cout << "Error al cargar la imagenes" << endl;
		exit(1);
	}

	//Matriz destino o Mapa de comparacion (un poco mas pequena)
	Mat dst;

	//Dimension de la matriz destino 
	int iwidth = src.cols - templ.cols + 1;
	int iheight = src.rows - templ.rows + 1;
	cout << "src.cols:" << src.cols<<" - templ.cols:"<< templ.cols<<" - iwidth:"<< iwidth<< endl;
	
	//Crear la matriz destino de 32 bits (Obtendremos valores mayor de 256)
	//Sin ejecutar esta linea, automaticamente crear la matriz destino
	dst.create(iheight, iwidth, CV_32FC1);
	//dst.create(src.rows, src.cols, CV_32FC1);
	//dst.create(1024, 1024, CV_32FC1);

	//Metodo de comparacion - Correlacion de coeficiente normalizado.
	int match_method = TM_CCOEFF_NORMED;

	//Correlacion
	//Plantilla de comparacion. Calcular el matching de la correlacion.
	matchTemplate(src, templ, dst, match_method);
	//Normalizacion de la imagen destino
	normalize(dst, dst, 0, 1, NORM_MINMAX, -1, Mat());

	//Variables para almacenar los valores y puntos minimos-maximos
	double minVal, maxMal;
	Point minLoc, maxLoc;
	Point matchLoc;

	//Localizar en el mapa de comparacion (matriz destino) los valores minimo-maximos y posiciones.
	minMaxLoc(dst, &minVal, &maxMal, &minLoc, &maxLoc, Mat());
	cout << "Min:" << minVal << " - Max: " << maxMal << " - Min loc:"<<minLoc<<" - Max loc:"<<maxLoc<<endl;
	
	//En el metodo de comparacion SQIFF el punto de localizacion de la imagen es el minimo.
	//Para los demas casos el punto de localizacion de la imagen buscada es el maximo.
	if (match_method == TM_SQDIFF || match_method == TM_SQDIFF_NORMED)
	{
		matchLoc = minLoc;
	}
	else
	{
		matchLoc = maxLoc;
	}

	//Localizar la imagen plantilla en la src. Dibujar el rectangulo Verde
	//Para dibujar un rectangulo se necesita: punto.x + ancho de la plantilla,  punto.y + alto de la plantilla
	//El matchLoc, no corresponde al mismo valor en la matriz source y la matriz destino
	rectangle(src, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar(0, 255, 0), 4, 8, 0);
	//Localizar la imagen plantilla en la imagen de correlacion.	Dibujar el Rectangulo Negro
	rectangle(dst, Point(matchLoc.x - (templ.cols / 2), matchLoc.y - (templ.rows / 2)), Point(matchLoc.x + (templ.cols / 2), matchLoc.y + (templ.rows / 2)), Scalar::all(0), 4, 8, 0);
	

	imshow("src", src);
	imshow("Result", dst);
	imshow("templ", templ);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/
