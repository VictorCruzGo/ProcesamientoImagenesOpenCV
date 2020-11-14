
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
//-------------  LUTs
int main()
{
	//Nombre del fichero
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\18_Aplicacion_LUTs\\18 Aplicación de LUTs\\ivvi_684x684_gray.jpg";
	
	Mat imagen;
	Mat ImagenResultadoLUT;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	imagen = cv::imread(NombreImagen);
	if (!imagen.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}

	//Matriz Look up table de una fila y 256 columnas
	Mat lut(1,256,CV_8U);
	
	for (int i = 0; i < 256; i++){
		//Aplicando una transformacion a LUT
		//lut.at<uchar>(i) = 255 - i; //Función Inversa
		//lut.at<uchar>(i) = pow((float)i * 255, (float)(1 / 2.0));//Funcion raiz cuadrada
		lut.at<uchar>(i) = pow((float)i, (float)3.0) / (255 * 255);//Funcion cubica
	}
	
	//Aplicar LUT a la imagen.
	//LUT(imagen imagen original, lut Look Up table, ImagenResultadoLUT imagen resultante);
	LUT(imagen, lut, ImagenResultadoLUT);

	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", imagen );

	namedWindow("ImagenResultadoLUT", WINDOW_AUTOSIZE);
	imshow("ImagenResultadoLUT", ImagenResultadoLUT);
	
	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/
