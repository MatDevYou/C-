
#include <iostream>


using namespace std;

#define MAX 5

int main() {
	//tipo, identificatore[dimensione]
	
	double numeri [MAX];
	
	for(int i = 0; i < MAX; i++){
  	cout<<"Inserisci numero reale: ";
     cin>>numeri[i];
  }
   
	cout<<"\n\n numeri inseriti: ";
	for(int i = 0; i < MAX; i++)
    cout<<i<<": "<<numeri[i]<<endl;
    
}
