/******************************************************************************

Riempire un array con 8 elementi inseriti dall'utente che siano maggiori di zero,
se viene inserito un numero che non lo è viene fatto reinserire fino a
quando rispetta la condizione. Scrivere a schermo l'array inserito.


*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    int a[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "inserisci numeri maggiori di 0: " << endl;
        cin >> a [i];

        while (a[i] <= 0)
        {
            cout << "reinserisci numero : " << endl;
            cin >> a[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << i << " :"<< a[i] << endl;
    }
    



}