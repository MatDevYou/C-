/*
Definisci una struttura "Prodotto" con i campi "nome", "prezzo" e "quantità" e 
calcola il totale di spesa per un elenco di prodotti:
*/

#include <iostream>

using namespace std;

struct Prodotto {
    string nome;
    double prezzo;
    int quantita;
};

double calcoloProdotto (struct Prodotto x[], int dim){
    double totale;
    for (int i = 0; i < dim; i++){
        totale += x[i].prezzo * x[i].quantita;
    }
    return totale;
}


int main(){

    const int NUM_PRODOTTI = 3;
    Prodotto listaProdotti[NUM_PRODOTTI];

    listaProdotti[0].nome = "Maglietta";
    listaProdotti[0].prezzo = 15.99;
    listaProdotti[0].quantita = 2;

    listaProdotti[1].nome = "Jeans";
    listaProdotti[1].prezzo = 49.99;
    listaProdotti[1].quantita = 1;

    listaProdotti[2].nome = "Scarpe";
    listaProdotti[2].prezzo = 79.99;
    listaProdotti[2].quantita = 1;

    cout << "\nCalcolo Totale: " << calcoloProdotto(listaProdotti, NUM_PRODOTTI);

}