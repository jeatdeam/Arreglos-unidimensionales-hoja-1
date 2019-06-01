#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(){
	
	int a,suma,menor,j;
cout<<"ingrese la cantidad de notas a promediar: "	;
cin>>a;
	int *ab;
	ab=new int[6]; 
	
	menor=ab[0];
	
	for(int i=0;i<a;i++){
		
	cout<<"ingrese las notas: ";
	cin>>ab[i];
	if(menor>=ab[i]){
	
	
		menor=ab[i];
		j++;
	}
		
	else{
		
		menor=ab[0];
	}
	
	
	suma=suma+ab[i];
	
	}
	
	if(j>1){
	
	cout<<"la suma es: "<<suma-menor<<endl;
}
	
	cout<<"la menor nota es: "<<menor<<endl;
	
	
	
	
	
	_getch;
	return 0;
}
