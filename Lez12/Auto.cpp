/*
Esercizio - StructAuto

Creare una struttura auto con le seguenti caratteristiche: marca, modello, cilindrata, carburante, colore.

Creare una funzione che consenta di calcolare la velocità massima raggiunta da una auto, basandosi sul seguente calcolo empirico: 
cilindrata/10 a cui si somma un bonus che dipende dal tipo di carburante: benzina => bonus +30, diesel => bonus +20, gpl => bonus -10, metano => bonus -30

Creare un main per fare il test su auto. Stampare la velocità massima dell'auto
*/



#include <iostream>
#include <string>

using namespace std;


struct macchina {
	string marca;
	string modello;
	int cilindrata; // Aggiunto campo per la data di nascita
	string carburante;
	string colore;
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


void macchinaBlocco(struct macchina x) {
	stampaMacchina(x, "\n");
	cout << "Velocita massima: " << calcola(x) << " km/h\n";
}



int main() {
	
	macchina a1 = {"Mercedes", "AMG", 250,"Benzina", "Nera Opaca"};
	macchina a2 = {"Audi", "A3", 2500,"Diesel", "Verde"};
	macchina a3 = {"Fiat", "Punto", 130,"GPL", "Grigia Spilberga"};
	macchina a4 = {"Ferrari", "PuroSangue", 700,"Metano", "Rosso Sangue"};
	
	
	macchinaBlocco(a1);
	macchinaBlocco(a2);
	macchinaBlocco(a3);
	macchinaBlocco(a4);
}
