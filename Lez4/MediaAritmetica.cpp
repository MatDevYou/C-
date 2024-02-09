/*
input numeri interi, calcolare la media aritmetica 
stampare il risultato

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	
	cout<<"inserisci quanti numeri interi positivi vuoi inserire: ";
	cin>>n;
	
	int somma =0;
	int numero;
	
	for (int i = 0; i < n ; i++){
		cout<<"inserisci numero positivo: ";
		cin>>numero;
		somma += numero;
	}
	
	double media = (double)somma / n;
	
	cout<<"Media: "<<media;

}
	


	


