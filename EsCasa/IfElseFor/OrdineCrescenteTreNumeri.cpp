/******************************************************************************



*******************************************************************************/

#include<iostream>
using namespace std;

int main()
{

	int a,b,c,t;
	
	cout << "Inserisci 3 numeri: " ; //Chiede un numero tra 1 e 20
    cin >>a>>b>>c;//Input nella variabile
    
	if (b < a){
		t = a;
		a = b;
		b = t;
	}
	
	if (c < a){
		t = a;
		a = c;
		c = t;
	}
	
	if (c < b){
		t = b;
		b = c;
		c = t;
	}
	
	cout<<a<<" "<<b<<" "<<c;
}