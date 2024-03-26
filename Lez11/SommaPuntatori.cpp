/*

Dichiarare due variabili ditipo intero

Dichiarare 2 puntatori a intero, uno per ogni variabile
assegnare 2 valori alle variabili tramite uso dei puntatori

calcolare la somma delle variabili usando i puntatori

visualizzare tutti i passaggi
*/



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {

	int *x;
	int *y;

	int a ;
	int b ;

	x = &a;
	y = &b;

	cout << "1 numero: " << endl;
	cin >> *x;
	
	cout << "\n2 numero:" << endl;
	cin >> *y;
	
	cout << "somma puntatori: " << a + b;
}
