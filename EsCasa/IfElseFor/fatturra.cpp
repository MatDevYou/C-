/*

Scrivere un programma che inseriti da tastiera due numeri interi da tastiera ne stampi il maggiore; se i due numeri sono uguali deve essere stampata la somma dei due numeri.

*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "inserisci numero " << endl;
    cin >> x;

    cout << "inserisci numero " << endl;
    cin >> y;

    if (x > y){
        cout << "questo e il numero maggiore: " << x << endl;
    } else {
        cout << "questo e il numero maggiore: " << y << endl;
    }
    
    if (x == y){
        cout << "questo e la somma: " << x + y << endl;

    }
}