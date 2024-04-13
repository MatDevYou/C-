#include <iostream>
#include <string>
#define MAX 3

using namespace std;

//definizione struct libro
struct libro{
	string isbn;
	string titolo;
	string autore;
	string editore;
	int pagine;
	int anno;	
};

void stampaLibro(libro x, string separatore);
void stampaElencoLibri(libro x[]);
void stampaCercaLibroPerAutore(libro x[], string testo);
void stampaCercaLibroPerEditore(libro x[], string testo);
void stampaCercaLibroPerAnno(libro x[], int anno);
void stampaMenu();

int main(){

libro elenco[MAX]={
{"9785555555555","qaz","qwe","qsx",123,2024},
{"9785555555555","qaq","qwe","qsz",123,2023},
{"9785555555555","qaz","qwz","qsx",123,2023}
};

int scelta;
	do{
		stampaMenu();
		cout<<"\n\nScelta: ";
		cin>>scelta;
						
		switch(scelta){
			case 0: cout<<"Programma terminato";break;
			case 1: stampaElencoLibri(elenco);break;
			case 2: {
				cout<<"Inserisci l'autore: ";
				string autore;
				cin>>autore;
				stampaCercaLibroPerAutore(elenco, autore);			
				break;
			}				
			case 3: {
				cout<<"Inserisci l'editore: ";
				string editore;
				cin>>editore;
				stampaCercaLibroPerEditore(elenco, editore);			
				break;
			}
			case 4: {
				cout<<"Inserisci l'anno di pubblicazione: ";
				int anno;
				cin>>anno;
				stampaCercaLibroPerAnno(elenco, anno);			
				break;
			}
			default: printf("ERRORE! Valore inserito non valido!");break;
		}
		printf("\n\n");
	}while(scelta!=0);
	
}

void stampaLibro(libro x, string separatore){
	cout<<"Isbn: "<<x.isbn;
	cout<<separatore;
	cout<<"Titolo: "<<x.titolo;
	cout<<separatore;
	cout<<"Autore: "<<x.autore;
	cout<<separatore;
	cout<<"Editore: "<<x.editore;
	cout<<separatore;
	cout<<"Pagine: "<<x.pagine;
	cout<<separatore;
	cout<<"Anno di pubblicazione: "<<x.anno;
}


void stampaElencoLibri(libro x[]){
	//x è un array di libro

	for(int i=0;i<MAX;i++){
		stampaLibro(x[i],", ");
		cout<<endl;
	}
}

void stampaMenu(){
	cout<<"Scegli una delle seguenti operazioni da eseguire:";
	cout<<"\n1 - Visualizza elenco";
	cout<<"\n2 - Cerca per autore";
	cout<<"\n3 - Cerca per editore";
	cout<<"\n4 - Cerca per anno di pubblicazione";
	cout<<"\n0 - Termina il programma";
}

void stampaCercaLibroPerAutore(libro x[], string testo){
			
	for(int i=0;i<MAX;i++)
		if(x[i].autore==testo)
			stampaLibro(x[i],", ");	
}

void stampaCercaLibroPerEditore(libro x[], string testo){
			
	for(int i=0;i<MAX;i++)
		if(x[i].editore==testo)
			stampaLibro(x[i],", ");	
}

void stampaCercaLibroPerAnno(libro x[], int anno){
			
	for(int i=0;i<MAX;i++)
		if(x[i].anno==anno)
			stampaLibro(x[i],", ");	
}
