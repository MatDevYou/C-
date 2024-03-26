/******************************************************************************

ES 17
Leggere un array di interi di 10 posizioni e stampare il numero che compare 
più volte all'interno dell'array, qualora ci siano 
più numeri che compaiano lo stesso numero di volte 
stampare quello che compare per primo.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

int a[10];
int maggiore;

for (size_t i = 0; i < 10; i++){
    cin >> a[i];
}

maggiore = a[0];


for (size_t i = 0; i < 10; i++){
    cout << i << ": " << a[i] << endl;
}



}