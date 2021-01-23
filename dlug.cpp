#include<iostream>
#include <cmath>
using namespace std;

int dlug_wewnetrzny = 0;
int dlug_zewnetrzny = 0;

int stan_konta(int value){
    
    money=money+value;
    return money;

}

int get_digit(int number, int pos){
    int digit;
    digit = (int)(number/pow(10,(pos-1))) % 10;
    return digit;

}

int main ()
{

    cout << stan_konta(1231) << endl;
    int money1=stan_konta(4561);

    cout << money1<< endl;


    cout << get_digit(money1, 1) << endl;




	return 0;
}