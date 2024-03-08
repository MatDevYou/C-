/*
Esercizio - IngressoTeatro

Calcolare e visualizzare l'importo da pagare per l'ingresso a teatro sapendo che dal prezzo iniziale comunicato possono essere applicati i seguenti sconti, a seconda della casistica in cui si rientra:

bambini gratis fino ai 10 anni;
sconto 20% ai ragazzi fino ai 16 anni;
sconto del 50% agli anziani sopra ai 75 anni
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n;
    int eta;

	
	cout<<"Inserire prezzo biglietto: "<<endl;
	cin>>n;
	cout<<"inserire eta: "<<endl;
	cin>>eta;
	
    if (eta <= 10) {
        cout << "Biglietto gratis" << endl;
    } else if (eta <= 16) {
        cout << "Prezzo con sconto del 20%: " << fixed << setprecision(2) << n * 0.80 << endl;
    } else if (eta >= 75) {
        cout << "Prezzo con sconto del 50%: " << fixed << setprecision(2) << n * 0.50 << endl;
    } else {
        cout << "Prezzo intero: " << fixed << setprecision(2) << n << endl;
    }
	
}
