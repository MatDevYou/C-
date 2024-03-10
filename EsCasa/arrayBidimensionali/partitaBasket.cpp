/******************************************************************************

Es 20. Una matrice 5x5 rappresenta il numero di punti realizzati da 
dei giocatori di basket in un piccolo torneo, 
in ogni riga c'è il totale dei punti realizzati da un giocatore in per ogni partita,
in ogni colonna ci sono i punti realizzati dai giocatori in una specifica partita.
Stampare il numero di punti realizzati nella partita in cui sono stati fatti 
più punti dal giocatore che nel totale delle partite ha realizzato più punti.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

  int matrice[5][5]; 

  // Acquisizione dei dati
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "Inserisci il numero di punti del giocatore " << i + 1 << " nella partita " << j + 1 << ": ";
      cin >> matrice[i][j];
    }
  }

  
  int indicePartitaMax = 0;
  int punteggioMassimo = 0;

  
  for (int j = 0; j < 5; j++) {
    int punteggioPartita = 0;
    for (int i = 0; i < 5; i++) {
      punteggioPartita += matrice[i][j];
    }

    if (punteggioPartita > punteggioMassimo) {
      punteggioMassimo = punteggioPartita;
      indicePartitaMax = j;
    }
  }

  // Indice del giocatore con il punteggio totale più alto
  int indiceGiocatoreMax = 0;
  int punteggioTotaleMassimo = 0;

  // Ricerca del giocatore con il punteggio totale più alto
  for (int i = 0; i < 5; i++) {
    int punteggioGiocatore = 0;
    for (int j = 0; j < 5; j++) {
      punteggioGiocatore += matrice[i][j];
    }

    if (punteggioGiocatore > punteggioTotaleMassimo) {
      punteggioTotaleMassimo = punteggioGiocatore;
      indiceGiocatoreMax = i;
    }
  }

  // Stampa dei risultati
  cout << "Il giocatore con il punteggio totale più alto è: " << indiceGiocatoreMax + 1 << endl;
  cout << "La partita con il punteggio più alto è: " << indicePartitaMax + 1 << endl;
  cout << "Il giocatore con il punteggio totale più alto ha realizzato " << matrice[indiceGiocatoreMax][indicePartitaMax] << " punti nella partita con il punteggio più alto." << endl;

  return 0;
}
