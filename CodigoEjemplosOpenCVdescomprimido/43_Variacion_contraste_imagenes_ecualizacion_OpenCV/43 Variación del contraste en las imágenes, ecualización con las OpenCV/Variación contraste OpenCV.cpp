

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

/*
int main()
{
	//NOMBRE DE LA IMAGEN QUE SE A CARGAR
	char NombreImagen[]= "C:\\Users\\vic\\Documents\\Victor Cruz Gomez Windows 10\\CursoOpenCV\\ImangesEjemplo\\ivvi_low_contrast.jpg";
	Mat original_img, equaliz_img;

	//CARGAMOS LA IMAGEN Y SE COMPRUEBA QUE LO HA CORRECTAMENTE
	original_img = cv::imread(NombreImagen, IMREAD_GRAYSCALE);

	if (!original_img.data) {
		cout << "Error al cargar la imagen: " << NombreImagen << endl;
		exit(1);
	}

	//VARIABLES PARA EL HISTOGRAMA
	int histSize = 256;

	//EL RANGO DEL NIVEL DEL GRIS 0-255
	float range[] = { 0, 256 };
	const float* histRange = { range };

	//DEFINICION DE LA IMAGEN PARA DIBUJAR LOS HISTOGRAMAS (Imagen para dibujar el histograma con fondo negro y de tamano 512x400 pixeles)
	int hist_w = 512; int hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);
	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
	Mat equalizedHistImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));

	cout << "bin_w:::" << bin_w<<endl;

	//CALCULAR EL HISTOGRAMA DE LA IMAGEN ORIGINAL
	Mat original_hist, normalized_hist, equalized_hist, equalized_normalized_hist;
	calcHist(&original_img, 1, 0, Mat(), original_hist, 1, &histSize, &histRange, true, false);

	// Mostrar los valores del histograma de la imagen original
	cout << "Original histogram" << endl;
	for (int h = 0; h < histSize; h++)
	{
		float binVal = original_hist.at<float>(h);
		cout << " " << binVal;
	}
	cout << endl;

	//NORMALIZAR EL HISTOGRAMA DE LA IMAGEN ORIGINAL. EL RESULTADO A [0, histImage.rows]
	normalize(original_hist, normalized_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
	cout << "histImage.rows: " <<histImage.rows<< endl;
	// Mostrar los valores
	cout << "Normalized histogram" << endl;
	for (int h = 0; h < histSize; h++)
	{
		float binVal = normalized_hist.at<float>(h);
		cout << " " << binVal;
	}
	cout << endl;

	//ECUALIZAR LA IMAGEN ORIGINAL
	equalizeHist(original_img, equaliz_img);

	//CALCULAR EL HISTOGRAMA DE LA IMAGEN ECUALIZADA
	calcHist(&equaliz_img, 1, 0, Mat(), equalized_hist, 1, &histSize, &histRange, true, false);

	// Mostrar los valores
	cout << "Equalized histogram" << endl;
	for (int h = 0; h < histSize; h++)
	{
		float binVal = equalized_hist.at<float>(h);
		cout << " " << binVal;
	}
	cout << endl;

	//NORMALIZAR EL HISTOGRAMA DE LA IMAGEN ECUALIZADA
	normalize(equalized_hist, equalized_normalized_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());

	// Mostrar los valores
	cout << "Equalized normalized histogram" << endl;
	for (int h = 0; h < histSize; h++)
	{
		float binVal = equalized_normalized_hist.at<float>(h);
		cout << " " << binVal;
	}
	cout << endl;

	//DIBUJAR LOS HISTOGRAMAS DE LAS IMAGENES ORIGINALES Y ECUALIZADAS
	for (int i = 1; i < histSize; i++)
	{
		//	Line of width 2 (bin_w = 512 width / 256 gray scale values) filled
		line(histImage,
			Point(bin_w*(i), hist_w),
			Point(bin_w*(i), hist_h - cvRound(normalized_hist.at<float>(i))),
			Scalar(255, 0, 0), bin_w, 8, 0);

		line(equalizedHistImage,
			Point(bin_w*(i), hist_w),
			Point(bin_w*(i), hist_h - cvRound(equalized_normalized_hist.at<float>(i))),
			Scalar(0, 255, 0), bin_w, 8, 0);
	}

	//Mostrar las imagens
	namedWindow("Original picture", WINDOW_AUTOSIZE);
	namedWindow("Equalized picture", WINDOW_AUTOSIZE);
	namedWindow("Original histogram", WINDOW_AUTOSIZE);
	namedWindow("Equalized histogram", WINDOW_AUTOSIZE);

	imshow("Original picture", original_img);
	imshow("Equalized picture", equaliz_img);
	imshow("Original histogram", histImage);
	imshow("Equalized histogram", equalizedHistImage);

	waitKey(0);
	return 0;
}
*/