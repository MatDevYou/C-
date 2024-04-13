/*
Esercizio - GestioneEmail

Realizzare un programma che consenta la gestione di messaggi email. Ogni email deve contenere i seguenti dati:

Data
Ora
A
DA
CC
BCC
Soggetto
Messaggio
Le operazioni possibili sono:

nuova email
visualizza email
elimina email
esci




*/

#include <iostream>
#include <string>
using namespace std;

// Email struct
struct Email {
	string data;
	string ora;
	string A;
	string Da;
	string CC;
	string BCC;
	string soggetto;
	string messaggio;
};

// Funzione che mi stampa email
void stampaEmail(const Email &e) {
	cout << "Data: " << e.data << endl;
	cout << "Ora: " << e.ora << endl;
	cout << "A: " << e.A << endl;
	cout << "Da: " << e.Da << endl;
	cout << "CC: " << e.CC << endl;
	cout << "BCC: " << e.BCC << endl;
	cout << "Soggetto: " << e.soggetto << endl;
	cout << "Messaggio: " << e.messaggio << endl << endl;
}
void stampaMenu() {
	cout<<"\nScegli cosa fare \n0 - Esci"<<endl;
	cout<<"1 - Crea Nuova Email: "<<endl;
	cout<<"2 - Visualizza Email: "<<endl;
	cout<<"3 - Elimina Email"<<endl;
}

void creaEmail(Email &e) {
	cout << "Inserisci la data: ";
	cin >> e.data;

	cout << "Inserisci l'ora: ";
	cin >> e.ora;


	cout << "Inserisci A: ";
	cin >> e.A;


	cout << "Inserisci Da: ";
	cin >> e.Da;


	cout << "Inserisci CC: ";
	cin >> e.CC;


	cout << "Inserisci BCC: ";
	cin >> e.BCC;


	cout << "Inserisci Soggetto: ";
	cin >> e.soggetto;


	cout << "Inserisci Messaggio: ";
	cin >> e.messaggio;
}

void eliminaEmail(Email &e) {
  int indiceEmail;

  cout << "Inserisci l'indice dell'email da eliminare: ";
  cin >> indiceEmail;

  // Validazione dell'indice
  if (indiceEmail < 0 || indiceEmail >= 1) {
    cout << "Indice non valido. Email non eliminata." << endl;
    return;
  }

  cout << "Email eliminata con successo." << endl;
}

int main() {
	//sanitizzo il menu
	int menu;
	 Email em = {"", "", "", "", "", "", "", " "};

	do {

		stampaMenu();
		cin>>menu;

		//creo il menu per scegliere
		switch(menu) {
			case 0:
				cout << "\nProgramma terminato" << endl;
				break;
			case 1:
				creaEmail(em);
				break;
			case 2:
				stampaEmail(em);
				break;
			case 3:
				eliminaEmail(em);
				break;
			default:
				cout<<"Errore!"<<endl;
				stampaMenu();
				cin>>menu;
		}

	} while(menu != 0);



}
