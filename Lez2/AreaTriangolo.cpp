/*
Dati in input il lato di un quadrato
calcolare il perimetro, l'area e la diagonale

visualizzare i risultati

Test:
input: 3.24
output:
Perimetro:
Area:
Diagonale:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){

	float l;
	
	cout<<"inserisci lato del quadrato: ";	
	cin>>l;
	
	float P = l * 4;
	float A = l * l;
	float D = sqrt((l*l)+(l*l));
	
	cout<<"\n Perimetro: "<<P;
	cout<<"\n Area: "<<A;
	cout<<"\n Diagonale: "<<D;
	
}
