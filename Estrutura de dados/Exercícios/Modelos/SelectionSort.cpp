#include <iostream>

using namespace std;

const int tamanho = 10;

int vetor[tamanho];

void lerVetor(int vetor[],int tamanho){
    for (int i=0;i<tamanho;i++){
        cout << "Posicao "<<(i+1)<<": ";
        cin >> vetor[i];
    }
}

void imprimirVetor(int vetor[],int tamanho){
    for (int i=0; i < tamanho; i++){
        cout << "Posicao "<< (i+1) <<": "<<vetor[i]<<endl;
    }
}

void selectionSort(int vetor[],int tamanho){
    for (int i=0; i < tamanho; i++){
        int menor = i;
        for (int j=i+1; j < tamanho; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if (i != menor){
            int temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    selectionSort(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
    return 0;
}
