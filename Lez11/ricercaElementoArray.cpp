#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int inf, int sup) {
    return rand() % (sup - inf + 1) + inf;
}

int main() {
    srand(time(NULL));

    int n, a, b, cerca;
    int pos = -1;
    cout << "Quanti numeri vuoi?" << endl;
    cin >> n;

    cout << "Inizio dell'array: " << endl;
    cin >> a;

    cout << "Fine array: " << endl;
    cin >> b;

    int numeri[n];

    for (int i = 0; i < n; i++) {
        numeri[i] = casuale(a, b);
    }

    cout << "Ecco il tuo array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": " << numeri[i] << " "<<endl;
    }
    cout << endl;

    cout << "Quale numero vuoi cercare?" << endl;
    cin >> cerca;

    for (int i = 0; i < n; i++) {
        if (cerca == numeri[i]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Elemento non trovato" << endl;
    } else {
        cout << "Posizione del numero: " << pos << endl;
    }

    return 0;
}
