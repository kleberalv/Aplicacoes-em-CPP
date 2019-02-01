#include <iostream>

using namespace std;

const int tamanho = 5;

int vetor[tamanho];

//ler vetor
void lerVetor(int vetor[],int tamanho){
    for (int i=0;i<tamanho;i++){
        cout << "Posicao "<<(i+1)<<": ";
        cin >> vetor[i];
    }
}

void imprimirVetor(int vetor[],int tamanho){
    for (int i=0;i<tamanho;i++){
        cout << "Posicao "<<(i+1)<<": "<<vetor[i]<<endl;
    }
}

void ordenarPorSelecao(int vetor[],int tamanho){
    for (int i=0;i<tamanho;i++){
        int min = i;
        int j = i + 1;
        while (j < tamanho){
            if (vetor[j]<vetor[min]){
                min = j;
            }
            j++;
        }
        if (i!=min){
            int temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;
        }
    }
}

bool pesquisaSequencial(int vetor[],int alvo){
    for (int i=0;i<tamanho;i++){
        if (vetor[i]==alvo){
            return true;
        }
    }
    return false;
}

int main()
{
    lerVetor(vetor,tamanho);
    ordenarPorSelecao(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
    if (pesquisaSequencial(vetor,3)) {
        cout <<"Valor foi encontrado";
    } else {
        cout <<"Valor não foi encontrado";
    }
    return 0;
}
