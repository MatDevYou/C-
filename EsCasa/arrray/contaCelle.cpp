/******************************************************************************

Creare un array di interi con 10 posti, inserire zeri in tutte le celle;
leggere in che posizione inserire un 1 e inserirlo nella corretta posizione d
ell'array; scandire l'array una cella alla volta fermandosi quando si trova 
l'uno, dire in che cella è stato trovato.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

int n [10];

for (int i = 0; i < 10; i++){
    n[i] = 0;
}

int temp = 0;

cout << "inserisci la posizione in cui vui inserire 1: ";
cin >> temp;

n[temp] = 1;
int i = 0;

while (n[i] != 1)
{
    i++;
}

cout << "trovato 1 nella cella " << i<< endl;



}