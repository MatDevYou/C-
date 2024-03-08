#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
  return rand() % (sup - inf + 1) + inf;
}

int main() {
  srand(time(NULL));

  int n = 1000, a = -100, b = 87;
  int maxNum = a; // Inizializza il massimo con il valore minimo possibile
  int posMax = 0;

  int numeri[n];

  // Riempio array casuale e trovo il massimo
  for (int i = 0; i < n; i++) {
    numeri[i] = casuale(a, b);
  }

  // Stampo l'intero array
  for (int i = 0; i < n; i++) {
    cout << i << " :" << numeri[i] << " "<<endl;
  }

  // Trovo il massimo e la sua posizione
  for (int i = 0; i < n; i++) {
    if (numeri[i] >= maxNum) {
      maxNum = numeri[i];
      posMax = i;
    }
  }

  // Stampo il massimo e la sua posizione
  cout << endl << "Numero massimo: " << maxNum << ", Posizione: " << posMax << endl;

  return 0;
}
