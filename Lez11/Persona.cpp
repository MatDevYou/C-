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

void stampaPersona(struct persona x, string separatore) {
    cout << "\nNome: " << x.nome << separatore;
    cout << "Cognome: " << x.cognome << separatore;
    cout << "Data di Nascita: " << x.datanascita.giorno << "/" << x.datanascita.mese << "/" << x.datanascita.anno << separatore;
    cout << "Luogo: " << x.luogo << separatore;
    cout << "Sesso: " << x.sesso << separatore;
}

bool maggiorenne(struct persona x) {
    return (2024 - x.datanascita.anno) >= 18;
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
    if (maggiorenne(p1))
        cout << "Luca Rossi e maggiorenne" << endl;
    else
        cout << "Luca Rossi e minorenne" << endl;

    personaBlocco(p2);
    if (maggiorenne(p2))
        cout << "Maria Angelina e maggiorenne" << endl;
    else
        cout << "Maria Angelina e minorenne" << endl;

    return 0;
}
