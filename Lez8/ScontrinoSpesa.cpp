/*
Esercizio - ScontrinoSpesa

Da input vengono rilevati il nome, il prezzo e la quantità di acquisto di un certo numero di prodotti.


Stampare elenco dei dati inseriti, il subtotale per ogni riga, il totale da pagare alla fine dell'elenco

*/



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    int n;

	
	cout<<"Quanti prodotti hai comprato: ";
	cin>>n;
	
	string nome[n];
	double prezzo[n];
	int quantita[n];
	for(int i = 0; i < n; i++){
		cout<<"\nNome prodotto che hai comprato: "<<endl;
		cin>>nome[i];
		cout<<"Prezzo prodotto che hai comprato: "<<endl;
		cin>>prezzo[i];
		cout<<"Quantita di prodotti che hai comprato: "<<endl;
		cin>>quantita[i];
}
	
int max = 0;
string nomeNew;
 	for(int i = 0; i < n;i++){
		double totale;
		totale += prezzo[i] * quantita[i];
	if(prezzo[i]>max){
		max = prezzo[i];
		nomeNew = nome[i];
		cout<<"prezzo Max: "<<nomeNew<<endl;
		} 
	
		
		cout<<"Nome prodotto: "<<nome[i]<<" Quantita: "<<quantita[i]<<" Prezzo: "<<prezzo[i]<<endl;
		cout<<"totale: "<<totale;
	}
	
}
