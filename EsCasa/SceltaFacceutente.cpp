/*
Far scegliere il numero di facce di un dado all’utente e lanciare il dado con quelle facce.

*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
	srand(time(NULL));
	
	int nFacce;
	cout<<"scegli quante facce ha il dado: "<<endl;
	cin>>nFacce;
	
	int lanci;
	cout<<"Bene adesso scegli il numero di lanci: "<<endl;
	cin>>lanci;
	
	for (int i = 1; i < lanci+ 1; i++){
		
		int n = rand() % nFacce + 1;
		cout<<i<<": "<<"e' uscito: "<<n<<endl;
	}


	
	
}
	


	


