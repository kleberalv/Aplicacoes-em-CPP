#include <iostream>
#include <stdlib.h>

using namespace std;

const int tam = 15;

int* vetor[tam];
int i;
int j;

void criarVetor(int* vet[], int tam){
    for(i=0; i< tam; i++){
      cout<<"Programa para receber 15 numeros e mostra-los na ordem invertida."<<endl;
      cout << "Digite o valor da posicao " << (i+1) << " e pressione ENTER:  " << endl;
        vet[i] = new int[i];
        cin >> *(vet[i]);
system("cls");
    }
}

void imprimirVetor(int* vet[], int tam){
	cout<<"Os numeros digitados foram: "<<endl;
	  for (i=0; i<tam; i++){
	  	cout<< *(vet[i])<<endl;
	  }
	cout<<endl;  
    cout<< "Os numeros digitados em ordem invertida sao: " <<endl;
      for (i=tam-1; i>= 0; i--){
	    cout<< *(vet[i]) << endl;
    }
}

int main()
{
criarVetor(vetor, tam);
imprimirVetor(vetor, tam);
system("pause");
}
