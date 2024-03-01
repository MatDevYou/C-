#include <iostream>
using namespace std;

#define MAX 5

int main() {
    string mesi[13] = {"", "gennaio","febbraio","marzo","aprile","maggio","giugno","luglio","agosto","settembre","ottobre","novembre","dicembre"};
    int n;
    
    do {
        cout << "Inserisci numero del mese: " << endl;
        cin >> n;
        
        if (n <= 0 || n >= 13) {
            cout << "Errore: data non valida" << endl;
        } else {
            cout << "Mese: " << mesi[n] << endl;
        }
    } while (n <= 0 || n >= 13);
    

}
