#include <iostream>

using namespace std;

const int tamanho=10;

int vetor[tamanho];

void lerVetor(int vetor[],int tamanho){
    for (int i=0; i < tamanho; i++){
        cout << "Posicao "<<(i+1)<<": ";
        cin >> vetor[i];
    }
}

void imprimirVetor(int vetor[],int tamanho){
    cout << "Valores do vetor "<<endl;
    for (int i=0; i<tamanho; i++){
        cout<<"Posicao "<<(i+1)<<": "<<vetor[i]<<endl;
    }
}

/* lança protótipo da função para que
 * a função seja definida posteriormente
 */
void qs(int vetor[],int left,int right);

//O algoritmo é recursivo.
void quicksort(int vetor[],int left,int right){
    qs(vetor,left,right-1);
}

void qs(int vetor[],int left,int right){

    int i,j;
    i=left;
    j=right;
    int meio = vetor[(left+right)/2];

    while (j>i){
        while (vetor[i]<meio && i<right) i++;
        while (meio<vetor[j] && j>left) j--;

        if (i<=j){
            int temp=vetor[i];
            vetor[i]=vetor[j];
            vetor[j]=temp;
            i++;
            j--;
        }
    }

    if (left<j) qs(vetor,left,j);
    if (i<right) qs(vetor,i,right);

}

int main()
{

    cout << "Algoritmo QuickSort" << endl;
    lerVetor(vetor,tamanho);
    quicksort(vetor,0,tamanho);
    imprimirVetor(vetor,tamanho);
    return 0;
}
