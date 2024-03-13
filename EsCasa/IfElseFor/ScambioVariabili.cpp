
/*
esercizio 5 scambio 3 variabili
*/


#include <iostream>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout<<"Inserisci numeri: ";
	cin>>a>>b>>c;
	
	int temp = b;

	b = a;
	a = c;
	c = temp;
	
	cout<<"a: "<<a<<" b: "<<b<<" c: "<<c;
	

	
	
}
