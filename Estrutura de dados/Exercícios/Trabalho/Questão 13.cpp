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
system("cls");
    }
system("cls");    
    cout<< "O vetor possui: " <<tam<< " posicoes!";
    cout<<endl;
	  
        for(int i=0; i < tam; i++){
          for(int j=tam-1; j>=1 ;j--){
            if(vet[j-1]>vet[j]){
              int temp=vet[j-1];
                vet[j-1]=vet[j];
                  vet[j]=temp;
                }
            }
        }
          cout << "Vetor ordenado pelo BublleSort:" << endl;
            for(int i=0; i<tam; i++){
		      cout << "Posicao "<<(i+1)<< ": " <<vet[i]<<endl;
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
