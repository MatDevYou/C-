/*
20 facce

*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
	srand(time(NULL));
	
	for(int i = 1; i < 21; i++){
		
		int n = rand()% 20 + 1;
		cout<<i<<":"<<" e' uscito "<<n<<endl;
	}
	
	
}
	


	


