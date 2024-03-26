/******************************************************************************

es 15
Leggere un array di interi di 10 posizioni e dire se in 
tutte le posizoni pari dell’array è memorizzato un numero pari.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    int a [10];

    for (int i = 0; i < 10; i++){
        cout << "inserisci numeri per riempire array: "<< endl;
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++){
        cout << i << ": " << a[i] << endl;
    }
    
    for (int  i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0){
            cout << "in posizione " << i << " il numero e' pari" << endl;
        }
    }

}