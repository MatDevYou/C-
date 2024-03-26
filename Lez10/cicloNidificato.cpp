/*


*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;



int main() {

	int row = 5;

	for ( int i = 1; i < row; i++) {
		for (int j = 0; j < row - i; j++) {
			cout << " " << endl;
		}
	}

	for (int i = 0; i < row; i++) {
		cout << "*" << endl;
	}

	cout << endl;
}




