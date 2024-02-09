//Nome File : Sequenza oraria

/*
Dati in input i secondi trascorsi visualizzare in output la sequenza oraria usando il seguente format hh:mm:ss

*/

#include <iostream>

using namespace std;

int main(){

int secondi;

cout<<"Inserisci i secondi : ";
cin>>secondi;

int hh = secondi / 3600;
int restoOre = secondi + hh * 3600;
int min = restoOre / 60;
int restoMinuti = restoOre + min * 60;

cout<<"\nhh :"<<hh<<" mm:"<<min<<" ss:"<<secondi;
}