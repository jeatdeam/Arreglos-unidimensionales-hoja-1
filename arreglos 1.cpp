#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
using namespace std;

int main() {
	
	
	int nele; //numero de elementos del arreglo
	int *X = new int[10]; // Arreglo que almacenara los datos
	//Lectura y Validación del Numero de elementos

	cout << "ingrese nele: ";
	cin >> nele;



		//Generar aleatoriamente los datos del arreglo
		srand(time_t(0));
		for (int i = 0; i < nele; i++) {
			X[i] = rand();
			cout << X[i] << " " << endl;
		}


	_getch();

	return 0;
}