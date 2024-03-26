/*Definizione di una struct*/

/*

strucyt ptodotto
3 prodotti, uno in scorta (< 9) , uno esaurito e altro disponibile

*/

#include <iostream>
#include <string> // È necessario includere la libreria string per utilizzare il tipo string

#include <iostream>
#include <string>




using namespace std;

struct prodotto {
	int codice;
	string denominazione;
	string descrizione;
	double prezzo;
	int giacenza;
};

void stampaBlocco(struct prodotto x, string separatore) {
	cout << "\nCodice: " << x.codice << separatore;
	cout << "Denominazione: " << x.denominazione << separatore;
	cout << "Descrizione: " << x.descrizione << separatore;
	cout << "Prezzo: " << x.prezzo << " Euro" << separatore;
	cout << "Giacenza: " << x.giacenza << separatore;
	
}

void stampaLineareProdotto(struct prodotto x) {
	stampaBlocco(x, ", ");
}

void stampaBloccoProdotto(struct prodotto x) {
	stampaBlocco(x, "\n");
}



bool controlloGiacenza(struct prodotto x) {
	return x.giacenza > 0 && x.giacenza < 9;
}

bool prodottoEsaurito(struct prodotto x) {
	return x.giacenza == 0;
}

int main() {

	prodotto p;
	prodotto h;
	prodotto l;

	p.codice = 12;
	p.denominazione = "Telefono";
	p.descrizione = "Telefono cellulare";
	p.prezzo = 499.99;
	p.giacenza = 20;


	h.codice = 15;
	h.denominazione = "PC";
	h.descrizione = "PC gaming";
	h.prezzo = 800.99;
	h.giacenza = 0;


	l.codice = 19;
	l.denominazione = "Caricatore";
	l.descrizione = "Caricatore per Telefono";
	l.prezzo = 20.00;
	l.giacenza = 8;



	if (controlloGiacenza(p) ) {
		stampaBloccoProdotto(p);
	} else {
		stampaBloccoProdotto(p);
		cout << "\nhai ancora " << p.giacenza;
	}

	if (controlloGiacenza(h)) {
		stampaBloccoProdotto(h);
	} else {
		stampaBloccoProdotto(h);
		prodottoEsaurito(h);
	}

	if (controlloGiacenza(l)) {
		stampaBloccoProdotto(l);
	} else {
		stampaBloccoProdotto(l);
		cout << "\nhai ancora " << l.giacenza;
	}






}




