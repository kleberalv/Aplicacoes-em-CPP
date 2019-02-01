#include <iostream>
#include <conio.h>
using namespace std;
  int tamanho=0;
  
    void selectionsort (int vetor[], int tamanho) {
      for (int i=0; i<tamanho; i++){
      	int menor= i;
		    for (int j= i+1; j< tamanho; j++){
		      if (vetor[menor]>vetor[j]){
		      	menor=j;
			                            }	
			                                 }   	   
        
		        if (i!=menor){
		          int temp= vetor[i];
				  vetor[i]= vetor[menor];
				  vetor[menor]= temp;	
			                 	}		
		                             }  
									
									
									
									
                                                   }
main(){
cout<<"Programa para mostrar o maior e o menor elemento do vetor"<<endl;
cout<<" " <<endl;
  return 0;
	
	
system("pause");	
}
