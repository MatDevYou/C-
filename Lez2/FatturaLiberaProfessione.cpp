/*
imponibile: 1000.00 euro
iva (22): 220.00 euro
totale lordo : 1220.00 euro
ritenuta d'acconto(20% dell'imponibile): 200.00 euro
totale netto: 1220.00 - 200.00 = 1020.00 euro

*/

#include <iostream>

using namespace std;

int main(){
	float iva = 0.22;
	float acc = 0.20;
	float i;
	
	cout<<"Inserisci imponibile: ";
	cin>>i;
	
	
	double CalcolaIva = i * iva;
	float TotaleLordo = CalcolaIva + i;
	float RitenutaAcconto = i * acc;
	float TotaleNetto = TotaleLordo - RitenutaAcconto;
	
	cout<<"\n Totale Lordo (Imponibile + Iva):  "<<TotaleLordo;
	cout<<"\n Totale Netto(Lordo - Ritenuta): "<<TotaleNetto;

		
}


