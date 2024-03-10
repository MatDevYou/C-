/******************************************************************************

Memorizzare in un array bidimensionale 5 per 5 tutti zeri tranne nelle celle della diagonale
principale dove memorizzare uno 
(non usare l'inizializzazione con parentesi grafe nemmeno per gli zeri)

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    int m [6][6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin>>m[i][j];
        }
    }

    int somma [6];

    for (int i = 0; i < 6;i++){
       somma [i] = 0;
       for ( int j = 0; j < 6; j++){
        somma[i] = somma[i] + m[i][j]; 
       }
        cout<<endl;
    }
}