#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main() {

	// int x=21;
	// float y = 21.37;
	// float *wskfloat = &y;


	// int *wsk = &x;


	// cout <<"Zmienna  x " <<x << endl;
	// cout <<"Adres zmiennej x" <<wsk << endl;
	// cout << "Wyluskanie liczby z adresu wsk " << *wsk << endl;




	int tab[4] = {2,1,3,7};

	// cout << tab[3] << endl;
	// cout << *(tab+3) << endl;


	int tab2d[2][2]={{2,1}, {3,7}};


	cout << *((*tab2d+1)+1) << endl;
	

	cout << tab2d[1][1] << endl;


	return 0;
}