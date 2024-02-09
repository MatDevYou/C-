/*
visualizzare i primi n numeri dispari positivi


*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Quanti numeri dispari positivi devo stampare? ";
	cin>>n;
	
	for (int i = 0; i < n;i++){
		cout<<i+1<< ": "<<2 * i + 1<<endl;
	}
	
	
}
	


