/*Esercizio - DistanzaCasaScuola

Dati i nomi di n studenti e la distanza in Km, da casa a scuola, visualizzare il nome degli studenti che abitano in comuni distanti più di 30 km.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Inserisci il numero degli studenti: ";
    cin >> n;

    string studenti[n];
    int distanza[n];

    for(int i = 0; i < n; i++){
        cout << "Inserisci il nome dello studente: "<<endl;
        cin >> studenti[i];
        cout << "Inserisci i km dalla scuola per lo studente: "<<endl;
        cin >> distanza[i];
    }

    cout << "Gli studenti che abitano a piu di 30 km dalla scuola sono: " << endl;
    for(int i = 0; i < n; i++){
        if(distanza[i] > 30){
            cout << studenti[i] << endl;
        }
    }

}


