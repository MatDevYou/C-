#include <iostream>

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    
    // Ottenere la lunghezza dell'array utilizzando std::size()
    std::size_t lunghezza = std::size(numeri);

    // Stampa la lunghezza dell'array
    std::cout << "Lunghezza dell'array: " << lunghezza << std::endl;

    // Utilizzo di std::size() in un ciclo for
    for (std::size_t i = 0; i < std::size(numeri); ++i) {
        std::cout << numeri[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
