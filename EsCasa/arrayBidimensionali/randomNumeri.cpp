/******************************************************************************

Memorizzare in un array bidimensionale 10 x 10 dei numeri casuali 
compresi tra zero e 9, stamparne il contenuto e dire quanti zeri 
sono memorizzati all'interno.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
      srand(time(NULL));

    int m [10][10];


    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            m[i][j] = rand()%10;
        }
    }

    int zero = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout<<m[i][j]<<" ";
            if (m[i][j] == 0){
                zero ++;
            }
        }
        cout << endl;
    }

cout<<"ci sono n zeri: "<<zero<<endl;

}
