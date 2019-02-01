#include <iostream>

using namespace std;

int **vetor; //Usar ponteiro de ponteiro

int** inicializarVetor(int tamanho){
    int** vector;
    vector = new int*[tamanho];
    for (int i=0;i<tamanho;i++){
        vector[i] = new int;
    }
    return vector;
}

void lerVetor(int** vetor, int tamanho){
    for (int i=0;i<tamanho;i++){
        cout<<"Posicao "<<(i+1)<<": ";
        cin >> *(vetor[i]);
    }
}

void limparPosicao(int** vetor, int posicao, int tamanho){
    for (int i=0;i<tamanho;i++){
        if (posicao==i){
            delete vetor[i-1];
            vetor[i-1] = nullptr;
            break;
        }
    }
}

void imprimirVetor(int** vetor, int tamanho){
    cout<<endl<<endl<<"Valores armazenados no vetor"<<endl;
    for (int i=0;i<tamanho;i++){
        if (vetor[i] != nullptr) {
            cout<<"Posicao "<<(i+1)<<": "<<*(vetor[i])<<endl;
        } else {
            cout<<"Posicao "<<(i+1)<<": "<< "--" <<endl;
        }
    }
}

/*pode passar um ponteiro de vetor -> int** vetor ou int *vetor[],
  representam a mesma coisa: ponteiro de vetor.
*/

void imprimirVetorComPonteiro(int *vetor[],int tamanho){
    int** ptr = &vetor[0];
    int count=0;
    while (count<tamanho) {
        cout<<"Posicao: "<<(count+1)<<": "<<**(ptr++)<<endl;
        count++;
    }
}

int main()
{
    int tamanho=0;
    cout << "Alocação dinâmica" << endl;
    cout << "Digite o tamanho do vetor"<<endl;
    cin >> tamanho;
    vetor = inicializarVetor(tamanho);
    lerVetor(vetor,tamanho);
    limparPosicao(vetor,2,tamanho);
    imprimirVetor(vetor,tamanho);
    imprimirVetorComPonteiro(vetor,tamanho);
    delete vetor;
    return 0;
}
