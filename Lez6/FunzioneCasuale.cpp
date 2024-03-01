#include <iostream>
#include <ctime>
#include <cstdlib> 


int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf; 
}

using namespace std;

int main() {
    srand(time(NULL)); 

    int n, x, y;

    cout << "Quanti numeri vuoi estrarre: " << endl;
    cin >> n;

    cout << "Estremo inferiore: " << endl;
    cin >> x;

    cout << "Estremo superiore: " << endl;
    cin >> y;

	for(int i = 0; i < n;i++){
		cout<<"\n genero: "<<casuale(x,y);
	}
   
}
