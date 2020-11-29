#include"iostream" //Operaciond de entrada y salida
#include "stdio.h" //Standar Input Output Header (Cabecera estandar E/S) contiene las definiciones de: constantes, funciones, funciones de la biblioteca estandar del lenguaje C.

using namespace std;

int funcion(int valor) {
	valor = valor + 10;
	return valor;
}

int funcionPunteros(int* valor) {
	*valor = *valor + 10;
	return *valor;
}

/*
int main() {
	int numero = 10;
	cout << "Antes de funcion " << numero << "\n";//10
	funcion(numero); //Internamente suma +10 pero no almacenamos el resultado en ningun lado.
	cout << "Despues de la funcion " << numero << "\n";//10
	cout << "Antes de la funcionPunteros " << numero << "\n";//10
	funcionPunteros(&numero); //Obtener la direccion de memoria de la variable numero
	cout << "Despues de la funcionPunteros " << numero << "\n";//20. porque se usaron punteros para modificar el valor de la variable numero.
	system("pause");
	return 0;
}
*/