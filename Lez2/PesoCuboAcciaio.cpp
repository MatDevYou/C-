/*
	Quanto pesa un cubo di acciaio comune, il lato e 0.35 metri?
*/


#include <iostream>

using namespace std;

int main(){
	float l;
	float p = 7800;
	
	cout<<"Ciao caro mio";
	cout<<"\nInserisci lato: ";
	cin>>l;
	
	float CalcolaVolume = l * l * l;
	float PesoTotale = CalcolaVolume * p;

	cout<<"Peso totale: "<<PesoTotale;
}
