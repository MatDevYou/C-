/*
Peso della sfera di ghisa

peso del cilincdro di alluminio 

peso lingotto d'oro di dimensioni 25x10x10
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float l = 25;
	float p = 0.01932;
	float w = 10;
	float h = 10;
	
	
	float CalcolaVolume = l * w * h;
	double PesoTotale = CalcolaVolume * p;

	cout<<"Peso totale: "<<PesoTotale;
}
