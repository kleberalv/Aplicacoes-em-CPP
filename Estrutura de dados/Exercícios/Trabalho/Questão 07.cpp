#include <iostream>
#include <stdlib.h>

using namespace std;

int i;
int tam;
int* vetor;

void CriarVetor(int* vet, int tam){
    vet= (int*) malloc(tam*sizeof(int));
      for(i=0;i < tam;i++){
        cout<< "Insira o valor do vetor na posicao: " << (i+1) << endl;
        cin>> vet[i];
    }
system("cls");    
    cout<< "O vetor possui: " <<tam<< " posicoes!";
    cout<<endl;

    for(i=0; i<tam; i++){
      cout<<endl;
      cout<< "O valor do vetor na posicao "<<(i+1)<<" e: "<<vet[i];
        
    }
}

int main()
{
	cout<<"Programa para definir o tamanho do vetor e mostrar os seus componentes."<<endl;
    cout<<"Digite o tamanho do vetor e pressione ENTER:  "<< endl;
    cin>> tam;
    cout<< endl;
    CriarVetor(vetor, tam);
    cout<<endl;
system("pause");
}
