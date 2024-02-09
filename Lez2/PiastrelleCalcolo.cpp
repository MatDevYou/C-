/*
Quante piastrelle (numero di pezzi) fi dorma quadrata bisogna acquistare per pavimentare una stanza di dimensioni nxm metri?
NB: si considera uno scrato pari al 15% in piu

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float p2;
	float p1;
	float n;
	float m;
	
	cout<<"Dimensione lato 1 : ";
	cin>>n;
	
	cout<<"Dimensione lato 2 : ";
	cin>>m;
	
	cout<<"Dimensione piastrelle : ";
	cin>>p1;	
	
	cout<<"Dimensione piastrelle : ";
	cin>>p2;
	
	double AreaPiastrella = p1 * p2;
	double AreaStanza = n * m;
	double Piastrelle = AreaStanza / AreaPiastrella;
	float Scarto =  (Piastrelle*0.15);
	
	cout<<"Grandezza stanza: "<<AreaStanza;
	cout<<"\nNumero piastrelle in : " <<AreaPiastrella;
	cout<<"\nScarto Piastrelle: "<<ceil(Scarto);
}

/*
OPERATORI LOGICI

negazione = !(x>10)

congiunzione (x >= 0) && (x<=10) {false, true} val Booleano

disgiunzione !((x <= 3) || (x >= 7)) 


if/else

if(x >= 10){
	cout<<x;
} else {
cout<<"Errore!";
}





















*/