/*
Esercizio - ArrayMenu

Si consideri un array di numeri interi generati in modo casuale con numeri appartenenti all'intervallo [-1000,1000] di dimensione 100

Si vuole scegliere una selle seguenti operazioni:

1 - stampa dell'array (posizione e valore)

2 - stampa dei numeri solo positivi (posizione e valore)

3 - ricerca di un elemento dato in input ( output: trovato in posizione oppure non trovato)

4 - ordina array (usare selection sort)

5 - media aritmetica dei soli valori positivi e maggiori di zero

0 - esci dal programma

*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
	return rand() % (sup - inf + 1) + inf;
}

void stampaArray(int v[], int dimensione) {
	for (int i = 0; i < dimensione; i++) {
		cout << i << ": " << v[i] << " " << endl;
	}
}

void stampaPositivi(int v[], int dimensione) {
	for (int i = 0; i < dimensione; i++) {
		if (v[i] > 0)
			cout << i << ": " << v[i] << " " << endl;
	}
}

int ricercaArray(int v[], int dimensione, int elemento) {

	for (int i = 0; i < dimensione; i++)
		if (elemento == v[i])
			return i;
	return -1;

}

void selectionSort(int v[], int dimensione) {
	for (int i = 0; i < dimensione - 1; i++) {
		for (int j = i + 1; j < dimensione; j++) {
			if (v[i] > v[j]) {
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}

float mediaPositivi(int v[], int dimensione) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < dimensione; i ++) {
		if(v[i] > 0) {
			sum += v[i];
			count++;
		}
	}
	if (count == 0) {
		return 0;
	} else {
		return sum / count;
	}
}


int main() {
	srand(time(NULL));

	int n, a, menu, m;
	cout << "Inserisci dimensione array: ";
	cin >> n;

	cout << "Determina estremi numeri: " << endl;
	cin >> a;

	int numeri[n];

	for (int i = 0; i < n; i++) {
		numeri[i] = casuale(-a, a);
	}
	do {
		cout << "Scegli un'opzione:" << endl;
		cout << "1 - Stampa dell'array (posizione e valore)" << endl;
		cout << "2 - Stampa dei numeri solo positivi (posizione e valore)" << endl;
		cout << "3 - Ricerca di un elemento dato in input (output: trovato in posizione oppure non trovato)" << endl;
		cout << "4 - Ordina array (usare selection sort)" << endl;
		cout << "5 - Media aritmetica dei soli valori positivi e maggiori di zero" << endl;
		cout << "0 - Esci dal programma" << endl;
		cin >> menu;
	} while (menu < 0 || menu > 5);

	switch (menu) {
		case 1:
			stampaArray(numeri, n);
			break;
		case 2:
			stampaPositivi(numeri, n);
			break;
		case 3:
			int elemento, posizione;
			stampaArray(numeri, n);
			cout << "Inserisci l'elemento da cercare: ";
			cin >> elemento;
			posizione = ricercaArray(numeri, n, elemento);
			if (posizione != -1) {
				cout << "Elemento trovato in posizione: " << posizione << endl;
			} else {
				cout << "Elemento non trovato." << endl;
			}
			break;

		case 4:
			selectionSort(numeri, n);
			cout << "Array ordinato:" << endl;
			stampaArray(numeri, n);
			break;
		case 5:
			cout << "La media aritmetica dei numeri positivi presenti nell'array e: " << mediaPositivi(numeri, n) << endl;
			break;
		case 0:
			cout << "Uscita dal programma." << endl;
			break;
	}




}