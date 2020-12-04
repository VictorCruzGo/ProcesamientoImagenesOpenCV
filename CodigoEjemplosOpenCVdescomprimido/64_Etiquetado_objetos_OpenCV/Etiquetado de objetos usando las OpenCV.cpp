
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/ml.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {

	Mat image = imread("C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\CodigoEjemplosOpenCVdescomprimido\\64_Etiquetado_objetos_OpenCV\\clase1.jpg");
	
	if (!image.data) {
		cout << "Error!!\n";
		return 1;
	}
	imshow("Input Image", image);
	
	//Preparacion de la imagen para encontrar contornos
	//Convertir la imagen a escala de grises
	cvtColor(image, image, COLOR_BGR2GRAY);
	//Umbralizacion. Obtener una imagen binaria
	threshold(image, image, 128, 255, THRESH_BINARY);

	//Encontrar los contornos
	//Vector para almacenar los contornos
	vector<vector<Point> > contours;
	Mat contourOutput = image.clone();
	
	//Encontrar contornos
	//findContours(contourOutput [Imagen donde localizar los contornos], contours [Contorno localizados], RETR_LIST [Recuperar lista de contornos], CHAIN_APPROX_NONE []);
	findContours(contourOutput, contours, RETR_LIST, CHAIN_APPROX_NONE);

	//Dibujar los contornos
	//Matriz donde dibujar los contornos
	Mat contourImage(image.size(), CV_8UC3, Scalar(0, 0, 0));
	
	//Colores para dibujar los contornos RGB
	Scalar colors[3];
	colors[0] = Scalar(255, 0, 0);
	colors[1] = Scalar(0, 255, 0);
	colors[2] = Scalar(0, 0, 255);
	
	//Recorrer todos los contornos. Dibujar los contornos
	for (size_t idx = 0; idx < contours.size(); idx++)
		//drawContours(contourImage [imagen donde dibujar los contornos], contours [contornos para dibujar], idx[indice del contorno], colors[idx % 3][Color del contorno]);
		drawContours(contourImage, contours, idx, colors[idx % 3]);	
		
	imshow("Contours", contourImage);	
	
	waitKey(0);
	return 0;
}


