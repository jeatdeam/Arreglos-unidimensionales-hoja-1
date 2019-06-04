#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main() {


	int min,promedio=0,max,a;


	cout << "Ingrese la cantidad de alumnos: ";
	cin >>a;

	int *ab;
	ab = new int[a];

	min = ab[0];

	max = ab[1];

	for (int i = 0; i < a; i++) {
		cout << "Alumno: " << i + 1 << endl;
		cout << "Ingrese la nota de la ultima practica: " ;
		cin >> ab[i];

		promedio =promedio+ ab[i];

		if(ab[0]>ab[i])

			min=ab[i];
		else {
			min = ab[0];
		}

		if (ab[1]>ab[i])

			max = ab[1];

		else {
			max = ab[i];
		}

		
	}

	cout << "Nota maxima es: " << max<<endl;
	cout << "Nota minima es: " << min << endl;
	cout << "El promedio es: "<<promedio/a <<endl;






	_getch();
	return 0;
}





