/*
uso matrici

definizione

tipo identificatore[righe][colonne]

riempire una matrice dei numeri interi di dimnesione 3 x 4
stampare matrice
*/

#include <iostream>

using namespace std;

int main() {

	int matrice[3][4];

	//caricamento della matrice
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			cout << "inserisci numero intero: ";
			cin >>matrice[i][j];
		}
	}

	cout<<"\n\stampa matrice\n ";
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			cout << matrice[i][j]<<" ";
	}
		cout << endl;
}

}