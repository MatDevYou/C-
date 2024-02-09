#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float prezzo;
    int quantita;
    float s = 0;  // Inizializza s a zero

    cout << "Prezzo: ";
    cin >> prezzo;

    cout << "Quantita: ";
    cin >> quantita;
    

    float risultato = prezzo * quantita;

    // Calcolo dello sconto in base alla quantità
    if (quantita <= 3) {
        s = 0;  // Nessuno sconto
    } else if (quantita <= 7 && quantita > 3) {
        s = risultato * 0.06;
    } else if (quantita <= 13 && quantita > 7) {
        s = risultato * 0.11;
    } else if (quantita <= 19 && quantita > 13) {
        s = risultato * 0.17;
    } else if (quantita >= 20){
        s = risultato * 0.19;
    }

    float ris = risultato - s;
    
    cout << setprecision(2) <<fixed; //limita a scrivere 2 numeri decimali
    
    cout << "Totale non scontato: " << risultato << endl;
    cout << "Sconto effettuato: " << s << endl;
    cout << "Totale scontato: " << ris << endl;

    return 0;
}
