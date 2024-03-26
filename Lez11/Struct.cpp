/*Definizione di una struct*/

/*

struttura di dati, composta da piu elementi

definire struttura per creare una data


*/

#include <iostream>


void stampaData (struct data x){
	
}

using namespace std;

//definizione id struct
struct data {
int giorno;
int mese;
int anno;
};



int main() {
	//definizione di una variabile di tipo struct data
	data d;
	
	//inizializzare una data
	d.giorno = 26;
	d.mese = 3;
	d.anno = 2024;
	
	cout << d.giorno << "/" << d.mese << "/" << d.anno;

}