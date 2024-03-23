/*
Creare una funzione che calcola il prodotto e la somma tra tre numeri interi 
e restituisce la differenza tra questi due.
Creare poi un main che consenta di usare la funzione.
*/

#include <iostream>
#include <ctime>


using namespace std;

int diff(int x, int y, int z){
   int prodotto = x * y * z;
   int somma = x + y + z;

   return prodotto - somma;
}
 
int main() {
    int n1,n2,n3;

    cout<<"inserisci numeri: "<<endl;
    cin>>n1>>n2>>n3;

    cout<<"la differenza e' "<<diff(n1,n2,n3);

}