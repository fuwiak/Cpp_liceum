#include<iostream>


int main(){

   int a,b,c;
   int delta;
   
   std::cout << "Podaj wartosc zmiennej a ";
   std::cin >> a;
   
   std::cout << "Podaj wartosc zmiennej b ";
   std::cin >> b;
   
   std::cout << "Podaj wartosc zmiennej c ";
   std::cin >> c;
   
   delta=b*b-4*a*c;
   
   if(delta>0){
              std::cout << "Mamy dwa rozwiazania w zbiorze liczb rzeczywistych" << std::endl;
              }
   else if(delta==0){
              std::cout << "Mamy jedno rozwiazanie w zbiorze liczb rzeczywistych" << std::endl;
              }
   else       {
              std::cout << "Nie ma rozwiazania w zbiorze liczb rzeczywistych" << std::endl;        
              }
                    
    


  return 0;
  
  }
