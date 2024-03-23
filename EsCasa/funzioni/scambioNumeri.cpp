/******************************************************************************

creare una funzione che scambia il 
contenuto di due variabili 
che le sono passate

*******************************************************************************/


#include <iostream>
#include <ctime>


using namespace std;

void funzScambio(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}


int main() {
    int n;

    int n1, n2, n3;

    cout<<"inserisci 3 numeri: "<<endl;
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2){
        funzScambio(n1,n2);
    } 
    if (n1 >= n3){
        funzScambio(n1,n3);
    }
    if (n2 >= n3){
        funzScambio(n2,n3);
    }

    cout<<" "<<n1<<" "<<n2<<" "<<n3;
   
}