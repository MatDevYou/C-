/*
funzione per determinare se un numero e primo
*/

/*creare sotware per effetturare somma 2 numeri interi*/

#include <iostream>
#include <cstdlib>



bool numeroPrimo(int n) {
	
	for (int i =2; i < n; i++){
		if(n%i==0)
			return false; //non primo
	}
	
	return true;
}

using namespace std;

int main() {

	int a;

	cout<<"inserisci numero: ";
	cin>>a;
	
	cout<<a;
	if (!numeroPrimo(a)){
		cout<<" non ";
	} else {
		cout<<" numero primo";
	}


}
