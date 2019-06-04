#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void SumaDig(int n) {
	int b, b1, b2, b3, b4;

	b1 = n % 10;
	b2 =( n / 10) % 10;
	b3 = ((n / 10) / 10) % 10;

	b4 = b1 + b2 + b3;

	if (b4 % 3 == 0) {

		cout << n << " Es divisible entre 3: " << endl;

	}
	else {

		cout << n << " No es divisible entre 3: " << endl;
	}
	
}

int main() {

	int *a;

	a = new int[10];

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {

		a[i] = 1 + rand() % (200 + 1 - 1);

		cout << "El numero " << i + 1 << " : " << a[i] << endl;

		SumaDig(a[i]);

	}

	_getch();
	return 0;
}
