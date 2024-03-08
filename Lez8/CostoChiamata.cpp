/*
Esercizio - CostoChiamata

Una nuova compagnia telefonica ha promosso l'offerta "oltre80": alla cifra fissa di 0,10 euro (costo alla risposta) occorre aggiungere la cifra di 0,15 euro per ogni secondo del tempo della telefonata; 
però oltre gli 80 secondi la tariffa per ogni secondo è di 0,09. Fornito da tastiera il numero di secondi della telefonata, visualizzare il costo totale della chiamata.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double risposta = 0.10;
    double normale = 0.15;
    double oltre = 0.09;
    double totale = 0;

    cout << "Inserire numero secondi della telefonata: ";
    cin >> n;

    if (n <= 80) {
        totale = risposta + n * normale;
    } else {
        totale = risposta + n * oltre;
    }

    cout << "Prezzo totale: " << fixed << setprecision(2) << totale << " euro" << endl;

}

