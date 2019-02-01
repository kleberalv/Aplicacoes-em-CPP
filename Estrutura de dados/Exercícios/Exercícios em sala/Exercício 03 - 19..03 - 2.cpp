#include <iostream>
#include <conio.h>
using namespace std;
  int tamanho=0;
  
    void insertsort (int vetor[], int tamanho) {
      for (int i=1; i<tamanho; i++){
      	int ref= vetor [i];
      	  int j=i-1;
            while (j>=0 && ref < vetor [j]){
            	vetor [j+1]= vetor [j];
            	j--;
		                                   }  
					vetor[j+1]= ref;								
		   	
	                                }	
                    	   
                                                }       
main(){
cout<<"Programa para mostrar o maior e o menor elemento do vetor"<<endl;
cout<<" " <<endl;
  return 0;
	
	
system("pause");	
}
