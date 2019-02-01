#include <iostream>
#include <conio.h>

using namespace std;
  const int tamanho=5;
    int* numeros [tamanho];
       void inicializarVetor(int*num[],int tam){
         for (int i=0;i<tamanho;i++){
       	
       	num[i]= new int;
       	*(num[i])=0;
	                                }	
    
       	
	                                           }
	   
  void imprimirValores(int*n[],int tamanho){
    for (int i=0;i<tamanho;i++){
  	
  	cout<<"Posicao: "<<(i+1)<<": "<<*n[i]<<endl;
                               }

                                           }	   

  void lerValores (int*n[], int tamanho){
	for (int i=0;i<tamanho;i++){
		cout<<"Valor "<<(i+1)<<": ";
		cin>>*(n[i]);
		
	                           }
	
	
                                        }



main(){
cout<<"Programa para mostrar numeros e tamanhos"<<endl;
  inicializarVetor(numeros,tamanho);
  lerValores(numeros,tamanho);
  imprimirValores(numeros,tamanho);
  return 0;
	
	
system("pause");	
}
