#include<iostream>
#include<cmath>

void pole_herona(int a, int b, int c){

    if (a+b>c && b+c>a && a+c>b){
        float p;
        float area;

        p = (a+b+c)/2;

        area = sqrt(p*(p-a)*(p-b)*(p-c)); //wzor herona

        std::cout << area << std::endl;



    }
    else{

        std::cout << "Nie mozemy utworzyc trojkata" << std::endl;
    }


}




int main(){

    pole_herona(2,2,5);




return 0;
}
