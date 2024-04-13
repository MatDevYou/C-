/*
Esercizio - EsamiStudente

Si consideri uno studente, con matricola, cognome, nome, e un elenco di esami sostenuti in una certa materia,  data e con un voto. Si richiede:

1 - Stampa dei dati dello studente

2 - Stampa dell'elenco degli esami sostenuti

3 - stampa della media degli esami sostenuti
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Data {
	int giorno;
	int mese;
	int anno;
};

struct Esame {
	string materia;
	int voto;
	Data data;
};

struct Studente {
	string matricola;
	string nome;
	string cognome;
	Data dataNascita;
	vector<Esame> esamiSostenuti;
};

void stampaStudente(struct Studente& s) {
	cout << "Matricola: " << s.matricola << endl;
	cout << "Nome: " << s.nome << endl;
	cout << "Cognome: " << s.cognome << endl;
	cout << "Data di nascita: " << s.dataNascita.giorno << "/" << s.dataNascita.mese << "/" << s.dataNascita.anno << endl;
}

void stampaEsami(struct Studente& s) {
	cout << "Esami sostenuti:" << endl;
	for (int i = 0; i < s.esamiSostenuti.size(); ++i) {
		Esame& esame = s.esamiSostenuti[i];
		cout << "Materia: " << esame.materia << ", Voto: " << esame.voto << ", Data: " << esame.data.giorno << "/" << esame.data.mese << "/" << esame.data.anno << endl;
	}
}

double mediaEsami(struct Studente& s) {

	double sommaVoti;
	for (int i = 0; i < s.esamiSostenuti.size(); ++i) {
			if (s.esamiSostenuti.empty()) {
			return sommaVoti ;
	} else {
		Esame& esame = s.esamiSostenuti[i];
		sommaVoti += esame.voto;
	}
}

	return sommaVoti / s.esamiSostenuti.size();
}

int main() {
	Studente s1 = {"123", "Luca", "Rossi", {1, 1, 2000}, 
	{	{"Matematica", 28, {10, 5, 2023}}, 
	{"Fisica", 25, {15, 6, 2023}},
	{"Informatica", 22, {19, 5, 2023}}
	}};

	stampaStudente(s1);
	cout << endl;
	stampaEsami(s1);
	cout << endl;
	cout << "Media esami: " << mediaEsami(s1) << endl;


}
