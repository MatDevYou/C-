/*
genera array di  interi di numeri interi casuali 

dimensione
inf
sup
numero

inf <= sup

visualizzare i l'array ottentto (posizione : valore)

*/


#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf; 
}

int main() {
	srand(time(NULL));

    int dimensione = rand();
    int numeri[dimensione];
    int inf = rand();
    int sup;
    
    do {
    	sup = rand();
	} while (inf > sup);
	
	//riempimento array
	for(int i = 0; i < dimensione; i++){
		numeri[i] = casuale(inf,sup);
	}
	
	cout<<"numeri generati\n";
	for (int j = 0; j < dimensione; j++){
		cout<<j<<" "<<numeri[j]<<endl;
	}
    


}
