/*
input numeri interi, calcolare la media aritmetica 
stampare il risultato

*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	
	cout<<"\nRAND_MAX: "<<RAND_MAX;
	
	srand(time(NULL));//inizializzazione per rand()
	
	cout<<"\nNumero casuale: "<<rand()%6 + 1;


}
	


	


