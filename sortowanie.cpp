#include<iostream>

void sort(int &a, int &b, int &c){
    if(a>b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a>c){
        int tmp = a;
        a=c;
        c = tmp;
    }
    if(b>c){
        int tmp = b;
        b=c;
        c=tmp;
    }
    return;
}

int main(){


	int a=7;
	int b=1;
	int c=2;

	std::cout<< "Kolejnosc przed sortowaniem " << a << " " << b << " " << c << std::endl;


	sort(a,b,c);



    std::cout<< "Kolejnosc po sortowaniu " << a << " " << b << " " << c << std::endl;






	return 0;
}
