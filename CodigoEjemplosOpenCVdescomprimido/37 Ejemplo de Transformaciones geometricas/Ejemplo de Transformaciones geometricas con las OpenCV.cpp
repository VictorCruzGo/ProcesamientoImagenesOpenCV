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
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\IVVI.jpg";
	Mat src, dst;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	src = imread(NombreImagen);
	if (!src.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}
	imshow("src", src);

	//SCALE
	//resize(src imagen original
		//, dst imagen escalado
		//, Size(0, 0) tamano de la imagen de salida dado como tupla. Size(0,0) toma las dimensiones de la imagen original.
		//, 0.5 escala en x
		//, 0.5 escala en y
		//, INTER_LINEAR metodo de interpolacion bilineal 2x2);

	//resize(src, dst, Size(0,0), 0.5, 0.5, INTER_LINEAR);
	//imshow("scale", dst);
	resize(src, dst, Size(0, 0), 0.5, 0.5, INTER_LINEAR);
	imshow("scale", dst);

	//TRANSLATION
	//Rect, definir una region rectangular(punto x, punto y, ancho, largo)
	//dst = Mat::zeros(src.size(), src.type());
	//src(Rect(100, 100, src.cols - 100, src.rows - 100)).copyTo(dst(cv::Rect(0, 0, src.cols - 100, src.rows - 100)));
	//imshow("translate", dst);
	dst = Mat::zeros(src.size(), src.type());
	src(Rect(100, 100, src.cols - 100, src.rows - 100)).copyTo(dst(cv::Rect(0, 0, src.cols - 100, src.rows - 100)));
	imshow("translate", dst);

	//ROTATE
	//int len = max(src.cols, src.rows);//Obtiene el valor maximo de filas o columnas.
	//cout << "len:" << len <<"src.cols:"<<src.cols<<"src.rows:"<<src.rows<<endl;
	//double angle = 60;//angulo.
	//Point2f pt(len / 2.0, len / 2.0); //Punto central, define coordinadas X,Y.
	//cout << "punto.x:" << pt.x << "punto.y:" << pt.y << endl;
	//Mat r = getRotationMatrix2D(pt, angle, 1.0);//Calcula la matriz de rotacion (punto central de la imagen, angulo, scala).
	//warpAffine(src, dst, r, Size(len, len));//Aplicar la rotacion. (imagen, imagen resulado, matriz de rotacion, tamano de la imagen resultado)
	//imshow("rotate", dst);

	int len = max(src.cols, src.rows);
	double angle = 60;
	Point2f pt(len / 2.0, len / 2.0);
	Mat r = getRotationMatrix2D(pt, angle, 1.0);
	warpAffine(src, dst, r, Size(len, len));
	imshow("rotate", dst);

	//REFLECTION
	//flip(src, dst, 1);//reflexion en Y=1.
	//imshow("reflection", dst);
	flip(src, dst, 1);
	imshow("reflection", dst);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/
