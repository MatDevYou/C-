/*
L’utente inserisce un anno ed il calcolatore verifica se l’anno inserito è 
bisestile.
Un anno è bisestile se è divisibile per 4 ma non per 100, 
oppure se è divisibile per 400 (ad esempio il 1900 non è stato bisestile, 
mentre il 2000 lo è stato).
*/

#include <iostream>
using namespace std;

int main() 
{
    int anno;
    cout << "inserisci un anno ";
    cin >> anno;
    if (anno % 4 == 0) 
    {
        if (anno % 100 == 0) 
        {
            if (anno % 400 == 0) 
            {
                cout << "bisestile" << endl;
            }
            else 
            {
                cout << "non bisestile" << endl;
            }
        }
        else
        {
            cout << "bisestile" << endl;
        }
    } 
    else 
    {
        cout << "non bisestile" << endl;
    }
}

