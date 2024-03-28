#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int DIM = 15;

struct consulente {
	string nome;
	double fattura;
	double spesa;
};



double totaleFatturato(struct consulente x[], int dim) {
    double totale = 0.0;
    for (int i = 0; i < dim; ++i) {
        totale += x[i].fattura;
    }
    return totale;
}

int cercaFatturatoMax(struct consulente x[], int dim) {
    double max = 0.0;
    int indiceMax = 0;
    for (int i = 0; i < dim; i++) {
        if (x[i].fattura > max) {
            max = x[i].fattura;
            indiceMax = i;
        }
    }
    return indiceMax;
}

int cercaSpeseMin(struct consulente x[], int dim){
	double min = 0.0;
	int indiceMin = 0;
	for (int i = 0; i < dim; i++){
		if (x[i].spesa < min){
			min = x[i].spesa;
		}
	}
	return indiceMin;
}

void stampaMenu(){
	cout << "0 - scelta" << endl;
	cout << "1 - Totale fatturato"<< endl;
	cout << "2 - Cerca fatturato max"<< endl;
	cout << "3 - Cerca spesa min"<< endl;
	cout << "4 - Lista consulenti"<< endl;
}




void stampaElenco(struct consulente x[], int dim) {
    for (int i = 0; i < dim; ++i) {
        cout << "Nome: " << x[i].nome << ", Fattura: " << x[i].fattura << ", Spesa: " << x[i].spesa << endl;
    }
}



void stampa(struct consulente x){
	cout << " " << x.nome << " " << x.fattura << " " << x.spesa;
}

int main(){

	//lista dei consulenti con forma l'azienda

	consulente lista[DIM]={

	{"Rino Gattino",12578.45,2356.55},

	{"Lina Cannino",22578.00,3569.12},

	{"Giulio Pazzera",40456.80,4589.25},

	{"Alfredo Rondo",8587.90,3569.22},

	{"Giuseppe Carletto",12578.00,1258.00},

	{"Carlo De Niro",9578.85,895.25},

	{"Giulio Lostreto",10508.00,3159.00},

	{"Sara Lima",26898.45,3569.00},

	{"Roberto Canuto",14778.75,2587.23},

	{"Ilaria Gino",32532.43,2552.25},

	{"Gino Roberti",17899.75,1478.33},

	{"Rosa Gamba",12568.45,896.35},

	{"Valeria Aulico",14578.45,4656.55},

	{"Riccardo Cortiglia",32573.35,5376.55},

	{"Luca Grosto",10570.45,2300.50}

	};



	int scelta;

	do{

		stampaMenu();

		cout<<"\n\nScelta: ";

		cin>>scelta;


		switch(scelta){

			case 0: cout<<"Programma terminato";break;

			case 1: cout<<"Totale fatturato: "<<totaleFatturato(lista,DIM);break;

			case 2: stampa(lista[cercaFatturatoMax(lista,DIM)]);break;

			case 3: stampa(lista[cercaSpeseMin(lista,DIM)]);break;

			case 4: cout<<"Elenco consulenti:\n";stampaElenco(lista,DIM);break;

			default: cout<<"ERRORE! Valore inserito non valido!";

		}

		cout<<"\n\n";

	}while(scelta!=0);	

}