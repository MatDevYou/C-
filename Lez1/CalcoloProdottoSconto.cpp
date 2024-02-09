#include <iostream>
//Dato in input il prezzo,la quantita e la percentuale di sconto di un prodotto calcolare il totale da pagare non scontato, lo sconto e totale scontato da pagare

using namespace std;

int main() {

	float  a;
	int  b;
	float c;

	cout<<"Prezzo: ";
	cin>>a;
	
	cout<<"Sconto : ";
	cin>>c;
	
	cout<<"Quantita: ";
	cin>>b;

	float risultato = a * b;
	float sconto = risultato*(c / 100);
	float risultatoScontato = risultato - sconto;
	

	cout<<"\nRisulato: "<<risultato<<" euro";
	cout<<"\nSconto: "<<sconto;
	cout<<"\nRisultato Scontato: "<<risultatoScontato;
}