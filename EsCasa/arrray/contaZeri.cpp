/******************************************************************************

Leggere e memorizzare in un array sette numeri, 
dopo averli letti contare quante volte è stato memorizzato lo zero.

*******************************************************************************/


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf;
}
 
 
int main() {

    int n;

    cout<<"inserisci il numero della cella che vuoi memorizzare: "<< endl;
    cin>> n;

    int numeri[n];

    for (int i = 0; i < 7; i++){
       numeri[n] = casuale(-n,n);
    }

    float temp = 0;

    for (int i = 0; i < 7; i++){
        if (numeri[i] == 0){
            temp ++;
        }
    }

    cout << "quanti zeri sono presenti " << temp << endl;


}

