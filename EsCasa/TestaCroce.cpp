/*
testa o croce

*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
	srand(time(NULL));
	
	int n  = rand() % 2;
	if (n == 0){
		cout<<"testa";
	} else {
		cout<<"croce";
	}
	
	
	
}
	


	


