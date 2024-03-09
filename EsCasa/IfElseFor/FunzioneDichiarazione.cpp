#include <iostream>
#include <cstdlib> 

using namespace std;

void stampaMessaggio() {
    cout << "Ciao, mondo!" << endl;
}

int somma(int a, int b) {
    int sommaTot = a + b; // Dichiarazione e inizializzazione della variabile sommaTot
    return sommaTot;
}

int main() {
    int base, altezza; 

    cout << "Inserisci il primo numero: ";
    cin >> base;

    cout << "Inserisci il secondo numero: ";
    cin >> altezza;
    
    stampaMessaggio(); 
    int risultato = somma(base, altezza); 
    
    cout << "La somma e': " << risultato << endl;
    return 0;
}
