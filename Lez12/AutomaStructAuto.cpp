/*
Esercizio - AutomaStructAuto

Si consideri l'esercizio StructAuto. Si vuole creare un automa che mette a disposizione due azioni: accelera e frena. Aggiungere alla struct auto la velocità (in km/h).

Creare due nuove funzioni: accelera e frena che hanno l'obbiettivo di aumentare o diminuire la velocità dell'auto.
In questo caso accelera aumenta la velocità attuale di 10 km/h, mentre l'azione frena diminuisce la velocità attuale di 5 km/h.

Creare un menu testuale per poter scegliere una delle seguenti azioni:

1 - accelera

2 - frena

9 - termina il programma

Si consideri che:

l'auto in fase di avvio del programma viaggia a 50km/h

ad ogni azione richiesta viene stampata la velocità attuale dell'auto

se l'auto supera la velocità 130 km/h viene restituito il messaggio: Rallenta! Stai andando troppo forte

*/

#include <iostream>
#include <string>

using namespace std;



struct macchina {
	string marca;
	string modello;
	int cilindrata;
	string carburante;
	string colore;
	int velocita = 50;
};

int calcola(struct macchina x) {
	int bonus = 0;
	if (x.carburante == "Benzina")
		bonus += 30;
	else if (x.carburante == "Diesel")
		bonus += 20;
	else if (x.carburante == "GPL")
		bonus -= 10;
	else if (x.carburante == "Metano")
		bonus -= 30;

	return (x.cilindrata / 10) + bonus;
}

void stampaMacchina(struct macchina x, string separatore) {
	cout << "\nMarca: " << x.marca << separatore;
	cout << "Modello: " << x.modello << separatore;
	cout << "Cilindrata: " << x.cilindrata << separatore;
	cout << "Carburante: " << x.carburante << separatore;
	cout << "Colore: " << x.colore << separatore;
}

void accelera(macchina &x) {
	if(calcola(x) == x.velocita){
		cout << "velocita massima raggiunta";
		x.velocita += 0;
	}
	else if (x.velocita >= 140) {
		cout << "Hai superato la velocita massima consentita. Rallenta!" << endl;
		x.velocita += 10;
	}
	else {
		x.velocita += 10;
	}
}

void frena(macchina &x) {

	if (x.velocita < 0)
		x.velocita = 0;
	else
		x.velocita -= 5;
		
}

void macchinaBlocco(struct macchina x) {
	stampaMacchina(x, "\n");
	cout << "Velocita massima: " << calcola(x) << " km/h\n";
	cout << "\nVelocita attuale: " << x.velocita << " km/h\n";
}

int main() {
	int menu;
	macchina a1 = {"Mercedes", "AMG", 1700, "Benzina", "Nera Opaca"};
	macchinaBlocco(a1);

	do {
		cout << "\nScegli un'azione:" << endl;
		cout << "1 - Accelera" << endl;
		cout << "2 - Frena" << endl;
		cout << "9 - Chiudi Programma" << endl;
		cin >> menu;

		switch (menu) {
			case 1:
				accelera(a1);
				macchinaBlocco(a1);
				break;
			case 2:
				frena(a1);
				macchinaBlocco(a1);
				break;
			case 9:
				cout << "Programma terminato." << endl;
				break;
		}
	} while (menu != 9);

}

