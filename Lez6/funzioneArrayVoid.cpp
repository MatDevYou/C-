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

//void stampaArray(int v[]){
//	int dimensione = sizeof(v)/sizeof(int);
//	
//	for (int i = 0; i < dimensione; i++) {
//        cout <<i<<": "<< v[i] << " "<<endl;
//    }
//}

//resistuisce la prima posizione di elemento dell'array
int ricercaArray(int v[], int dimensione, int elemento){
	
	for (int i = 0; i < dimensione; i++) 
        if (elemento == v[i]) 
			return i;
	return -1;
    
}



int main() {
    srand(time(NULL));

    int n, a, b, cerca;
    
    cout << "Quanti numeri vuoi?" << endl;
    cin >> n;

    cout << "Inizio dell'array: " << endl;
    cin >> a;

    cout << "Fine array: " << endl;
    cin >> b;

    int numeri[n];

    for (int i = 0; i < n; i++) {
        numeri[i] = casuale(a, b);
    }

    cout << "Ecco il tuo array: ";
	stampaArray(numeri,n);

    cout << "Quale numero vuoi cercare?" << endl;
    cin >> cerca;

int pos = ricercaArray(numeri, n, cerca); 

    if (pos == -1) {
        cout << "Elemento non trovato" << endl;
    } else {
    	cout << "Posizione del numero: " << pos << endl;
	} 
	
	


}
