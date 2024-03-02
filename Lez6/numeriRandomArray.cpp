/*visualizaare un array di n numeri casuali, appartenenti all'intervallo [inf, sup] n, inf e sup fornitti da input

stampare array generata
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

    int n,a,b;

    
    cout<<"quanti numeri vuoi?"<<endl;
    cin>>n;
    
    cout<<"inizio dell'array: "<<endl;
    cin>>a;
    
    cout<<"fine array: "<<endl;
    cin>>b;
    
    int numeri[n];
    
    for(int i = 0; i < n;i++){
    	numeri[i] = casuale(a,b);
	}
	
	for(int i = 0; i < n;i++){
		cout<<"ecco il tuo array: "<<numeri[i]<<endl;
	}
}
