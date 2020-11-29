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
	//Crear las imagenes
	Mat img1 = Mat::zeros(Size(400, 200), CV_8UC1);
	Mat img2 = Mat::zeros(Size(400, 200), CV_8UC1);

	//Procesar las celdas igual que matrices.
	//La mitad de las columnas en color blanco.
	img1(Range(0, img1.rows), Range(0, img1.cols / 2)) = 255; 
	imshow("img1", img1);

	//Color blanco en las coordenadas (100,150)(150,350)
	img2(Range(100, 150), Range(150, 350)) = 255;
	imshow("img2", img2);

	Mat res;
	//bitwise = bit a bit
	//bitwise_and(img1, img2, res);
	//imshow("AND", res);
	
	//bitwise_or(img1,img2, res);
	//imshow("OR", res);
		
	//bitwise_xor(img1,img2,res);
	//imshow("XOR", res);
	
	bitwise_not(img1,res);
	imshow("NOT", res);
	

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}
*/