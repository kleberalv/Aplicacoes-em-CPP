#include <iostream>

using namespace std;

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

bool pesquisaBinaria(int vetor[],int tamanho,int alvo){
    int inf=0;
    int sup=tamanho - 1;
    while (inf <= sup){
        int meio = (inf + sup)/2;
        if (alvo = vetor[meio]){
            return true;
        } else
        if (alvo < vetor[meio]){
            sup = meio - 1;
        } else {
            inf = meio + 1;
        }
    }
    return false;
}

int main()
{
    lerVetor(vetor,tamanho);
    ordenarPorSelecao(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
    if (pesquisaBinaria(vetor,tamanho,3)) {
        cout <<"Valor foi encontrado";
    } else {
        cout <<"Valor não foi encontrado";
    }
    return 0;
}
