#include <iostream>

using namespace std;

int main() {
int cons;
float fatturato;
double spesa = 0;
double totaleFatturato = 0;
double totaleSpesa = 0;


do {	
	cout<<"Inserisci numero di consulenti: "<<endl;
	cin>>cons;
	
	if (cons <= 0){
		cout<<"Errore"<<endl;
	}
	
} while (cons <= 0);

for (int i = 0; i < cons; i++){
	
	do {
		cout<<"Inserisci il fatturato del consulente: ";
		cin>>fatturato;
		
		if (fatturato <= 0){
		cout<<"Errore"<<endl;
		}
			
	} while (fatturato <= 0);

	cout<<"Inserisci spesa del consulente: ";
	cin>>spesa;
	
	
	totaleFatturato += fatturato;
	totaleSpesa += spesa; 
}


float totaleSocieta = totaleFatturato - totaleSpesa;

cout<<"totale fatturato: "<<totaleFatturato<<endl;
cout<<"totale spesa: "<<totaleSpesa<<endl;
cout<<"totale societa: "<<totaleSocieta<<endl;
}