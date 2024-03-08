/*
Esercizio - SlotMachine

Una slot machine è composta da 4 rulli. I valori rappresentati sono: ♥ ♥  ♣ ♠

Simulare il gioco della slot machine generando valori casuali. Determinare l'eventuale vittoria se tutti i valori estratti sono uguali 



*/



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    int n;
    int valori[] = {'3', '4', '5', '6'}; 
    
    cout<< "quanti tentativi vuoi fare? ";
    cin>>n;
    
    do{
    
	char rullo1 = valori[rand() % 4];
    char rullo2 = valori[rand() % 4];
    char rullo3 = valori[rand() % 4];
    char rullo4 = valori[rand() % 4];
    

    cout << "Rullo 1: " << rullo1<< endl;
    cout << "Rullo 2: " << rullo2 << endl;
    cout << "Rullo 3: " << rullo3 << endl;
    cout << "Rullo 4: " << rullo4 << endl;
    
    if (rullo1 == rullo2 && rullo2 == rullo3 && rullo3 == rullo4) {
        cout << "Hai vinto!" << endl;
    } else {
        cout << "Nessuna vittoria questa volta." << endl;
    }	
	n--;
	} while (n > 0);
    

    

}

