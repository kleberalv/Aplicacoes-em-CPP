#include <iostream>

using namespace std;

const int tamanho=10;

int vetor[tamanho];

int somaRec(int vetor[],int posicao,int tamanho){
    if (posicao >= 0){
        return vetor[posicao] + somaRec(vetor,--posicao,tamanho);
    }
    return 0;
}

int lerVetor(int vetor[], int tamanho){
    int i=0;
    for (; i<tamanho; i++){
      cout << "Vetor["<<(i+1)<<"]: ";
      cin >> vetor[i];
      if (vetor[i] == 0) {
         return somaRec(vetor,i,tamanho);
      }
    }
    return 0;
}

int main()
{
    int soma = lerVetor(vetor,tamanho);
    cout << "Resultado: "<< soma << endl;
    return 0;
}

