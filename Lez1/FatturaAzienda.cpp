
#include <iostream>


using namespace std;

int main() {

	float  a;
	int iva = 22;
	int c;

	cout<<"Imponibile : ";
	cin>>a;
	
	cout<<"Quantita :  ";
	cin>>c;
	

	float imponibile = a * c;
	float ivacalcolata =  imponibile * iva/100;
	float totale = ivacalcolata + imponibile;
	

	cout<<"\nImponibile: "<<imponibile<<" euro";
	cout<<"\nIva: "<<ivacalcolata<<" euro";
	cout<<"\nCosto Totale: "<<totale<<" euro";
}



//Nome file: FatturaAzienda 

/*Dato in input imponibile(iva + prezzo) stampa la fattuta costo totale  imponibile + iva    
imponibile:
iva: 
totale:
*/