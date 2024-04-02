/******************************************************************************

Memorizzare in un array di dieci posizioni i primi dieci numeri naturali

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;


int main() {
    int a[10];
    
    for (int i = 0; i < 10; i++){
        a[i] = i;
    }

    for (int i = 0; i < 10; i++){
        cout << " " << a[i];
    }
}