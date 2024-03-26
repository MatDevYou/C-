/*
Generare una matrice di numeri casuali positivi dimensione 5 x 4
e appartenenti all'intervallo [1, 100]

calcolare la somma dele singole righe

stampare il risultato
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;


int main() {
	srand(time(NULL));

	int matrice[5][4];

	//caricamento della matrice
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 4; j++) {
			matrice[i][j] = rand () % 100 + 1;
		}
	}

	cout<<"\n\n\stampa matrice\n " << endl;
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matrice[i][j] <<" ";
		}
		cout << endl;
	}

	cout << "\n\n\Somma delle righe:\n";
	for (int i = 0; i < 5; i++) {
		int somma = 0;
		for (int j = 0; j < 4; j++) {
			somma += matrice[i][j];
		}
		cout << "Riga " << i+1 << ": " << somma << endl;
	}


}