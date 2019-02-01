#include <iostream>
#include <stdlib.h>

using namespace std;

const int tam = 20;
int vetor[tam];

void CriarVetor(int vet[], int tam){
    for(int i=0; i<tam; i++){
      cout<<"Programa que recebe 20 numeros e ordena eles usando SelectionSort."<<endl;
      cout<< "Numero da posicao " << (i+1) << ": ";
      cin>>vet[i];
system("cls");
    }
}

void MostrarVetor(int vet[], int tam){
      cout<< "O vetor ordenado por SelectionSort:" << endl;
    for(int i=0; i<tam; i++){
      cout<< "Posicao "<<(i+1)<< ": " <<vet[i]<<endl;
    }
}

void SelectionSort(int vet[], int tam){

    for(int i=0; i<tam; i++){
        int menor=i;
          for(int j=i+1; j<tam; j++){
            if(vet[j]<vet[menor]){
              menor=j;
            }
        }
        if (i!=menor){
            int temp= vet[i];
            vet[i]= vet[menor];
            vet[menor]= temp;
        }
    }
}

int main()
{
    CriarVetor(vetor, tam);
    SelectionSort(vetor,tam);
    MostrarVetor(vetor,tam);
system("pause");
}
