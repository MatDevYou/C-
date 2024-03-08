/*
Esercizio - TasseReddito

Su un reddito si paga l'imposta del 35% se il reddito è superiore a 60.000 euro, altrimenti il 23%. Quanto si deve pagare?

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf;
}

int main() {
    srand(time(NULL));

    int reddito, menu;
    
    do {
    	cout << "Scegli un'opzione:" << endl;
    	cout << "1 - Visualizza le imposte: " << endl;
    	cout << "2 - Visualizza il reddito calcolate sulle imposte" << endl;
    	cout << "0 - Esci dal programma" << endl;
    	cin >> menu;
  } while (menu < 0 || menu > 2);
    
	


	switch(menu){
		case 1:
			cout<<"suca povero "<<endl;
			break;
		case 2:
			cout << "Inserisci il tuo reddito: ";
   		cin >> reddito;
   		 
		 if (reddito >= 60000) {
        reddito = reddito * 0.35; 
        cout << setprecision(2) << fixed << "L'imposta da pagare e: " << reddito << " euro." << endl;
    } else {
        reddito = reddito * 0.23;
        cout <<  setprecision(2) << fixed << "L'imposta da pagare e: " << reddito << " euro." << endl;
    }
}
	
   


}

