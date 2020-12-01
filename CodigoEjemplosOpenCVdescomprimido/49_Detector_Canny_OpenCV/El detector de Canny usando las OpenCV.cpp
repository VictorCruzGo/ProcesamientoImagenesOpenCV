#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
int main()
{
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\CodigoEjemplosOpenCVdescomprimido\\49_Detector_Canny_OpenCV\\ivvi_684x684_gray.jpg";
	Mat imagen, ImagenCanny;
	
	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	imagen = cv::imread(NombreImagen);
	if( !imagen.data ) { 
		cout<< "Error al cargar la imagen: " << NombreImagen <<endl;
		exit(1);
	}
	
	//Canny(imagen [imagen de entrada], ImagenCanny[imagen con bordes], 100 [umbral inferior], 150 [umbral superior], 3 [mascara 3x3]);
	//100, todos los bordes con gradiente inferior a 100 no se consideran bordes
	//150, todos los graientes calculados por encima de 150 se consideran bordes
	//100-150, se considerara borde si tiene un pixel asociado en una vecindad 3x3 que es un borde.
	//Canny(imagen, ImagenCanny, 100, 150, 3);
	Canny(imagen, ImagenCanny, 150, 200, 3);
	//Canny(imagen, ImagenCanny, 100, 150, 3);
	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE);
	imshow("Original", imagen );

	namedWindow("Canny", WINDOW_AUTOSIZE);
	imshow("Canny", ImagenCanny);

	imwrite("ImagenPrueba1_sol.jpg", ImagenCanny);
	
	//Esperar a pulsar una tecla
	waitKey(0);
	
	return 0;
}
*/