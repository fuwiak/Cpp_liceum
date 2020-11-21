#include<iostream>
#include<cmath>

void triangle_area(float a, float b, float c){
	if(a>0 && b>0 && c>0){
		float p = (a+b+c)/2;
		float area, obwod;

		obwod = a+b+c;
		area = sqrt(p*(p-a)*(p-b)*(p-c));
		std::cout << "obwod " << obwod << std::endl;
		std::cout << "area " << area << std::endl;


	}
	else{
		std::cout<< "nie mozna stworzyc trojkata"<<std::endl;

	}


}


int nierownosc(int a,int b, int c){
	if(a<b+c && b<a+c && c<a+b){
		return 1;
	}
	else{
		return 0;
	}

}


int main()
{
	int a =2;
	int b =4;
	int c =5;
	

	if (nierownosc(a,b,c)){
		triangle_area(a,b,c);
		

	}
	else{
		std::cout<< "nie mozna stworzyc trojkata"<<std::endl;
	}

	


	return 0;

}