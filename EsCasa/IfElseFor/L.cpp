#include <iostream>
#include <string>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string array[] = {"nome1", "nome2", "nome3", "nome1", "nome4", "nome2", "nome5", "nome6", "nome7", "nome8"};
    int size = sizeof(array) / sizeof(array[0]);

    // Inizializzazione del generatore di numeri casuali
    srand(time(nullptr));

    set<string> printedNames; // Set per tenere traccia dei nomi già stampati
    int printedCount = 0;

    while (printedCount < 10) {
        int index = rand() % size; // Genera un indice casuale nell'array
        string name = array[index];

        // Verifica se il nome non è stato ancora stampato
        if (printedNames.find(name) == printedNames.end()) {
            cout << name << endl;
            printedNames.insert(name); // Aggiunge il nome al set dei nomi già stampati
            printedCount++;
        }
    }

}
