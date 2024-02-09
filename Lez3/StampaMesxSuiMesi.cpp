/*
Dati in input giorno, mese e anno di un adata calendario gregoriano
stampare uno dei seguenti messaggi

gg/mm/aaaa | data errata

es. 

03/02/2024
29/02/2024
29/02/2000

non valido
31/11/2023
29/02/2023
29/02/1800

*/

#include <iostream>

using namespace std;

int main() {
    int giorno, mese, anno;

    cout << "Giorno: ";
    cin >> giorno;

    cout << "Mese: ";
    cin >> mese;

    cout << "Anno: ";
    cin >> anno;

    if (giorno > 31 || giorno < 1 || mese > 12 || mese < 1) {
        cout << "Data errata.";
    } else if ((mese == 2 && ((anno % 4 == 0 && giorno <= 29) || (anno % 400 == 0))) || e
               ((mese == 4 || mese == 6 || mese == 9 || mese == 11) && giorno <= 30) || 
               ((mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12) && giorno <= 31)) {
        cout << giorno << "/" << mese << "/" << anno;
    } else {
        cout << "Data errata.";
    }

    return 0;
}


/*	if (giorno > 31 || giorno < 1 ||  mese > 12 || mese < 1 )
		cout <<"Data errata.";
	else if (mese == 2 && giorno <= 28 || mese == 4  && giorno <= 30 || mese == 6 && giorno <= 30 || mese == 9  && giorno <= 30 || mese == 11 && giorno <= 30 )
		cout<<""<<giorno<<"/"<<mese<<"/"<<anno;
	else if (mese == 1 && giorno <= 31 || mese == 3  && giorno <= 31 || mese == 5 && giorno <= 31 ||  mese == 7 &&  giorno <= 31|| mese == 8 && giorno <= 31 || mese == 10 && giorno <= 31|| mese == 12 && giorno <= 31)   
		cout<<""<<giorno<<"/"<<mese<<"/"<<anno;
	 if (anno % 4 == 0 && anno % 400 == 0 ){
	 	if (mese == 2 && giorno <= 29){
		 	cout<<""<<giorno<<"/"<<mese<<"/"<<anno;
	 	} else {
		 cout<< "Data errata";
		}
	}else if  (anno % 4 != 0 && anno % 400 != 0 && mese == 2 && giorno <=29)
		cout<<""<<giorno<<"/"<<mese<<"/"<<anno;
          
	*/g

