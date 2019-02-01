#include <iostream>

using namespace std;

const int tamanho = 20;

int vetor[tamanho];

void lerVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        cout << "Vetor["<< i <<"]: ";
        cin >> vetor[i];
    }
}

void imprimirVetor(int vetor[], int posicao, int tamanho){
    if ((posicao >= 0) && (posicao < tamanho)) {
        if ((posicao % 2) == 0) {
            cout << "Vetor[" << (posicao) << "]: " << vetor[posicao] << endl;
        }
        imprimirVetor(vetor, ++posicao, tamanho);
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    imprimirVetor(vetor,0,tamanho);
    cout << "Fim" << endl;
    return 0;
}

