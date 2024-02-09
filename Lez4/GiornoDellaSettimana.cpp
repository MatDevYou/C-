/*
Sia dato in input un jumero interno appartenente all'intervallo [1, 7]
si richiede la visualizzazione del relativo nome del giorno della settimana, sapendo che il primo giorno della settimana è lunedi

es: 
input: 5
output : venerdi

input: 8 errore


*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string giorni[] = {"Lunedi", "Martedi", "Mercoledi", "Giovedi", "Venerdi", "Sabato", "Domenica"};


    int numero;
    cout << "Inserisci un numero intero compreso tra 1 e 7: ";
    cin >> numero;

    if (numero >= 1 && numero <= 7) {
        // Il nome del giorno corrisponde all'elemento nell'array
        string giorno = giorni[numero - 1];
        cout << "Il giorno corrispondente:  "<< giorno;
    } else {
        cout << "errore" << endl;
    }

    return 0;
}


/*
int main () {
	
	int n;
	
	cout<<"inserisci giorno della settimana";
	cin>>n;
	
	switch(n){
		case 1: cout<<"lunedi"<<endl;break;
				case 2: cout<<"martedi";
						case 3: cout<<"mercoledi";
								case 4: cout<<"giovedi";
										case 5: cout<<"venerdi";
													case 6: cout<<"sabato";
															case 7: cout<<"domenica";
																	default: cout<<"errore";	
		
		
	}
	
	
}

*/