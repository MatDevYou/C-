#include <iostream>
using namespace std;

#define MAX 5

int main() {
    string mesi[] = {"gennaio","febbraio","marzo","aprile","maggio","giugno","luglio","agosto","settembre","ottobre","novembre","dicembre"};
    int n;
    
    int dimensione = sizeof(mesi) / sizeof(string);
    
    do {
        cout << "Inserisci numero del mese: " << endl;
        cin >> n;
        
        if (n <= 0 || n >= 13) {
            cout << "Errore: data non valida" << endl;
        } else {
            cout << "Mese: " << mesi[n] << endl;
        }
    } while (n <= 0 || n >= 13);
    
    for (int i = 0; i < dimensione; i++){
    	cout<<i<<": "<<mesi[i]<<endl;
	}
	
	cout<<"\nsizeof(mesi): "<<sizeof(mesi);

}
