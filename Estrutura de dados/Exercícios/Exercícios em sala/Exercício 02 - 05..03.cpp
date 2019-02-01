#include <iostream>

using namespace std;

#define TAMANHO 5

int* numeros[TAMANHO];

void inicializarVetor(int* vet[], int tamanho){
    for(int i=0;i<tamanho;i++){
        vet[i]=new int;//(int*)malloc(sizeof(int));
        *(vet[i])=0;
    }
}

void imprimirVetor(int* vet[], int tamanho){
    for(int i=0;i<tamanho;i++){
        cout<<"Posicao"<<(i+1)<<":"<<*(vet[i])<<endl;
    }
}

void lerVetor (int* vet[], int tamanho){
    for (int i=0;i<tamanho;i++){
        cout<<"Posicao "<<(i+1)<<":";
        cin>>*(vet[i]);
    }
}
int main()
{
    inicializarVetor(numeros, TAMANHO);
    lerVetor(numeros, TAMANHO);
    imprimirVetor(numeros, TAMANHO);
    return 0;
}
