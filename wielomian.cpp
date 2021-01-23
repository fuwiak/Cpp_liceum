#include <iostream>
#include <cmath>

using namespace std;


int main(){


	int n=2;
	int x;
	int tab[3]={2,0,4};
	int c=2;
	int suma=0;
	for(int i=0;i<=n;i++){
		x = tab[i]*pow(c, n-i);
		cout << tab[i] <<" " << n-i <<endl;
		suma=suma+x;

	}

	cout << suma << endl;

	

	return 0;
}