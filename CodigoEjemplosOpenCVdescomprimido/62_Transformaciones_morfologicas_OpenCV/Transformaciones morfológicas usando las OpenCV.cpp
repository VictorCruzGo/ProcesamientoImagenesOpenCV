#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
int main()
{
	//Nombre de la imagen que se va a cargar
	Mat src, dst;	
	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	src = imread("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\CodigoEjemplosOpenCVdescomprimido\\62_Transformaciones_morfologicas_OpenCV\\LetrasI_BW.jpg", 1);
	if (!src.data) {
		cout<< "Error al cargar la imagen: " << "LetrasI.jpg" <<endl;
		exit(1);
	}
	//Erosion
	//erode(src [Imagen a erosionar], dst [Imagen erosionada], Mat() [kernel por defecto de 3x3], Point(-1, -1) [Centro del kernel], 1 [Nro de iteraciones]);
	erode(src, dst, Mat(), Point(-1, -1), 1);

	//Dilatacion
	//dilate(src, dst, Mat(), Point(-1, -1), 1);
	
	//Transoformacion morfologica avanzada
	//morphologyEx(src, dst, CV_MOP_OPEN,  Mat(), Point(-1, -1), 1);
	//morphologyEx(src, dst, CV_MOP_CLOSE, Mat(), Point(-1, -1), 1);
	
	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", src );

	namedWindow("Morphology", WINDOW_AUTOSIZE);
	imshow("Morphology", dst);
	
	//Esperar a pulsar una tecla
	waitKey(0);	
	return 0;
}
*/