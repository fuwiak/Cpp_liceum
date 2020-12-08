#include <iostream>
#include <fstream>
#include<vector>
using namespace std;


long decimalToBinary(long n) {
    int remainder; 
    long binary = 0, i = 1;
   
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}



int main ()
{




std::ifstream file_handler("wpisywanie.txt");
std::ofstream outputfile("test.txt");


std::vector<int> arr;
int number;

while (file_handler>>number) {
  arr.push_back(number);

}




std::vector<long> arr_long;

for(int i=0; i<arr.size(); i++ ){
    arr_long.push_back(decimalToBinary(arr[i]));
    }




std::copy(arr_long.rbegin(), arr_long.rend(), std::ostream_iterator<long>(outputfile, "\n"));



    return 0;
}












