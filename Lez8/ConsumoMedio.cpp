/*

Esercizio - ConsumoMedioCarburante

Calcolare il consumo medio di carburante di un veicolo, utilizzando come dati in input i km percorsi e i litri di carburante. Visualizzare il risultato.


*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));

    int litri, km;

		cout << "Inserisci i km percorsi: ";
   		cin >> km;

		cout << "Inserisci i litri percorsi: ";
   		cin >> litri;

	cout<<"consumo medio:  "<<litri / km;
   


}

