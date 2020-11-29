

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
// --------- Dibujar un rectangulo
int main()
{
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\16_Acceso_pixeles_una_imagen\\16 Acceso a los píxeles de una imagen\\ivvi_684x684_gray.jpg";
	Mat imagen;
	int i,j;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente.
	//CV_8UC3, Predeterminado para imagenes en color de 8 bits sin signo(8U) y 3 canales(C3).
	imagen = cv::imread(NombreImagen);
	if (!imagen.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}
	
	//Recorrer la matriz de la imagenes desde 1/4 hasta 3/4
	for (i = imagen.rows / 4; i < 3 * imagen.rows / 4; ++i){
		for (j = imagen.cols / 4; j < 3 * imagen.cols / 4; ++j){
			//Accediento al pixel
			//Vec3b vector con 3 bytes de entrada RGB.
			//Vec3b representa un triplete de valores enteros entre 0 y 255.
			//Vec3b representa un array de 3 valores cado uno de estos valores representa un canal de color del pixel.
			imagen.at<Vec3b>(Point(i, j)) = Vec3b(0, 0, 0);
		}
	}

	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", imagen);

	// Guardo el resultado
	imwrite("Resultado.jpg", imagen);

	//Esperar a pulsar una tecla
	waitKey(0);
	return 0;
}

*/

