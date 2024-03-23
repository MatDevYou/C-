/******************************************************************************

Es 9. Leggere un array di interi di 5 posizioni e dopo averlo letto cercare al
suo interno il massimo e scrivere il massimo e la posizione della cella in cui 
è memorizzato.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    int a [5];

    for (int i = 0; i < 5; i++){
        cout << "inserisci numero che vuoi inserire"<<endl;
        cin >> a[i];
    }

    int massimo = a[0];
    int temp = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > massimo){
            temp = i;
            massimo = a[i];
        }
    }

    cout << "massimo: " << massimo << " posizione cella: " << temp;
}