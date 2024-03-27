/*
Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) che lo caratterizza, un numero di pagine e un costo.
Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina dei libri e si stampino i dati dei tre libri in ordine crescente di costo per pagina.
*/

#include <iostream>

using namespace std;

//definizione id struct
struct libro {
int codice;
int numeroPag;
double costo;
};

double media(struct libro x){
	 return (x.numeroPag + x.costo) / 2.0;
}

void stampaLibro (struct libro x){
    cout << "\nCodice: " << x.codice << endl;
    cout << "Numero Pagine: " << x.numeroPag << endl;
    cout << "Prezzo: " << x.costo << " Euro"<< endl;
	cout << "Media per costo libro: " << media(x) << endl;
}



int main() {
	//definizione di una variabile di tipo struct data

	libro l1 = {129, 125, 23.00};
	libro l2 = {231, 75, 10.00};
	libro l3 = {011, 225, 19.50};

	stampaLibro(l1);
	stampaLibro(l2);
	stampaLibro(l3);
}