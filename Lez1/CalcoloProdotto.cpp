#include <iostream>
//Dato in input il prezzo e la quantita di un prodotto calcolare il totale da pagare, visualizzare il risultato

using namespace std;

int main() {

	float  a;
	int  b;

	cout<<"Prezzo: ";
	cin>>a;

	cout<<"Quantita: ";
	cin>>b;

	float risultato = a * b;

	cout<<"Risulato: "<<risultato;
}