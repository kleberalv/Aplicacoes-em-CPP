#include <iostream>

using namespace std;

const int tam=5;
int menor;
int vetor[tam];
int i;

void Valores(int vet[], int tam){
	cout<<"Programa para receber 5 numeros e informar o menor."<<endl;
    for(int i=0; i < tam; i++){
        cout << "Digite o " << (i+1) << "º numero e pressione ENTER: ";
        cin >> vet[i];
    }
}

void MenorValor(int vet[], int tam){
	menor= vet[i];
	  for(int i = 0; i < tam; i++){
	    if (vet[i]<menor){
		  menor=vet[i];
				
      }
    }

	    cout<<" "<<endl;
        cout << "O menor numero digitado e: ";
		cout << menor << endl;
}

int main()
{
    Valores(vetor, tam);
    MenorValor(vetor, tam);
system("pause");
}
