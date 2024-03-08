/*
riempire un array di numeri interi casuali per simulare una scheda della tombola(1,90)

*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
  return rand() % (sup - inf + 1) + inf;
}

void stampaArray(int v[], int dimensione) {
    int colonne = 5; 
    for (int i = 0; i < dimensione; i++) {
        cout << v[i] << "\t"; 
        if ((i + 1) % colonne == 0) 
            cout << endl; 
    }
    cout << endl; 
}
    
int cerca(int x[], int dimensione, int elemento){
	for(int i = 0; i < dimensione; i++)
		if(x[i] == elemento)
		return i;
	return -1;
}

int main() {
  srand(time(NULL));

  int n = 15;

  int numeri[n];

  for (int i = 0; i < n; i++) {
    numeri[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    int num = casuale(1, 90);
    if (cerca(numeri, n, num) == -1 )
      numeri[i] = num;
    else
      i--;
  }

  stampaArray(numeri, n);

}

