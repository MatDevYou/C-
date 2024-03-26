/*
algoritmo di scambio

si considerino due varibaili; a e b;

si consideri la funzione che deve scambiare i valori contenuti nelle variabili


*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;

void scambio(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	srand(time(NULL));

	int a = 4;
	int b = 9;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	scambio(&a,&b); 
fr
	cout << "\na: " << a << endl;
	cout << "b: " << b << endl;

	int matrice[5][4];



}