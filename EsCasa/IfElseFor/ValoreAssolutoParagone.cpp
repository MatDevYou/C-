/******************************************************************************

 Creare una funzione che calcola e restituisce il valore assoluto
 di un numero intero.

*******************************************************************************/

#include <iostream>

using namespace std;

int valoreAssoluto(int n){
	
	if (n<0){
		n=-n;
	}
	return n;

}

int main(){
	int a,b;

	cout<<"inserisci un numero: ";
	cin>>a;
	
	cout<<"inserisci un numero: ";
	cin>>b;
	
	if (valoreAssoluto(a) > valoreAssoluto(b)){
		cout<<"il primo numero ha valore assoluto maggiore ";
	} else if (valoreAssoluto(a) < valoreAssoluto(b)){
		cout<<"il secondo numero ha valore assoluto maggiore ";
	} else {
			cout<<"il primo numero e il secondo hanno valore assoluto uguale";
	}
	
}