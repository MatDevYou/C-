/*
Dati in input il raggio di un triangolo
calcolare il perimetro, l'area e tipo(Equilatero / isoscele / scaleno)

visualizzare i risultati

per calcolcare area triangolo conoscendo 3 lati bisogna usare la formula di Erone
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

	float l1;
	float l2;
	float l3; 
   
	
	cout<<"inserisci lato del rettangolo : ";	
	cin>>l1;
	
	cout<<"inserisci lato del rettangolo : ";	
	cin>>l2;
	
	cout<<"inserisci lato del rettangolo : ";	
	cin>>l3;
	
	float P = (l1 + l2 + l3) / 2;
	float A = sqrt(P*(P-l1)*(P-l2)*(P-l3));

	
	cout<<"\n Perimetro:  "<<P;
	cout<<"\n Area: "<<A;

	
}
