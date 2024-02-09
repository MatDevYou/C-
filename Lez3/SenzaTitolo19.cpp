/*
utilizzo variabili di tipo char
*/

#include <iostream>

using namespace std;

int main() {
	
	char c = 'q';
   cout<<"carattere: "<<c;
   
   //determino la posizione in cui si trova il carattere in ASCII
   int posizioneASCII = (int)c; //casting
    cout<<"\nPosizione ASCII: "<<posizioneASCII;
}
