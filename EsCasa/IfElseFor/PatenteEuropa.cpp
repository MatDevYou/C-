#include <iostream>

using namespace std;

int main() {
    int anni, anniPatente;
    
    cout<<"Inserisci la tua eta: ";
    cin>>anni;
    
    cout<<"A quanti anni si prende la patente nel tuo paese? ";
    cin>>anniPatente;
    
    if (anni >= anniPatente){
    	cout<<"Puoi prendere la patente";
	} else {
			cout<<"Non puoi prendere la patente";
	}
    return 0;
	
	
}