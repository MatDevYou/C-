/******************************************************************************

Creare una funzione che restituisce se un numero intero è naturale o meno.
Creare poi un programma che ricevuto un numero n (passato dall'utente) 
nel caso questo sia naturale, richieda all'utente di inserire altri n 
numeri e alla fine stampi quanti di questi sono naturali.

*******************************************************************************/

#include <iostream>
#include <ctime>


using namespace std;

bool numNat(int x){
    bool n = true;

    if (x < 0){
        n = false;
    }
    return n;
}
 
int main() {
    int n;

    cout<<"inserisci numeri: "<<endl;
    cin>>n;

    if (numNat(n)){
        cout<<"inserisci altri numeri naturali: "<< n << endl;
        int temp = 0;

        for (int i = 0; i < n; i++){
            temp++;
        }
         cout<< "ci sono questi numeri naturali: "<< temp;
    }
    
   

}