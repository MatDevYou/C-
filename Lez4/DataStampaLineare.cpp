/*
Dato in input giorno, mese e anno di una data stmapare la visualizzazione il formato lineare della data

es.

input: 5, 10, 2023
output: 5 ottobre 2023
*/

#include <iostream>
using namespace std;

int main() {

	int giorno, mese, anno;

	cout<<"inserisci giorno, mese, anno: "<<endl,
	 cout<<"giorno: ",
	    cin>>giorno;
	cout<<"mese: ",
	    cin>>mese;
	cout<<"anno: ",
	    cin>>anno;




	switch(mese) {
		case 1:
			cout<< giorno <<" gennaio "<<anno;
			break;
		case 2:
			cout<< giorno <<" febbraio "<<anno;
			break;
		case 3:
			cout<< giorno <<" marzo "<<anno;
			break;
		case 4:
			cout<< giorno <<" aprile "<<anno;
		case 5:
			cout<< giorno <<" maggio "<<anno;
			break;
		case 6:
			cout<< giorno <<" giugno "<<anno;
			break;
		case 7:
			cout<< giorno <<" luglio "<<anno;
			break;
		case 8:
			cout<< giorno <<" agosto "<<anno;
			break;
		case 9:
			cout<< giorno <<" settembre "<<anno;
			break;;
		case 10:
			cout<< giorno <<" ottobre "<<anno;
			break;
		case 11:
			cout<< giorno <<" novembre "<<anno;
			break;
		case 12:
			cout<< giorno <<" dicembre "<<anno;
			break;
		default:
			cout<<"errore";
	}

	  if (giorno > 31 || giorno < 1 || mese > 12 || mese < 1) {
        cout << "Data errata.";
    } else if ((mese == 2 && ((anno % 4 == 0 && giorno <= 29) || (anno % 400 == 0))) || 
               (qsw|| 
               ((mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12) && giorno <= 31)) {
    } else {
        cout << "Data errata.";
    }

    return 0;


}

