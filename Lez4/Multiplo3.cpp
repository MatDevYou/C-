/*
visualizzare i primi 100 multipli di 3 positivi

0 3 6 9 12 15 18 .. 3 * n

algoritmo iterazione (ripete piu volte stesse istruzioni)

istruzione finita o indefinita

for - iterazione definita (so quanto devo iterare) 

while - iterazione indefinita 

do while - iterazione indefinita


*/

#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i <= 100;i++){
			cout<<3 * i<<endl;
	}

	int j = 0;
	while (j < 100) {
		cout<< 3 * j<<endl;
		j++;
	}
	
	int k = 0;
	do {
		cout<<3 + k<<endl;
		k++;
	} while (k < 100);
	
	
	}
	


