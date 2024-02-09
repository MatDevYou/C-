/*
costo : 1000.00
rivalsa (4% del costo): 40.00euro
imponibile : 1040 euro

imponibile: 1000.00 euro
iva (22): 220.00 euro
totale lordo : 1220.00 euro
ritenuta d'acconto(20% dell'imponibile): 200.00 euro
totale netto: 1220.00 - 200.00 = 1020.00 euro
cassa 4%
rivalsa ulteriore costo addosso al cliente che metto d a parte per pagare le tasse
rivalsa somma costa + rivalsa = imponibile 

*/

#include <iostream>

using namespace std;

int main(){
	float iva = 0.22;
	float acc = 0.20;
	float riv = 0.04;
	float c;
	float i;
	
	cout<<"Inserisci costo: ";
	cin>>c;
	
	
	float CalcoloRivalsa = c * riv;
	float Imponibile = c + CalcoloRivalsa;
	float CalcolaIva = Imponibile * iva;
	float TotaleLordo = CalcolaIva + Imponibile;
	float RitenutaAcconto = Imponibile * acc;
	float TotaleNetto = TotaleLordo - RitenutaAcconto;
	
	cout<<"\n Imponibile calcolato: " <<Imponibile;
	cout<<"\n Totale Lordo (Imponibile + Iva):  "<<TotaleLordo;
	cout<<"\n Totale Netto(Lordo - Ritenuta): "<<TotaleNetto;

		
}

