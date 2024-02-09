/*
Peso della sfera di ghisa

peso del cilincdro di alluminio 

peso lingotto d'oro di dimensioni 25x10x10
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float r;
	float p = 2700;
	float h ;
	float g = M_PI; 
	
	cout<<"\nInserisci raggio: ";
	cin>>r;
	
	cout<<"\nInserisci altezza: ";
	cin>>h;
	
	float CalcolaVolume = g * (r * r * h);
	float PesoTotale = CalcolaVolume * p;

	cout<<"Peso totale: "<<PesoTotale;
}
