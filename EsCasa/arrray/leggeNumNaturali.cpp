/******************************************************************************

Scrivere un programma che legge 10 numeri e dice quanti sono positivi, 
quanti negativi e quanti nulli.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf;
}
 
int main() {

srand(time(NULL));

int n = 0;
int pos = 0;
int neg = 0;
int null = 0;

cout << "inserisci quanti numeri casuali vuoi verificare"<<endl;
cin>>n;

int numeri[n];

for(int i = 0; i < n; i++){
    numeri[i] = casuale(-n,n);
}

    for (int i = 0; i < n; i++) {
        cout <<i<<": "<< numeri[i] << " "<<endl;
    }
    cout << endl;

    for (int j = 0; j < n; j++){
        if (numeri[j] > 0){
            pos++;
        } else if (numeri[j] == 0){
            null ++;
        } else {
            neg ++;
        }
    }

    cout << "numeri positivi: " << pos << " numeri negativi: " << neg << " numeri nulli: " << null;

}

