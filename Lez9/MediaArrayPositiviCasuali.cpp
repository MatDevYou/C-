/*

Riempire un array di numeri interi casuali  appartentente l'intrvallo [-n, n], con n richiesto in input
Calcolare la media aritmetica su una posizione dei numeri strettamente positivi
visualizzare il risultato
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int casuale(int inf, int sup) {
  return rand() % (sup - inf + 1) + inf;
}

int main() {

  srand(time(NULL));
  
  int n;
  int inf;
  int sup;
  
  cout << "Inserisci quanti numeri interi vuoi: ";
  cin >> n;
  
  cout << "Intervallo che vuoi usare: ";
  cin >> inf;
  
  int numeri[n];
  double mediaPositivi = 0;
  int countPositivi = 0;
 

  for(int i = 0; i < n; i++){
  	numeri[i] = casuale(-inf, inf);
  }

  for(int j = 0; j < n; j++){
  	if(numeri[j] > 0){
  		mediaPositivi += numeri[j];
  		countPositivi++;
	  }
  }
  
   float formula = mediaPositivi / countPositivi;o 

  if(countPositivi > 0){
    cout << "La media aritmetica dei numeri strettamente positivi e: " << fixed << setprecision(2) << formula << endl;
  } else {
    cout << "Non ci sono numeri strettamente positivi nell'array." << endl;
  }

}


