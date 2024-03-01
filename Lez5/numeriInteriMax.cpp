#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n = 0, s = 0;
    int temp = INT_MIN;

        cout << "Inserisci quanti numeri vuoi mettere in comparazione: ";
        cin >> n;\  

    for (int i = 0; i < n; i++) {
        cout << "Inserisci numero: ";
        cin >> s;

        if (s > temp) {
            temp = s;
        }
    }

    cout << "Il massimo tra i numeri inseriti e: " << temp << endl;
}
