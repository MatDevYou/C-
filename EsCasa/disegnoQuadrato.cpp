#include<iostream>
using namespace std;

int main()
{
	 //Lato
	int a,b,c;
	
	cout << "Inserisci 3 numeri: " ; //Chiede un numero tra 1 e 20
    cin >>a>>b>>c;//Input nella variabile
    
    if (a < b && c > b){
    	cout << "compreso in senso stretto";
	} else {
		cout << "Non compreso in senso stretto";
	}
	
	



}