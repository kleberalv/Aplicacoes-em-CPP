#include <iostream>
#include <stdlib.h>
using namespace std;

const int tam=10;
int vetor[tam];

void CriarVetor(int vetor[],int tam){
    for (int i=0; i < tam; i++){
      cout<<"Programa para ler 10 valores e os mostrar de forma ordenada pelo Quicksort."<<endl;
      cout << "Digite a posicao "<<(i+1)<<" e pressione ENTER: ";
      cin >> vetor[i];
system("cls");
    }
}

void MostrarVetor(int vetor[],int tam){
	cout<<"Vetor de forma ordenada: "<<endl;
    for (int i=0; i<tam; i++){
        cout<<"Posicao "<<(i+1)<<": "<<vetor[i]<<endl;
    }
}

void qs(int vetor[],int esquerda,int direita);
void Quicksort(int vetor[],int esquerda,int direita){
    qs(vetor,esquerda,direita-1);
}

void qs(int vetor[],int esquerda,int direita){
int i,j;
i=esquerda;
j=direita;
int meio=vetor[(esquerda+direita)/2];

  while (j>i){
    while (vetor[i]<meio && i<direita) i++;
      while (meio<vetor[j] && j>esquerda) j--;

      if (i<=j){
        int temp=vetor[i];
          vetor[i]=vetor[j];
          vetor[j]=temp;
i++;
j--;

  } 
}

if (esquerda<j) qs(vetor,esquerda,j);
if (i<direita) qs(vetor,i,direita);
}

int main(){
    CriarVetor(vetor,tam);
    Quicksort(vetor,0,tam);
    MostrarVetor(vetor,tam);
    return 0;
}

