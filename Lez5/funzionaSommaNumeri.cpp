/*creare sotware per effetturare somma 2 numeri interi*/

#include <iostream>
#include <cstdlib> 

using namespace std;

int somma(int a, int b) {
    int sommaTot = a + b;
    return sommaTot;
}

int main() {
int n,m;

	cout<<"inserisci primo numero: ";
	cin>>n;
	
	cout<<"inserisci secondo numero: ";
	cin>>m;

    int risultato = somma(n, m); 
    
    cout << "La somma e': " << risultato << endl;

}
