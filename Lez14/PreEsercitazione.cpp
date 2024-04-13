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

Creare tre messaggi e visualizzarli



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

int main() {

	Email em = {"", "", "", "", "", "", "", " "};
	Email em1 = {"10/03/2024", "12:00", "recipient@example.com", "sender@example.com", "", "", "Incontro", "Ricorda Incontro alle 2"};
	Email em2 = {"17/03/2024", "9:30", "friend@example.com", "me@example.com", "", "", "Uscita con amica", "Che stai facendo? vieni a mangiare fuori?"};
	Email em3 = {"125/03/2024", "15:00", "boss@example.com", "me@example.com", "colleague@example.com", "", "Avviso", "Perfavore controlla qual'e il problema nel settore B3"};


	cout << "Email 1:" << endl;
	stampaEmail(em1);

	cout << "Email 2:" << endl;
	stampaEmail(em2);

	cout << "Email 3:" << endl;
	stampaEmail(em3);

	creaEmail(em);

}

