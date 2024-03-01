/*
Fare:

1.

**********
 *********
  ********
   *******
       ...
         *



e poi...
2.


         +
        ++
       +++
      ++++
       ...
++++++++++




3. Matrice diagonale:

*
 *
  *
   *
    *
     *



4. Matrice diagonale inversa:

*/

#include <iostream>

using namespace std;

int main() {
	int n;

	cout<<"inserisci numero: ";
	cin>>n;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				cout<< " ";
			}

			for (int k = n - i; k > 0; k--) {
				cout << "*";
			}

			cout <<endl;
		}


	for (int i = n; i >= 0; i--) { //i>0
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < n - i; k++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;


}