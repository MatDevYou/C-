/*
Dato in input un numero intero [1, 12]
visualizza il nome del mese corrrispondente
*/

#include <iostream>
using namespace std;

int main() {
	int n;

	cout<<"inserisci giorno della settimana: ";
	cin>>n;

	switch(n) {
		case 1:
			cout<<"gennaio";break;
		case 2:
			cout<<"febbraio";break;
		case 3:
			cout<<"marzo";break;
		case 4:
			cout<<"aprile";break;
		case 5:
			cout<<"maggio";break;
		case 6:
			cout<<"giugno";break;
		case 7:
			cout<<"luglio";break;
		case 8:
			cout<<"agosto";break;
		case 9:
			cout<<"settembre";break;;
		case 10:
			cout<<"ottobre";break;
		case 11:
			cout<<"novembre";break;
		case 12:
			cout<<"dicembre";break;
		default:
			cout<<"errore";
	}



}

