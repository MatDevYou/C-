/*
Scrivere un programma C++ che consenta di gestire una lista di cose da fare, utilizzando le struct struct cosa_da_fare e struct lista_di_cose_da_fare. 
La struct cosa_da_fare contiene una stringa descrizione e un bool fatto. La struct lista_di_cose_da_fare contiene una lista di struct cosa_da_fare e un intero numero_di_cose.

Stampare a video l’elenco delle cose da fare.
Inserire un nuovo elemento nella lista.
Segnare una cosa come fatta.
Eliminare una cosa.
*/

#include <iostream>

using namespace std;

struct cosa_da_fare {
string descrizione;
bool fatto;
};

const int MAX_COSE = 3;

struct lista_di_cose_da_fare {
    cosa_da_fare lista[MAX_COSE];
    int numero_di_cose;
};

void stampaMenu() {
	cout<<"\nScegli cosa fare \n0 - Esci"<<endl;
	cout<<"1 - Stampare a video l’elenco delle cose da fare.: "<<endl;
	cout<<"2 - Inserire un nuovo elemento nella lista.: "<<endl;
	cout<<"3 - Eliminare una cosa."<<endl;
}

void creaElemento(struct lista_di_cose_da_fare &lista){
    cosa_da_fare nuova;
if (lista.numero_di_cose < MAX_COSE){
    cout << "inserisci cosa nuova da fare: " << endl;
    cin >> nuova.descrizione;
    lista.lista[lista.numero_di_cose++] = nuova;
    cout << "\nelemento della lista aggiunto " << endl;
    
} else {
    cout << "lista piena impossibile aggiungere elemento" << endl;
}
}

void stampaLista(lista_di_cose_da_fare& lista) {
    cout << "\nElenco delle cose da fare:\n";
    if (lista.numero_di_cose == 0) {
        cout << "La lista è vuota." << endl;
    } else {
        for (int i = 0; i < lista.numero_di_cose; ++i) {
            cout << i + 1 << ". " << lista.lista[i].descrizione;
            if (lista.lista[i].fatto) {
                cout << " (Fatto)";
            }
            cout << endl;
        }
    }
}

int main(){

lista_di_cose_da_fare lista = {};

int menu;

	do {

		stampaMenu();
		cin>>menu;

		//creo il menu per scegliere
		switch(menu) {
			case 0:
				cout << "\nProgramma terminato" << endl;
				break;
			case 1:
				stampaLista(lista);
				break;
			case 2:
				creaElemento(lista);
				break;
			case 3:
				stampaLista(lista);
				break;
			default:
				cout<<"Errore!"<<endl;
				stampaMenu();
				cin>>menu;
		}

	} while(menu != 0);

}

