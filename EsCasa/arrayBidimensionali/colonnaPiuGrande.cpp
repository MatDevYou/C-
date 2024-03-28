#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int casuale(int x, int y) {

}

int main() {
	srand(time(NULL));

	int num [4][4];

	for (int i = 0; i < 4; i++) {
		for(int j = 0; i < 4; j++) {
			num [i][j] = rand () % 100;
		}
	}

	int somma = 0;
	int numMax = 0;

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			somma = somma + num[0][j];
		}
	}

	for(int i = 1; i < 4; i++) {
		int rigaAttuale = 0;
		for(int j = 0; j < 4; j++) {
			rigaAttuale = rigaAttuale + num[i][j];
		}
		cout << " " << rigaAttuale;
	}



}