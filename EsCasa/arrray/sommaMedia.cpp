/******************************************************************************

Leggere un array di 5 numeri naturali e poi calcolarne la somma e la media.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

int a[5];
int somma = 0;

for (size_t i = 0; i < 5; i++){
    cin >> a[i];
}

for (size_t i = 0; i < 5; i++){
    somma += a[i];
}

cout << "somma: " << somma << endl;
cout << "media " << float(somma) / 5; 

}