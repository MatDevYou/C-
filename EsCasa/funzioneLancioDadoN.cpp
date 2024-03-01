#include <iostream>
#include <cstdlib>
#include <ctime> 

int lancioDado(int t) {
    return rand() % t + 1; 
}

using namespace std;

int main() {
    srand(time(NULL)); 
    int a;

    cout << "Inserisci numero faccie: ";
    cin >> a;

    cout << "Il risultato del lancio e: " << lancioDado(a) << endl;


}
