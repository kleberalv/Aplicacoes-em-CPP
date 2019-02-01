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

void insertionSort(int vetor[],int tamanho){
    for (int i=1;i<tamanho;i++){
        int comp = vetor[i];
        int j = i - 1;
        for (;j>=0 && comp < vetor[j];j--){
            vetor[j+1]=vetor[j];
        }
        vetor[j+1] = comp;
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    insertionSort(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
    return 0;
}
