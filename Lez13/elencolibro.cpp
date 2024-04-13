/*
Esercizio - ElencoLibri

Creare un elenco di libri. Di un libro si conoscono le seguenti informazioni:

codice isbn: solo numerico e a lunghezza fissa, titolo, autore, editore, numero di pagine, anno di pubblicazione

Creare i seguenti servizi:

visualizzare l'elenco dei libri
cercare un libro scritto da un certo autore
cercare i libri pubblicati da un certo editore
cercare i libri pubblicati in un certo anno
*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_LIBRI = 100;

struct libro {
    string codice;
    string titolo;
    string autore;
    string editore;
    int numpagine;
    int annoPubblicazione;
};

void stampaMenu() {
    cout << "0 - Esci" << endl;
    cout << "1 - Visualizzare l'elenco dei libri" << endl;
    cout << "2 - Cercare un libro scritto da un certo autore" << endl;
    cout << "3 - Cercare i libri pubblicati da un certo editore" << endl;
    cout << "4 - Cercare i libri pubblicati in un certo anno" << endl;
}

void stampaLibro(const libro& libro) {
    cout << "Codice: " << libro.codice << endl;
    cout << "Titolo: " << libro.titolo << endl;
    cout << "Autore: " << libro.autore << endl;
    cout << "Editore: " << libro.editore << endl;
    cout << "Numero di pagine: " << libro.numpagine << endl;
    cout << "Anno di pubblicazione: " << libro.annoPubblicazione << endl;
    cout << endl;
}

void stampaElencoLibri(const libro libri[], int numLibri) {
    cout << "Elenco dei libri:" << endl;
    for (int i = 0; i < numLibri; ++i) {
        stampaLibro(libri[i]);
    }
}

void cercaLibroAutore(const libro libri[], int numLibri, const string& autoreDaCercare) {
    bool trovato = false;
    cout << "Libri scritti da " << autoreDaCercare << ":" << endl;
    for (int i = 0; i < numLibri; ++i) {
        if (libri[i].autore == autoreDaCercare) {
            stampaLibro(libri[i]);
            trovato = true;
        }
    }
    if (!trovato) {
        cout << "Nessun libro trovato per l'autore specificato." << endl;
    }
}

void cercaLibriEditore(const libro libri[], int numLibri, const string& editoreDaCercare) {
    bool trovato = false;
    cout << "Libri pubblicati da " << editoreDaCercare << ":" << endl;
    for (int i = 0; i < numLibri; ++i) {
        if (libri[i].editore == editoreDaCercare) {
            stampaLibro(libri[i]);
            trovato = true;
        }
    }
    if (!trovato) {
        cout << "Nessun libro trovato per l'editore specificato." << endl;
    }
}

void cercaLibriAnno(const libro libri[], int numLibri, int annoDaCercare) {
    bool trovato = false;
    cout << "Libri pubblicati nell'anno " << annoDaCercare << ":" << endl;
    for (int i = 0; i < numLibri; ++i) {
        if (libri[i].annoPubblicazione == annoDaCercare) {
            stampaLibro(libri[i]);
            trovato = true;
        }
    }
    if (!trovato) {
        cout << "Nessun libro trovato per l'anno specificato." << endl;
    }
}

int main() {
    libro libri[MAX_LIBRI];
    int numLibri = 0;

    libri[numLibri++] = {"9788804681264", "Il Nome della Rosa", "Umberto", "Bompiani", 600, 1980};
	libri[numLibri++] = {"9788804681264", "Rosso", "Lucia", "Mondadori", 300, 1978};
    int scelta;

    do {
        stampaMenu();
        cout << "\nScelta: ";
        cin >> scelta;

        switch (scelta) {
            case 0:
                cout << "Programma terminato" << endl;
                break;
            case 1:
                stampaElencoLibri(libri, numLibri);
                break;
            case 2:
                {
                    string autoreDaCercare;
                    cout << "Inserisci il nome dell'autore da cercare: ";
                    cin >> autoreDaCercare;
                    cercaLibroAutore(libri, numLibri, autoreDaCercare);
                }
                break;
            case 3:
                {
                    string editoreDaCercare;
                    cout << "Inserisci il nome dell'editore da cercare: ";
                    cin >> editoreDaCercare;
                    cercaLibriEditore(libri, numLibri, editoreDaCercare);
                }
                break;
            case 4:
                {
                    int annoDaCercare;
                    cout << "Inserisci l'anno di pubblicazione da cercare: ";
                    cin >> annoDaCercare;
                    cercaLibriAnno(libri, numLibri, annoDaCercare);
                }
                break;
            default:
                cout << "ERRORE! Valore inserito non valido!" << endl;
        }

        cout << "\n\n";
    } while (scelta != 0);

    return 0;
}

