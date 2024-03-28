#include <iostream>

using namespace std;

int main() {

int num [4][4];

for (int i = 0; i < 4; i++){
    for(int j = 0; i < 4; j++){
        cin >> num[i][j];
    }
}

int somma = 0;
int numMax = 0;

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        somma = somma + num[0][j];
    }
}

cout << " " << somma;

}