#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));

  int n, a, b, menu, m;

  cout << "Quanti numeri vuoi?" << endl;
  cin >> a;

  int numeri[a]; // Dichiara l'array con la dimensione specificata dall'utente

  for (int i = 0; i < a; i++) {
    cout << "Scrivi numero " << i + 1 << ": " << endl;
    cin >> numeri[i];
  }

  do {
    cout << "Scegli un'opzione:" << endl;
    cout << "1 - Visualizza i numeri inseriti" << endl;
    cout << "2 - Visualizza i numeri multipli di n" << endl;
    cout << "0 - Esci dal programma" << endl;
    cin >> menu;
  } while (menu < 0 || menu > 2);

  switch (menu) {
    case 1:
      for (int i = 0; i < a; i++) {
        cout << "Numero " << i + 1 << ": " << numeri[i] << endl;
      }
      break;
    case 2:
      cout << "Inserisci il valore di n: ";
      cin >> n;
      cout << "Inserisci il valore di m: ";
      cin >> m;
      for (int i = 0; i < a; i++) {
        if (numeri[i] % m == 0) {
          cout << numeri[i] << " e un multiplo di " << m << endl;
        }
      }
      break;
  }

  return 0;
}
