#include<iostream>


int oblicz_silnie(int n){
	if (n<0){
		std::cout << "Ujemnna wartosc silni" << std::endl;
		return n;
	}
	else{
		int silnia=1;
		for (int i=1;i<=n;i++){
			silnia=silnia*i;
		}
		return silnia;
	}


}





int main(){

	std::cout << oblicz_silnie(-2)<< std::endl;

	return 0;
}