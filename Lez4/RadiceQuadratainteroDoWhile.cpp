/*
calcolo della radice quadrata di un numero intero
visualizza il risultato

n = 3 sqrt(3)

se n è negativo allora segbalare errore e reinserire i dati richiesti

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
		int n;
		
	do {
		
	cout<<"inserisci numero intero positivo: ";
	cin>>n;
	
	if (n < 0)
	cout<<"\nErrore!\nDato inserito non valido\n\n ";
	} while (n < 0);
	
	
	cout<<"\nradice quadrata "<<sqrt(n);

}
	


