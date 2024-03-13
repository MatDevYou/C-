/*

*/


#include <iostream>

using namespace std;

int main(){
	int percentuale;
	int p;
	
	cout<<"Inserisci prezzo: ";
	cin>>p;
	
	cout<<"Inserisci percentuale: ";
	cin>>percentuale;

	float Sconto =  (100 * percentuale) / p;
	float PrezzoScontato = p - Sconto;

	cout<<"\nSconto: "<<Sconto;
	cout<<"\nPrezzo Scontato: "<<PrezzoScontato;
	
}
