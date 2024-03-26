/*

Riempiri un array di numeri interi casuali -100, 100 di dimensione 10
Visualizzare array cosi riempito 
ordinare l'array in senso crecente 
visualizzare array ordinato

NB: utilizzare algoritmo selectionSortArray
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int casuale(int inf, int sup) {
  return rand() % (sup - inf + 1) + inf;
}

void selectionSort(int numeri[], int dimensione) {
    for (int i = 0; i < dimensione - 1; i++) {
        for (int j = i + 1; j < dimensione; j++) {
            if (numeri[i] > numeri[j]) {
                // Swap
                int tmp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = tmp;
            }
        }
    }
}

void stampaArray(int numeri[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        cout << i << ": " << numeri[i] << endl;
    }
}

int main() {
    srand(time(NULL));
  
    int dimensione = 10;
    int numeri[dimensione;]
  
    // Stampa array non ordinato
    cout << "Array non ordinato:" << endl;
    stampaArray(numeri, dimensione);
  
    // Ordina l'array
    selectionSort(numeri, dimensione);
  
    // Stampa array ordinato
    cout << "Array ordinato:" << endl;
    stampaArray(numeri, dimensione);

}