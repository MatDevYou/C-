/*
 Creare un programma che continua a far inserire numeri interi il programma si ferma quando vengono inseriti piu'
 numeri negativi di quelli positivi
*/

#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {
	
int n,npos=0,nneg=0;
    
    while(npos>=nneg)
    {
        cout<<"inserisci un numero ";
        cin>>n;
        if(n>0)
        {
            npos++;
        }
        if(n<0)
        {
            nneg++;
        }
    }
    cout<<"hai inserito piu' numeri negativi che positivi";
	
}
	


	


