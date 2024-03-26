/******************************************************************************

es 15. Creare una funzione che permette di stampare un quadrato di '+' di 
dimensioni ricevute.
Creare poi un programma che letto un numero da parte dell'utente permetta di 
stampare una serie di quadrati con dimensioni che partono da 1 e vanno fino al 
valore passato dall'utente per poi ridiscendere fino ad 1.
*******************************************************************************/

#include <iostream>
#include <ctime>


using namespace std;

void quadrato(int x) {
    for ( int i = 0; i < x; i++){
        cout << "+";
    }
    cout << endl;
}


int main() {
    int n;

    cout<<"inserisci numero naturale: "<<endl;
    cin >> n;

    for ( int i = 1; i < n; i++){
        quadrato(i);
        cout << endl;
    }

    for (int i = n-1; i > 0; i-- ){
        quadrato(i);
        cout << endl;
    }
   
}

