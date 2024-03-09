/******************************************************************************

Memorizzare in un array bidimensionali 10 x 10 la tavola pitagorica 
(quella delle tabelline) e stampare il contenuto della matrice.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    int tavola [10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tavola[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 10;i++){
        for (int j = 0; j < 10; j++){
            cout<<tavola[i][j]<<" ";
        }
        cout<<endl;
    }



}