/******************************************************************************

Creare una funzione che riceve tre numeri interi e restituisce la differenza 
tra il più grande e il più piccolo.
Creare anche un main che consenta di provare la funzione

*******************************************************************************/

#include <iostream>
#include <ctime>


using namespace std;

int diff(int x, int y, int z){
    int massimo = x;
    int minimo = x;

    if (y >= massimo){
        massimo = y;
    } else if ( z >= massimo){
        massimo = z;
    } 

if(y < minimo){
    minimo = y;
} else if (z < minimo){
    minimo = z;
}

return massimo - minimo;
    
}
 
int main() {
    int n1,n2,n3;

    cout<<"inserisci numeri: "<<endl;
    cin>>n1>>n2>>n3;

    cout<<"la differenza e' "<<diff(n1,n2,n3);

}