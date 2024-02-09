/*
Dati in input il lato di un rettangolo
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

	float h;
	float b;
	
	cout<<"inserisci lato del rettangolo: ";	
	cin>>h;
	
	cout<<"inserisci base del rettangolo: ";	
	cin>>b;
	
	float P = 2*(b + h);
	float A = b * h;
	float D = sqrt((h * h)+(b  * b));
	
	cout<<"\n Perimetro: "<<P;
	cout<<"\n Area: "<<A;
	cout<<"\n Diagonale: "<<D;
	
}
