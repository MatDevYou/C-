/*
Esempi di output 

12:05:56

21:25:27

03:01:05

Quale input fornire,
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int secondi;
	int ore;
	int minuti;
	
	cout<<"inserisci ore: ";
	cin>>ore;
	
	cout<<"inserisci minuti: ";
	cin>>minuti;
	
	cout<<"inserisci secondi: ";
	cin>>secondi;
	
	if (ore <= 24 && minuti <= 60 && secondi <= 60){
		if(ore < 10 && minuti < 10 && secondi < 10)
		cout<<"0"<<ore<<":0"<<minuti<<":0"<<secondi;
	else cout<<""<<ore<<":"<<minuti<<":"<<secondi;	
	}
}


