#include <iostream>
#include <string>

using namespace std;

struct macchina {
    string marca;
    string modello;
    int cilindrata;
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
    macchina autoArray[] = {
        {"Mercedes", "AMG", 250,"Benzina", "Nera Opaca"},
        {"Audi", "A3", 2500,"Diesel", "Verde"},
        {"Fiat", "Punto", 130,"GPL", "Grigia Spilberga"},
        {"Ferrari", "PuroSangue", 700,"Metano", "Rosso Sangue"}
    };

    int numero_auto = sizeof(autoArray) / sizeof(autoArray[0]);

    for (int i = 0; i < numero_auto; ++i) {
        macchinaBlocco(autoArray[i]);
    }


}
