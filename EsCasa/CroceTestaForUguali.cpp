/*
 Far lanciare 3 monete e dire cosa esce e poi dire quante teste e quante croci sono uscite.
*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
	srand(time(NULL));
	
	int teste = 0;
	int croce = 0;

	for (int i = 0; i < 3; i++){
		if (rand()%2 == 0){
			cout<<"testa"<<endl;
			teste++;
		} else {
			cout<<"croce"<<endl;
			croce++;
		}
	}
	
	cout<<"sono uscite "<<teste<<" teste "<<" e "<<croce<<" croce";

}
	


	


