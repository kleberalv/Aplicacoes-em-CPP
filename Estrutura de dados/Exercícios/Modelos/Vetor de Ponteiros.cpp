#include <iostream>

using namespace std;

const int tamanho = 5;

int* numeros[tamanho];

void inicializarVetor(int *num[],int tam){
    for (int i=0; i < tam; i++){
        num[i] = new int;
        *(num[i])=0;
    }
}

void imprimirVetor(int *n[],int tam){
    for (int i=0; i < tam; i++){
        cout << "Posicao "<<(i+1)<<": "<<*(n[i])<<endl;
    }
}

void lerVetor(int *n[],int tam){
    for (int i=0; i < tam; i++){
        cout << "Posicao "<<(i+1)<<": ";
        cin >> *(n[i]);
    }
}

int main()
{
    inicializarVetor(numeros,tamanho);
    lerVetor(numeros,tamanho);
    imprimirVetor(numeros,tamanho);
    return 0;
}
