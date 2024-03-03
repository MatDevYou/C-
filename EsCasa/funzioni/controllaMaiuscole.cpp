/******************************************************************************

Creare un programma che fa inserire all’utente tre caratteri e usando 
una funzione verifica e stampa quanti di questi sono lettere maiuscole.

*******************************************************************************/

#include <iostream>
#include <ctime>


using namespace std;

bool controllaMaiuscole(char c){
    bool v = false;
    if(c >= 'A' && c <= 'Z'){
        v = true;
    }
    return v;
}


int main() {
    char l;
    int n = 0;
    int maiusc = 0;

    cout<<"inserisci quanti caratteri vuoi controllare: "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++){
    cout<<"inserisci carattere: ";
    cin>>l;

    if(controllaMaiuscole(l)){
        maiusc++;
    }
    }
cout<<"il numero di caratteri che vuoi verficare sono "<<n<<endl;

cout<<"ci sono "<<maiusc<<" maiuscole"<<endl;

}
