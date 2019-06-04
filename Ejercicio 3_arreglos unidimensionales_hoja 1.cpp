#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main() {

	int n,j=0,edad;

	cout << "ingrese la cantidad personas: ";
	cin >> n;
	
	int *na;
	na = new int[n];


	srand(time(NULL));
	
	int menor=na[0];
	for (int i = 0; i < n; i++) {

		
		na[i] = 1 + rand() % (100);

		if (na[i] > 30 && na[i] < 50) {

			j++;
		}

		if (menor > na[i])
			menor = na[i];
		else {
			menor = na[0];
		}

		cout << "Posicionamineto: " << i + 1<<" es " << na[i]<<endl;
	}

	cout << "el numero de personas que tienen 30-50 años: " << j<<endl;

	cout << "la menor edad: " << menor<<endl;




	_getch();
	return 0;
}