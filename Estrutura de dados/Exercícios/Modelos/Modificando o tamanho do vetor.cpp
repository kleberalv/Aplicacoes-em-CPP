#include <iostream>

using namespace std;

const int tamanho=10;
int vetor[tamanho];

void lerVetor(int vetor[],int tamanho){
    cout << "Digite os valores do vetor..."<<endl;
    for (int i=0;i<tamanho;i++){
        cout << "Posição "<<(i+1)<<": ";
        cin >> vetor[i];
    }
}

void systemPause(){
    cout << "Pressione uma tecla para continuar..."<<endl;
    cin.get(); //Espera a leitura de um caractere
    cin.ignore(); //Limpa a entrada padrão (fflush do C)
}

void imprimirVetor(int vetor[],int tamanho){
    cout << "Os valores do vetor são..."<<endl;
    for (int i=0;i<tamanho;i++){
        cout << "Posição "<<(i+1)<<": "<<vetor[i]<<endl;
    }
}

int main()
{
    lerVetor(vetor,tamanho);
    systemPause();
    imprimirVetor(vetor,tamanho);
    return 0;

