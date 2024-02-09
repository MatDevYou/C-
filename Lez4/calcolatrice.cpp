/*
Dato in input un numero interi e una operazione aritmetica da eseguire visualizzare il risultato
scegliere tra le seguenti operazioni aritmetica messe a disposizione :
+ somma
- sotrazione
* moltiplicazione
/ quoziente intero
% resto



input 4, 9, +
output somma: 19

input 4,9, *
output moltiplicazione : 36
*/

#include <iostream>
using namespace std;

int main() {
	int n,m;
	char operazione;
	
	cout<<"inserisci i numeri interi: "<<endl;
	cout<<"m: ";
	cin>>m;
	
	cout<<"n: ";
	cin>>n;
	cout<<"inserisci operazione da eseguire"<<endl;
	cout<<"Digita uno dei seguenti simboli ; +, - , * , / , % "<<endl;
	cout<<"scelta: ";
	cin>>operazione;

	switch(operazione) {
		case '+':
			cout<<"somma: "<<m + n<<endl;break;
		case '-':
			cout<<"sottrazione: "<<m - n<<endl;break;
		case '*':
			cout<<"moltiplicazione: "<<m * n;break;
		case '/':
			cout<<"divisione: "<<m / n<<endl;break;
		case '%':
			cout<<"resto: "<<m % n<<endl;break;
		default:
			cout<<"errore";break;
	}



}

