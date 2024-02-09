/*
Dati in input il raggio di un cerchio
calcolare il perimetro, l'area e la diagonale

visualizzare i risultati

C++ il PI_GRECO si trova nella libreria cmath

Test:
input: 3.24, 2.51
output:

Circoferenza:
Area:
Diametro:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){

	float r;
	float p = M_PI; 
	
	cout<<"inserisci raggio del cerchio: ";	
	cin>>r;
	

	
	float C = 2*(r * p);
	float A = p * (r * r);
	float D = r * 2;
	
	cout<<"\n Circonferenza:  "<<C;
	cout<<"\n Area: "<<A;
	cout<<"\n Diametro: "<<D;
	
}
