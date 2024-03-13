/*
Far scegliere il numero di facce di un dado all’utente e lanciare il dado 
con quelle facce.Far scegliere il numero di facce di un dado all’utente e lanciare il dado con quelle facce.
*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
	srand(time(NULL));
	
	int dado1;
	int dado2;

	cout<<"inserisci facce dado 1: ";
	cin>>dado1;
	
	cout<<"inserisci facce dado 2: ";
	cin>>dado2;

	int n1 = rand()%dado1 + 1;
	int n2 = rand()%dado2 + 1;
	
	if (n1 == n2){
		cout<<n1<<" = "<<n2<<endl;
		cout<<"hai avuro fortuna, e' uscita una coppia";
	} else {
		cout<<"non e' uscita nessuna coppia";
	}
	
	
}
	


	


