#include<iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;



//znajdowanie maksiumum z tablicy
int find_max(int tab[], int N){
	int maxi = tab[0];
	for(int i = 0; i < N; i++)
	  if(tab[i] > maxi)
	    maxi = tab[i];
	return maxi;	


}



//znajdowanie pozycji wartosci maksymalnej
int index_maximum(int tab[], int N){
	int idx = 0;  
	for(int i = 0; i < N; i++){
		if(tab[i] > tab[idx]){
			idx = i;
		}
	}
	  
	
	return idx;

}

//znajdowanie pozycji wartosci minimalnej
int index_minimum(int tab[], int N){
	int idx = 0;  
	for(int i = 0; i < N; i++){
		if(tab[idx] > tab[i]){
			idx = i;
		}
	}
	  
	
	return idx;

}


//sprawdzanie czy dany ciag jest rosnacy
void if_increasing(int tab[], int N, int ind1, int ind2){
	int positive = 0;
	int negative = 0;
	int diff;
	int selected_interval = ind2-ind1;



	for (int i=ind1;i<ind2;i++)
	{
	    diff = tab[i+1] - tab[i];
	    
	    if (diff > 0)
	    {
	       positive++;
	    }

	    if (diff < 0)
	    {
	       negative++;
	    }



	}

	if(positive==selected_interval){
		cout << "the series is increasing" << endl;
		}
	else if(negative==selected_interval){
		cout << "the series is decreasing" << endl;
		}
	else{
		cout << "any of them " << endl;
	}




	}




//wyznaczanie wartosci sredniej arytmetycznej z tablicy

float aritmetic_mean(int tab[], int N, int ind1, int ind2){
	int sum_=0;
	int selected_interval = ind2-ind1; 
	for(int i = ind1; i < ind2; i++){
		sum_=sum_+tab[i];
		}

	return float(sum_)/selected_interval;
	}


//wyznaczanie wartosci sredniej geometrycznej z tablicy


float geometric_mean(int tab[], int N,int ind1, int ind2) 
{ 
  	int selected_interval = ind2-ind1;   
    float product = 1; 
  
    for(int i = ind1; i < ind2; i++)
        product = product * tab[i]; 
  
    
    float gm = pow(product, (float)1 / selected_interval); 
    return gm; 
} 


//zamiana wartosci a na b, i z b na a
	  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  


//sortowanie tablicy babelkowo

void bubbleSort(int tab[], int N)  
{  
    int i, j;  
    for (i = 0; i < N-1; i++)      
      
    for (j = 0; j < N-i-1; j++)  
        if (tab[j] > tab[j+1])  
            swap(&tab[j], &tab[j+1]);  
}  	
	

//wypisywanie tabl;icy na ekran

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 


//wypisywanie na ekran histogramu


void printHistogram(int hist[], int n) 

{
      int i, j;
      for (i = 0; i < n; i++) {
      cout << "[" << i << "]";
      for ( j = 0; j < hist[i]; j++) {
      cout << "*";
      }
      cout<<endl;
   }
}







int main() {


	int const N = 30; //liczba dni
	int temperatura[N];
	int ind1=0;
	int ind2=2;

	srand((int)time(0));
	int i = 0;
	while(i < N) {
		int r = (rand() % 50) + 1;
		cout << r << " ";
		temperatura[i]=r;
		i++;
	}


	cout << "index of max " << index_maximum(temperatura, N) << endl; 
	cout << "index of min " << index_minimum(temperatura, N) << endl; 
	cout << "state of series from ind1= " <<ind1 <<" to " <<ind2 <<endl;
	if_increasing(temperatura, N, ind1, ind2);
	cout << "aritmetic_mean of series from ind1= " <<ind1 <<" to " <<ind2 << " equals "<<aritmetic_mean(temperatura, N, ind1, ind2) <<endl;
	cout << "geometric_mean of series from ind1= " <<ind1 <<" to " <<ind2 << " equals "<<geometric_mean(temperatura, N, ind1, ind2) <<endl;


	cout << "sorted array "  << endl;
	bubbleSort(temperatura, N);
	printArray(temperatura,N);


	int k,j;
	int results[N] = {0};
	for (k = 0; k < N; k++) {   
      for(j = 0; j < N; j++) {
         if ( temperatura[j] == k){
            results[k]++;
         }
      } 
   }
  

   printArray(results,N);


   int maxi=find_max(temperatura,N);
   printHistogram(results, N);







	return 0;
}