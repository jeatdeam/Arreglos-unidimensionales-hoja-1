#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

void Genera_Vector() {

	int a,b,j=0,k=0,NewNota;
	
	cout << "Ingrese N: ";
	cin >> a;


	int *VNotas;
	

	VNotas = new int[a];


	srand(time(NULL));


	for (int i = 0; i < a; i++) {


		VNotas[i] = 0 + rand() % (20 + 1 - 0);

		cout << "La nota "<<i+1<<" es: " << VNotas[i] << endl;
	}


	cout << "Ingrese Curva 0-5: ";
	cin >> b;

	for (int i = 0; i < a; i++) {

		NewNota = VNotas[i] + b;

		if (NewNota > 20) {

			cout << "La nueva nota es: 20 " << endl;
			j++;
		}
		else if (NewNota >= 13) {

			cout << "La nueva nota es: " << NewNota << endl;
			k++;
		}
		else {
			cout << "La nueva nota es: " << NewNota << endl;
		}


	}



	cout << "LA CANTIDAD DE APROBADOS ES: " << j+k;




	delete[]VNotas;

	
}

void Aumenta_Curva() {
	int b,j=0,NewNota=0;

	Genera_Vector();

	

	cout << "Ingrese Curva 0-5: ";
	cin >> b;

	for (int i = 0; i < 20 ; i++) {
		
		//NewNota =  VNotas[i] + b;

		if (NewNota > 20) {

			cout << "La nueva nota es: 20 " << endl;
			j++;
		}
		else if (NewNota >= 13) {

			cout << "La nueva nota es: " << NewNota << endl;
			j++;
		}
		else {
			cout << "La nueva nota es: " << NewNota << endl;
		}

		
	}


}


void Imprimir_Aprobados() {



}
int main() {

	
	Genera_Vector();



	_getch();
	return 0;
}
