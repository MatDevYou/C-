/*cos'e array

insieme di variabili e serve per allocare la memoria 
*/

#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;

int main() {
	//tipo, identificatore[dimensione]
	
	int numeri [3];
	
	//scrittura
	numeri[0] = 3;
    numeri[1] = -5;
    numeri[2] = 7;
    
    for(int i = 0; i < 3; i++)
    cout<<i<<": "<<numeri[i]<<endl;
}
