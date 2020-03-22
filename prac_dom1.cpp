
//zad1 Napisz program, który oblicza maximum z dwoch podanych liczb

int maksi(int a, int b){
  if (a>=b){
    return a;
  }
  else{
    return b;
  }
   
}


std::cout << maksi(1,3) << std::endl;


//zad2 Napisz program, który sprawdza parzystosc podanej liczby całkowitej

int czy_parzysta(int a){
  if(a%2==0){
    cout << "jest parzysta" <<endl;
  }
  else{
    cout << "jest nieparzysta" <<endl;
    
  }  
}




//zad3 Napisz program, ktory wyznacza pole trojkata dla zadanej podstawy o dlugosci a i wysokosci h
