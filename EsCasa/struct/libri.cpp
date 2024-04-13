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

void stampaLibro (struct libro x){
    cout << "\nCodice: " << x.codice;
    cout << "Numero Pagine: " << x.numeroPag;
    cout << "Prezzo: " << x.costo;

}

int main() {
	//definizione di una variabile di tipo struct data
	libro l1;
	libro l2;
    libro l3;

	libro l1 = {129, 125, 23.00};
	libro l2 = {231, 75, 10.00};
	libro l3 = {011, 225, 19.50};

    stampaLibro(l1);
	
}