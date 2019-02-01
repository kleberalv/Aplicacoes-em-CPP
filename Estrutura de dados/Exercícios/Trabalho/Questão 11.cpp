#include <iostream>
#include <stdlib.h>
using namespace std;

const int tam=10;
int escolha;
int vetor[tam];

void CriarVetor(int vet[], int tam){
    for(int i=0; i < tam; i++){
    	cout<<"Programa que recebe 10 valores e os ordena de acordo com sua escolha."<<endl;
        cout<< "Posicao " << (i+1) << ": ";
        cin>> vet[i];
system("cls");
    }
}

void OrdenarValores(int vet[], int tam){
	cout << "Como voce deseja os ordenar? Escolha:"<<endl;
	cout<<" 1- Selection Sort"<<endl;
	cout<<" 2- Insertion Sort"<<endl;
	cout<<" 3- Bubble Sort "<<endl;
	cin >> escolha;
system("cls");	

	if (escolha==1){
	  cout<<"Opcao escolhida foi: SelectionSort. "<<endl;	
	  for(int i=0; i<tam; i++){
	    int menor=i;
		  for(int j=i+1; j<tam; j++){
		    if(vet[j]<vet[menor]){
			  menor=j;
			}
		}
	      if (i!= menor){
		    int temp=vet[i];
			  vet[i]=vet[menor];
			  vet[menor]=temp;
			}
		}
          cout << "Vetor ordenado pelo SelectionSort: " << endl;
            for(int i=0; i<tam; i++){
		      cout<< "Posicao " <<(i+1)<< ": " <<vet[i] <<endl;
        }
    }else
    
      if (escolha==2){
        cout<<"Opcao escolhida foi: InsertionSort. "<<endl;
        for (int i=1;i<tam;i++){
          int comp=vetor[i];
            int j=i-1;
              for (;j>=0&&comp<vetor[j];j--){
                vetor[j+1]=vetor[j];
            }
                vetor[j+1]=comp;
            }
        cout << "Vetor ordenado pelo InsertionSort:" << endl;
        for(int i=0; i<tam; i++){
		cout << "Posicao "<< (i+1)<< ": " <<vet[i] <<endl;
        }
    }else
    
      if (escolha==3){
        cout<<"Opcao escolhida foi: BubbleSort. "<<endl;	  
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
}else{
        cout<<"Opcao invalida! Programa encerrado."<<endl;	
     }
}

int main()
{
    CriarVetor(vetor, tam);
    OrdenarValores(vetor, tam);
system("pause");
}

