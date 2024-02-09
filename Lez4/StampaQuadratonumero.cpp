/*
stampare i quadrati di n 
input
n = 4

output
1 4 9 16

*/

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cout<<"Quanti quadrati devo stampare devo ? ";
	cin>>n;
	
	for (int i = 1; i <= n;i++){
			cout<< i * i <<endl;
	}
	
	
}
	


