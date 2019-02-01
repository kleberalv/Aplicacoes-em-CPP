#include <iostream>
#include <stdlib.h>
using namespace std;

const int tam=10;

int vetor[tam];

void CriarVetor(int vet[],int tam){

    for (int i=0;i<tam;i++){
    	cout<<"Programa que recebe 10 numeros e ordena eles usando BubbleSort."<<endl;
          cout<<"Digite o "<<(i+1)<<" numero e pressione ENTER: ";
          cin>>vet[i];
system("cls");
    }
}

void MostrarVetor(int vet[],int tam){
     cout << "O vetor ordenado por BubbleSort: " << endl;
       for(int i=0; i<tam; i++){
         cout<<"Posicao " << (i+1)<< ": " <<vet[i] <<endl;
    }
}

void BubbleSort(int vet[],int tam){
  for(int i=0; i<tam; i++){
    for(int j=tam-1; j>=1 ;j--){
      if(vet[j-1]>vet[j]){
        int temp=vet[j-1];
          vet[j-1]=vet[j];
            vet[j]=temp;
      }
    }
  }
}

int main()
{
    CriarVetor(vetor,tam);
    BubbleSort(vetor,tam);
    MostrarVetor(vetor,tam);
system("pause");
}
