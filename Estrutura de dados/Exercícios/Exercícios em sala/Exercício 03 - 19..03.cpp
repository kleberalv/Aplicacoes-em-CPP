#include <iostream>
#include <conio.h>
using namespace std;
  int tamanho=0;

    void bubblesort (int vetor[], int tamanho) {
    	
      for (int i=tamanho-1 ; i>=0; i--){
      	
        for (int j=0; j<i ; j++){
          if (vetor[j]> vetor [j+1]){
          	  int temp= vetor[j];
          	  vetor [j]= vetor[j+1];
          	  vetor [j+1]= temp;        	  
          	
		                            }
      	
		                        }    

	                                     }	
       	       	
	                                           }       	

main(){
cout<<"Programa para mostrar o maior e o menor elemento do vetor"<<endl;
cout<<" " <<endl;
  return 0;
	
	
system("pause");	
}
