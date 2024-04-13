/*
Definisci una struttura "Rect" con i campi "larghezza" e "altezza" e calcola l'area di un rettangolo:
*/

#include <iostream>

using namespace std;

struct Rect {
    double larghezza;
    double altezza;
};

double areaTriangolo (struct Rect s){
    return s.larghezza * s.altezza;
}

int main(){

    Rect rettangolo;

    cout << "Scegli altezza triangolo: " << endl;
    cin >> rettangolo.altezza;

    cout << "Scegli larghezza triangolo: " << endl;
    cin >> rettangolo.larghezza;

    cout << "area rettangolo: " << areaTriangolo(rettangolo);

}