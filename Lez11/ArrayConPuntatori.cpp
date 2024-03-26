/*

*/



#include <iostream>

using namespace std;

int main() {
	int *x;
	int numeri[] = {-2, 4, 9, -11, 51};

	int d = sizeof(numeri)/sizeof(int);

	x = &numeri[0];

	for (int i = 0; i < d; i++) {
		x = &numeri[i];
		cout << *x << " ";
	}

	for (int i = 0; i < d; i++) {
		
		cout <<"\nmemoria: " << x << "; valore: " << *x << endl;
		x++;
	}

}
