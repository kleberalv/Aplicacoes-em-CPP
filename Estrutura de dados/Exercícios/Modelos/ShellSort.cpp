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
    for (int i=0;i<tamanho;i++){
        cout<<"Posicao "<<(i+1)<<": "<<vetor[i]<<endl;
    }
}

void shellSort(int vetor[],int tamanho){
    int i,j,gap,valor;

    gap=10;
    while (gap > 0){
        for (i=0; i < tamanho; i++){
            j=i;
            valor=vetor[i];
            while (j>=gap && vetor[j-gap] > valor){
                vetor[j]=vetor[j-gap];
                j=j-gap;
            }
            vetor[j]=valor;
        }
        if (gap/2 != 0){
            gap = gap/2;
        } else
        if (gap==1){
            gap=0;
        } else {
            gap=1;
        }
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    shellSort(vetor,tamanho);
    cout << endl;
    imprimirVetor(vetor,tamanho);
    return 0;
}
