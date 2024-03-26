/*ndirizzo di memoria di una variabile*/

/*





*/



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	srand(time(NULL));

	int a = 10;


	cout << "valore di a: " << a <<endl;
	cout << "indirizzo di memoria di a: " << &a << endl;


	//puntatore
	int *p; //dichiarazione
	p = &a; // inizializzaione

	cout << "\nvalore di p: " << *p <<endl;
	cout << "indirizzo di memoria di p: " << p << endl;

	*p = -5;

	cout << "\nvalore di a modificato dal puntatore: " << *p <<endl;
	cout << "indirizzo di memoria di p: " << p;
}