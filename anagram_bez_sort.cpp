#include<iostream>
#include<vector>
#include<string>

std::string bubblesort(std::string arr)
{
	int n=arr.length();
    for( int i=1;i<n ;i++ )
    {
        
        for( int j=0; j<n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
              	char temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

        }
    }
    return arr;
}


int main(){


	std::string name1 = "kajak";
	std::string name2 = "kkaja";

	char temp;
	int n1=name1.length();
	int n2=name2.length();

	if(n1==n2){

		name1 = bubblesort(name1);
		name2 = bubblesort(name2);

		if(name1==name2){
			std::cout<< "anagramy" << std::endl;

		}
		else{
			std::cout<< "wyrazy nie sa anagramami" << std::endl;
		}


	}
	else{
		std::cout<< "oba wyrazy nie moga byc anagramami, bo maja rozna dlugosc" << std::endl;

	}




	return 0;
}