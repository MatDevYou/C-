#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n; 
	int fat = 1;
	
    do {
        cout << "inserisci numero naturale: ";
        cin >> n;
    } while (n < 0);

	
    for (int i = 1; i <= n; i++) { 
        fat *= i;   
    }


    cout << "numero fattoriale: " << fat << endl;

}
