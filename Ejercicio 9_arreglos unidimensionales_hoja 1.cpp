#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<time.h>

using namespace std;

void Invertir() {

	int a, b = 0, c;

	int *ab, *ac;

	ab = new int[10];
	ac = new int[10];

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {

		ab[i] = 1 + rand() % (200 - 1 + 1);

		cout << "El NUMERO " << i + 1 << " : " << ab[i] << endl;

	}


	for (int i = 0; i < 10; i++) {

			while (ab[i] > 0) {

				c = ab[i] % 10;

				ab[i] = ab[i] / 10;

				b = b * 10 + c;

			}
			cout << "El numero invertido es: " << b << endl;
		}
	}


int main() {



	Invertir();

	_getch();
	return 0;
}
