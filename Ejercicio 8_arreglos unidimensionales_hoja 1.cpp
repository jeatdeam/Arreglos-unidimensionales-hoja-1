#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main() {

	int a;

	float *ab;

	ab = new float[5];

	cout << "Ingrese la cantidad de alumnos : " << endl;;
	cin >> a;


	for (int i = 0; i < a; i++) {

		cout << "ingrese la nota final del alumno  " << i + 1<<" : "<<endl;
		cin >> ab[i];
		

		delete[] ab;
	}


	cout << "Las notas son: " << ab[i] << endl;

	_getch();
	return 0;
}