#include<iostream>
#include<vector>
#include<string>

int main(){


	std::string name1 = "cba";
	std::string name2 = "abc";

	if(name1.length()==name2.length()){
			sort(name1.begin(), name1.end());
			sort(name2.begin(), name2.end());

			if(name1==name2){
				std::cout<< "oba wyrazy sa anagramami" << std::endl;
			}
			else{
				std::cout<< "oba wyrazy nie sa anagramami" << std::endl;
			}
	}
	else{
		std::cout<< "oba wyrazy nie moga byc anagramami, bo maja rozna dlugosc" << std::endl;

	}










	return 0;
}