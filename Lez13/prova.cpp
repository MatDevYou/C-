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

//quanti libri ci sono in elenco
int dim = 7;


//libri
struct libro {
	string isbn; //13 caratteri
	string titolo;
	string autore;
	string editore;
	int nPagine;
	int anno;
};


void stampaLibri(struct libro x[], int dim) {
	for(int i=0; i<dim; i++) {
		cout<<"ISBN: "<<x[i].isbn<<endl;
		cout<<"Titolo: "<<x[i].titolo<<endl;
		cout<<"Autore: "<<x[i].autore<<endl;
		cout<<"Editore: "<<x[i].editore<<endl;
		cout<<"Numero di pagine: "<<x[i].nPagine<<endl;
		cout<<"Anno: "<<x[i].anno<<endl<<endl;
	}
}


void stampaMenu() {
	cout<<"\nScegli cosa fare \n0 - Esci"<<endl;
	cout<<"1 - Visualizzare l'elenco dei libri"<<endl;
	cout<<"2 - Cercare un libro scritto da un certo autore"<<endl;
	cout<<"3 - Cercare i libri pubblicati da un certo editore"<<endl;
	cout<<"4 - Cercare i libri pubblicati in un certo anno"<<endl;
}

void cercaAutore(struct libro x[], int dim) {
	bool trovato = false;

	string cercaPerAutore;
	cout<<"Inserisci l'autore che desideri cercare: "<<endl;
	cin>>cercaPerAutore;

	for(int i=0; i<dim; i++) {
		if(x[i].autore == cercaPerAutore) {
			cout<<"\nAutore trovato"<<endl;
			cout<<"Titolo: "<<x[i].titolo<<endl;
			cout<<"Autore: "<<x[i].autore<<endl;
			cout<<"Editore: "<<x[i].editore<<endl;
			trovato = true;
		}
	}
	if(!trovato)
		cout<<"Nessun libro trovato per questo autore"<<endl;

}


void cercaEditore(struct libro x[], int dim) {
	bool trovato = false;

	string cercaPerEditore;
	cout<<"Inserisci l'editore che desideri cercare: "<<endl;
	cin>>cercaPerEditore;

	for(int i=0; i<dim; i++) {
		if(x[i].editore == cercaPerEditore) {
			cout<<"\nEditore trovato"<<endl;
			cout<<"Titolo: "<<x[i].titolo<<endl;
			cout<<"Autore: "<<x[i].autore<<endl;
			cout<<"Editore: "<<x[i].editore<<endl;
			trovato = true;
		}
	}
	if(!trovato)
		cout<<"Nessun libro trovato per questo editore"<<endl;

}

void cercaAnno(struct libro x[], int dim) {
	bool trovato = false;

	int cercaPerAnno;
	cout<<"Inserisci l'editore che desideri cercare: "<<endl;
	cin>>cercaPerAnno;

	for(int i=0; i<dim; i++) {
		if(x[i].anno == cercaPerAnno) {
			cout<<"\nAnno trovato"<<endl;
			cout<<"Titolo: "<<x[i].titolo<<endl;
			cout<<"Autore: "<<x[i].autore<<endl;
			cout<<"Editore: "<<x[i].editore<<endl;
			cout<<"Anno di pubblicazione: "<<x[i].anno<<endl;
			trovato = true;
		}
	}
	if(!trovato)
		cout<<"Nessun libro trovato per questa annualita"<<endl;

}



int main () {

	//libro = struct libro
	libro elenco[dim]= {

		{"9780012345678","Harry Potter e la pietra filosofale","Rowling","Feltrinelli",397,2020},

		{"9780012345679","Introduzione all'informatica'","Paccaniella","Piombini",458,2021},

		{"9780012345670","IT","King","Feltrinelli",241,2022},

		{"9780112345671","Ted","Luca","Feltrinelli",271,2012},

		{"9780112345674","La ragione","Miller","Mondadori",271,2002},

		{"9780112345672","La gloria","Michelangelo","Piombini",190,2002},

		{"9780112345673","Il dio mai nato","Thor","Feltrinelli",271,2020},

	};


//sanitizzo il menu
	int menu;

	do {

		stampaMenu();
		cin>>menu;

		//creo il menu per scegliere
		switch(menu) {
			case 0:
				cout << "\nProgramma terminato" << endl;
                break;
			case 1:
				stampaLibri(elenco, dim);
				break;
			case 2:
				cercaAutore(elenco, dim);
				break;
			case 3:
				cercaEditore(elenco, dim);
				break;
			case 4:
				cercaAnno(elenco, dim);
				break;
			default:
				cout<<"Errore!"<<endl;
				stampaMenu();
				cin>>menu;
		}

	} while(menu != 0);

}