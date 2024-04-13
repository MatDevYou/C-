/*

Implementare un programma C++ che consenta di gestire un conto corrente, costituito dall’insieme dei suoi movimenti di spesa e dall’insieme dei suoi movimenti di entrata. 
Ogni movimento di spesa è una struct con le seguenti caratteristiche: data, descrizione, importo e tipo. 
Ogni movimento di entrata è una struct con le seguenti caratteristiche: data, descrizione, importo e tipo.

Il campo data é un intero che parte da zero e rappresenta i giorni a partire dalla partenza delle registrazioni dei movimenti. 
Il campo descrizione é una stringa che contiene la descrizione del movimento. Il campo importo é un numero reale che rappresenta l’importo del movimento. 
Il campo tipo é una stringa che contiene il tipo del movimento ( ‘D’ per dare, ‘A’ per avere ).

Gestire l’aggiunta di movimenti di spesa e di entrata.
Gestire la stampa del saldo del conto corrente.
Gestire la stampa di un report del totale delle spese e delle entrate raggruppato per mese.

*/

#include <iostream>

using namespace std;

//definizione id struct
struct spesa {
int data;
string descrizione;
int importo;
string tipo;
};

struct entrata {
int data;
string descrizione;
int importo;
string tipo;
};

struct  contoCorrente {
spesa spesa;
entrata entrara;
};


void stampaEntrata (struct entrata x){
    cout << "\nData : " << x.data << endl;
    cout << "Descrizione: " << x.descrizione << endl;
    cout << "Importo : " << x.importo << " euro" << endl;
    cout << "Tipo : " << x.tipo << endl;
}

void stampaSpesa (struct spesa x){
    cout << "\nData : " << x.data << endl;
    cout << "Descrizione: " << x.descrizione << endl;
    cout << "Importo : " << x.importo << "euro" << endl;
    cout << "Tipo : " << x.tipo << endl;
}


void creaEntrata(struct entrata &e) {
	cout << "Inserisci la data: ";
	cin >> e.data;

	cout << "Inserisci la descrizione: ";
	cin >> e.descrizione;

	cout << "Inserisci importo: ";
	cin >> e.importo;

	cout << "Inserisci Tipo: ";
	cin >> e.tipo;
}

void creaSpesa(struct spesa &s) {
	cout << "\nInserisci la data: ";
	cin >> s.data;

	cout << "Inserisci la descrizione: ";
	cin >> s.descrizione;

	cout << "Inserisci importo: ";
	cin >> s.importo;

	cout << "Inserisci Tipo: ";
	cin >> s.tipo;
}

int stampaSaldo(spesa s, entrata e) {
    return s.importo + e.importo;
}

int main() {

    entrata e1 ;
    spesa s1;

    creaEntrata(e1);
    creaSpesa(s1);

    stampaEntrata(e1);
    stampaSpesa(s1);

    cout << "Il saldo è: " << stampaSaldo(s1, e1) << " euro" << endl;

}