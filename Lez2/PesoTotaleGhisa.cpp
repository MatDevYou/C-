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
	float p = 6800;
	float g = M_PI; 
	
	cout<<"\nInserisci raggio: ";
	cin>>r;
	
	float CalcolaVolume = (4 * g * ( r * r * r))/3;
	float PesoTotale = CalcolaVolume * p;

	cout<<"Peso totale: "<<PesoTotale;
}
