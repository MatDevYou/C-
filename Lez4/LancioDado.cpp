/*
input numeri interi, calcolare la media aritmetica 
stampare il risultato

*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	
	srand(time(NULL));//inizializzazione per rand()
	
	for (int i = 0; i < 10; i++){
		cout<<"\nDado: "<<rand()%6 + 1;
	}

}
	


	


