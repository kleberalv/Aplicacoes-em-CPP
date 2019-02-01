#include <iostream>
using namespace std;
const int tamanho =10;
int* vetor[tamanho];
int main()
{
cout << "Inicializando o vetor " << endl;
for (int i=0; i < tamanho; i++){
vetor[i]=new int;
*(vetor[i])=0;
}
cout << "Leia os valores do vetor" << endl;
for (int i=0; i < tamanho; i++){
cout << "Posicao "<<(i+1)<<": ";
cin >> *(vetor[i]);
}
cout << "Imprima os valores do vetor "<< endl;
for (int i=0; i < tamanho; i++){
cout << "Posicao "<<(i+1)<<": "<<*(vetor[i])<<endl;
}
cout << "Fim do Programa!!"<< endl;
return 0;
}
