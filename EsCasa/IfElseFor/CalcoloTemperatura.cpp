/******************************************************************************

L’utente inserisce una temperatura in Celsius e il calcolatore la converte 
in Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello 
zero assoluto (-273,15), il calcolatore segnala un errore.
Si ricordi che:
Fahrenheit = (9/5) · Celsius + 32
Kelvin = Celsius + 273,15

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float celsius;
    cout<<"inserisci la temperatura in gradi Celsius ";
    cin>>celsius;
    
    if(celsius<-273.15)
    {
        cout<<"Errore";
    }
    else
    {
        float fahrenheit=(9/5)*celsius + 32;
        float kelvin=celsius+273.15;
        cout<<"la temperatura in fahrenheit e' di "<<fahrenheit<<endl;
        cout<<"la temperatura in kelvin e' di "<<kelvin<<endl;
    }

    return 0;
}
