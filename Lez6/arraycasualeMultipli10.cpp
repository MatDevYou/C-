/*genera array 100 elementi di numeri casuali [-100.100]

visualizzare posizione e valore dei soli multipli di 10
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf;
}

//definizione
void stampaArray(int v[], int dimensione){
	for (int i = 0; i < dimensione; i++) {
        cout <<i<<": "<< v[i] << " "<<endl;
    }
}

int ricercaArray(int v[], int dimensione, int elemento){
	
	for (int i = 0; i < dimensione; i++) 
        if (elemento == v[i]) 
			return i;
	return -1;
    
}


int main() {
    srand(time(NULL));

    int n = 100, a = - 100, b = 100, cerca;
    int pos = -1;

    int numeri[n];

	//riempo array casuale
    for (int i = 0; i < n; i++) {
        numeri[i] = casuale(a, b);
    }

	//legge array
    for (int i = 0; i < n; i++) {
    	if(numeri[i] % 10 == 0)
        cout <<i<<": "<< numeri[i] << " "<<endl;
    }
    cout << endl;



}
