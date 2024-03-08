#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));

  int n, b, menu;
  string a;

  cout << "Quanti nomi vuoi?" << endl;
  cin >> n;

  string nomi[n]; // Dichiaro l'array con la dimensione specificata dall'utente

  for (int i = 0; i < n; i++) {
    cout << "Inserisci nome " << i + 1 << ": ";
    cin >> nomi[i];
  }

  do {
    cout << "Scegli un'opzione:" << endl;
    cout << "1 - Visualizza i nomi inseriti" << endl;
    cout << "2 - Visualizza i nomi delle persone che iniziano con una certa consonante" << endl;
    cout << "0 - Esci dal programma" << endl;
    cin >> menu;
  } while (menu < 0 || menu > 2);

  switch (menu) {
    case 1:
      for (int i = 0; i < n; i++) {
        cout << nomi[i] << endl;
      }
      break;
    case 2:
      char consonante;
      cout << "Inserisci la consonante: ";
      cin >> consonante;
      for (int i = 0; i < n; i++) {
        if (nomi[i][0] == consonante) {
          cout << nomi[i] << endl;
        }
      }
      break;
  }

  return 0;
}
