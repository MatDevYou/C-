/*

Riempiri un array di numeri interi casuali -100, 100 di dimensione 10
Visualizzare array cosi riempito 
ordinare l'array in senso crecente 
visualizzare array ordinato

NB: utilizzare algoritmo selectionSortArray
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
  
  int n;
  int a = 100;

  

  int numeri[] = {7, -4, 1, 3};
  
  int dimensione = sizeof(numeri)/ sizeof(int);
  
  //stampa
  cout<<"array non ordinato"<<endl;
  for (int i = 0; i < dimensione; i++){
	cout<<i<<": "<<numeri[i]<<endl;
  }
  
  

  for (int i = 0; i < dimensione - 1; i++){
  	for (int j = i + 1; j < dimensione; j++){
  		if (numeri[i] > numeri [j] ){
  			//algoritmo di scambio
  			int tmp = numeri[i];
  			numeri[i] = numeri[j];
  			numeri[j] = tmp;
		  }
	  }
  }
  
  
     cout<<"array ordinato"<<endl;
  for (int i = 0; i < dimensione; i++){
	cout<<i<<": "<<numeri[i]<<endl;
  }
  
 
 
 
 
}


