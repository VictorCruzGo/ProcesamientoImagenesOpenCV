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
	//char NombreImagen[] = "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\ivvi.jpg";
	char NombreImagen[]= "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\ivvi.jpg";
	//Variable del tipo matriz para almacenar la imagen.
	//Mat imagen;
	Mat imagen;
	
	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	//imagen = imread(NombreImagen);
	imagen = imread(NombreImagen);

	//Verificar si la imagen se cargo correctamente
	if( !imagen.data ) { 
		//Mostrar error en la consoloa y finalizar la aplicacion
		//cout<< "Error al cargar la imagen: " << NombreImagen <<endl;
		//exit(1);
		cout << "Error al cargar la image: " << NombreImagen << endl;
		exit(1);
	}
		
	//Mostrar la imagen
	//namedWindow("Original", WINDOW_AUTOSIZE);
	//imshow("Original", imagen );
	//Crae un ventana
	namedWindow("Original", WINDOW_AUTOSIZE);
	//Muestra la imagen en la ventana
	imshow("Original", imagen);


	//Esperar a pulsar una tecla
	//waitKey(0);
	waitKey(0);
	
	//return 0;
	return 0;
}

*/
