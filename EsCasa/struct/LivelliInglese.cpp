/******************************************************************************

Definire una struct livelloLinguistico che memorizzi
il livello del certificato linguistico di uno studente;
il livello C( definito da una lettera e da un numero
(ad esempio: A1, B2, C2).
Creare una struct classe definita dall'anno e dalla sezione
(5F, 3C, ...).
Creare una struct studente con codice numerico studente,
classe e livello linguistico.
Memorizzare 5 studenti
(leggendo i dati da tastiera o da un file input.txt)
e verificare se c'C( qualche studente di una classe
inferiore che ha un livello linguistico piC9 alto di uno
studente di una classe superiore e nel caso stamparne i dati.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

struct Certificato {
    char lettera;
    int numero;
};

struct Classe {
    int anno;
    char sezione;
};

struct Studente {
    int codice;
    Classe c;
    Certificato inglese;
};

void stampa(Studente s) {
    cout << "Codice studente: " << s.codice << endl;
    cout << "Classe: " << s.c.anno << s.c.sezione << endl;
    cout << "Livello inglese: " << s.inglese.lettera << s.inglese.numero << endl;
    cout << endl;
}

int main () {
    Studente gruppo[5];
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci codice studente: ";
        cin >> gruppo[i].codice;
        cout << "Inserisci sezione studente: ";
        cin >> gruppo[i].c.sezione;
        cout << "Inserisci anno studente: ";
        cin >> gruppo[i].c.anno;
        cout << "Inserisci livello inglese (lettera): ";
        cin >> gruppo[i].inglese.lettera;
        cout << "Inserisci livello inglese (numero): ";
        cin >> gruppo[i].inglese.numero;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (gruppo[i].c.anno < gruppo[j].c.anno) { // Studente i più piccolo
                if (gruppo[i].inglese.lettera > gruppo[j].inglese.lettera) {
                    cout << "Studente " << i << " più piccolo ma livello di inglese più alto:" << endl;
                    stampa(gruppo[i]);
                    stampa(gruppo[j]);
                } else if (gruppo[i].inglese.lettera == gruppo[j].inglese.lettera && gruppo[i].inglese.numero > gruppo[j].inglese.numero) {
                    cout << "Studente " << i << " più piccolo ma livello di inglese più alto:" << endl;
                    stampa(gruppo[i]);
                    stampa(gruppo[j]);
                }
            }
        }
    }
}

