#include <iostream>
#include <string>

using namespace std;

struct data {
	int giorno;
	int mese;
	int anno;
};

struct persona {
	string nome;
	string cognome;
	struct data datanascita; // Aggiunto campo per la data di nascita
	string luogo;
	char sesso;
};

int maggiorenne(struct persona x) {
	return (2024 - x.datanascita.anno) >= 18;
}

void stampaEta(struct persona x) {
	int eta = 2024 - x.datanascita.anno;
	cout << "questa e' l'eta: " << eta << endl;
}

void stampaPersona(struct persona x, string separatore) {
	cout << "\nNome: " << x.nome << separatore;
	cout << "Cognome: " << x.cognome << separatore;
	cout << "Data di Nascita: " << x.datanascita.giorno << "/" << x.datanascita.mese << "/" << x.datanascita.anno << separatore;
	cout << "Luogo: " << x.luogo << separatore;
	cout << "Sesso: " << x.sesso << separatore;
	stampaEta(x);
	if (maggiorenne(x))
		cout << x.nome << " " << x.cognome << " e'  maggiorenne" << endl;
	else
		cout << x.nome << " " << x.cognome << " e' minorenne" << endl;

}


void personaBlocco(struct persona x) {
	stampaPersona(x, "\n");
}



int main() {
	
	
	struct data data_nascita = {15, 10, 1990}; // Definizione della data di nascita
	persona p1 = {"Luca", "Rossi", data_nascita, "Torino", 'M'};

	struct data data_nascita1 = {15, 10, 2010}; // Definizione della data di nascita
	persona p2 = {"Maria", "Angelina", data_nascita1, "Padova", 'F'};

	personaBlocco(p1);
	
	personaBlocco(p2);


}
