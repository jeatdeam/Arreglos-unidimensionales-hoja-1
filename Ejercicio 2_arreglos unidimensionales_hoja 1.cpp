#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(){
	
	int a=10,peso=0,j=0,k=0,l=0;
	
	
	int *ab;
	ab=new int[10];
	
	int mayor=ab[0];
	
	for(int i=0;i<a;i++){
		
	cout<<"ingrese el peso del cliente "<<i+1<<" : ";
	cin>>ab[i];
	
	peso+=ab[i];
}

	for(int i=0;i<a;i++){
		
	if(ab[i]>mayor)
	
	mayor=ab[i];
	
	else{
		mayor=ab[0];
	}
}
	

	
	
	
	for(int i=0;i<a;i++){
		
		if(ab[i]<53)
		
		j++;
	}
	for(int i=0;i<a;i++){
		
		if(ab[i]>53&&ab[i]<60)
		
		k++;
	}
	
	for(int i=0;i<a;i++){
		
		if(ab[i]>60)
		
		l++;
	}
	
	
	
	cout<<"El peso promedio es: "<<peso<<endl;
	cout<<"El mayor peso: "<<mayor<<endl;
	cout<<"El numero de las personas con contextura delgada: "<<j<<endl;
	cout<<"El numero de las personas cuya contextura es mediana: "<<k<<endl;
	cout<<"El numero de las personas con contextura gruesa: "<<l<<endl;
	
	
	
	
	_getch();
	return 0;
}
