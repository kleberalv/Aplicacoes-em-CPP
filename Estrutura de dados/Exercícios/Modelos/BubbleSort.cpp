#include <iostream>

using namespace std;

const int tamanho=10;

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

void bubbleSort(int vetor[],int tamanho){
    for (int i=0; i < tamanho; i++){
        for (int j= tamanho-1; j>=i; j--){
            if (vetor[j-1]>vetor[j]){
                int temp = vetor[j-1];
                vetor[j-1]=vetor[j];
                vetor[j]=temp;
            }
        }
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    bubbleSort(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
    return 0;
}
