#include <iostream>

using namespace std;

int main() {
    int i, j;
    int h;
    
    cout<<"Inserisci altezza triangolo: ";
    cin>>h;
    

    for (i = 0; i < h; i++) {
        for (int k = 0; k < h - i; k++) {
            cout << " ";
        }

        for (j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;



}