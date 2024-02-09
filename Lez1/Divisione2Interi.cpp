#include <iostream>

using namespace std;

int main() {
//dati 2 numeri interi, calcolare il quoziente intero, il resto e il quoziente reale. Stampa i risultati

	int a;
	int b;

	cout<<"inserisci il dividendo: ";
	cin>>a;

	cout<<"Inserisci il divisore: ";
	cin>>b;

	int qi = a / b; //quoziente intero
	int r = a % b; //resto tra numeri interi
	float qr =	(float)a / b; //quoziente reale operazione di casting
	
	cout<<"\nQuoziente intero: "<<qi;
	cout<<"\nResto: "<<r;
	cout<<"\nQuoziente reale: "<<qr;
}