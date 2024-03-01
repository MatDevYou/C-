/*creare sotware per effetturare somma 2 numeri interi*/

#include <iostream>
#include <cstdlib>



int fattoriale(int n) {
	int fat = 1;

	for (int i = 1; i <= n; i++) {
		fat *= i;
	}

	return fat;
}

using namespace std;

int main() {

	int a;

	cout<<"inserisci numero: ";
	cin>>a;

	cout << "La somma e': " << fattoriale(a) << endl;

}
