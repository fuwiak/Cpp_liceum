#include<iostream>

void ile_rozwiazan(int a, int b, int c){
     int delta = b*b-4*a*c;
     if(delta>0){
        std::cout << "2 rozwiazania w zbiorze liczb rzeczywistych"<< std::endl;
        }
     else if(delta==0){
        std::cout << "1 rozwiazanie w zbiorze liczb rzeczywistych << std::endl;
        }
     else{
        std::cout << "Brak rozwiazan w zbiorze liczb rzeczywistych << std::endl;
     }
     
     




int main(){
  
  
  ile_rozwiazan(1,2,1);
  //ile_rozwiazan(1,8,1);
  // ile_rozwiazan(1,2,3);
  
  
  


return 0;
}
