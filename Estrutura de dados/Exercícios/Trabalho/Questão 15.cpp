#include <iostream>
#include <stdlib.h>

using namespace std;
struct registro {
  int idade;
  char endereco[60];
  char nome[60];
};

registro **vetor;
int tam, posicao, posicaoI, opcao;

registro** inicializarVetor(int tam){
    registro** vet = new registro*[tam];
    for (int i=0; i<tam; i++){
    vet[i]= new registro;
    }
    return vet;
}

void lerVetor (registro *vet[], int tam){
    for  (int i=0; i<tam; i++){
        cout<<"\nRegistro: " << (i+1) << endl;
        cin.ignore();
        cout<<"Digite o nome e pressione ENTER: ";
        cin.getline(vet[i]->nome,60);
        cout<<"Digite o endereco e pressione ENTER: ";
        cin.getline(vet[i]->endereco,60);
        cout<<"Digte a idade e pressione ENTER: ";
        cin>> vet[i]->idade;
        cout<<endl;
    }
}

void ApagarPosicaoDesejada(registro *vetor[],int posicao,int tam){
    if ((posicao-1)>=0 && (posicao-1)<tam) {
       if (vetor[posicao-1]!=NULL){
         delete vetor[posicao-1];
         vetor[posicao-1]=NULL;
       }
    }
}

void MaiorIdadeDigitada (registro *vetor[], int tam){
    int j=0;
    int maior;
    registro *maiorR = new registro;

    if(vetor[j]!=NULL){
    maior=vetor[j]->idade;
    *maiorR = *vetor[j];} else {
    j++;
    MaiorIdadeDigitada(vetor, tam);
    }

    for (int i=0; i<tam; i++){
    if (vetor[i]!=NULL){
    if (vetor[i]->idade > maior){
        *maiorR=*vetor[i];
    }
}

    }
    cout <<"\nPessoa com maior idade e: " << maiorR->nome;
    cout <<"\n Idade: " << maiorR->idade;
    cout <<"\n Endereo: " << maiorR->endereco;
}

void inserirPosicao(registro** vetor, int posicaoI, int tam){
    for (int i=0; i<tam; i++){
        if (posicaoI-1==i){
        if (vetor[posicaoI-1]==NULL){
            vetor[posicaoI-1] = new registro;
            cin.ignore();
            cout << "\nDigite o nome: ";
            cin.getline(vetor[posicaoI-1]->nome,60);
            cout <<"\nDigite o endereo: ";
            cin.getline(vetor[posicaoI-1]->endereco,60);
            cout << "\nDigite a idade: ";
            cin >> (vetor[posicaoI-1]->idade);
            break;
            } if (vetor[posicaoI-1]!=NULL){
            cout << "Posio j existe";
            }
        }
    }
}

void selectionSort (registro *vet[], int tam) {
	for (int i=0; i<tam; i++) {
        if (vet[i]!=NULL){
		int menor=i;
		for (int j=i+1; j<tam; j++) {
			if (vet[menor]->idade > vet[j]->idade){
				menor=j;
			}
		}
		
		if (i != menor) {
			registro *temp = vet[i];
			vet[i] = vet[menor];
			vet[menor]= temp;

			}
		}
	}
}

void imprimirEstrutura (registro *vet[], int tam){
    for (int i=0; i<tam; i++){
     cout << "\nRegistro " << (i+1);
        if (vet[i]!=NULL){
        cout << "\nNome: " << vet[i]->nome;
        cout << "\nEndereo: " << vet[i]->endereco;
        cout << "\nIdade: " << vet[i]->idade;
        cout<< endl;} else { cout <<"\n--";
        }
    }
}

void Encerrar(){
  cout << "\nFim do programa . . . ";
  }

void menu (int opcao){
  cout<<endl;
  cout <<"Opcoes: ";
  cout <<"\n 1- Criar vetor;";
  cout <<"\n 2- Apagar uma posicao do vetor;";
  cout <<"\n 3- Localizar estrutura com a maior idade;";
  cout <<"\n 4- Criar uma posicao no vetor;";
  cout <<"\n 5- Ordenar vetor por idade;";
  cout <<"\n 6- Mostrar informacoes ja inseridas.";
  cout<<endl;
  cout <<"\n Para encerrar o programa, digite outro numero.";
  cout <<"\n Digite a opcao desejada: ";
  cin >> opcao;
system("cls");

  if (opcao==1){
    cout << "\nQual o tamanho do vetor voce deseja criar? ";
    cin >> tam;
    vetor=inicializarVetor(tam);
    lerVetor(vetor, tam);
    menu(opcao);
}else

    if (opcao==2){
	cout <<"Digite uma posicao a ser apagada: ";
    cin>>posicao;
    ApagarPosicaoDesejada(vetor, posicao, tam);
    menu(opcao);
}else

    if (opcao==3){
    MaiorIdadeDigitada(vetor, tam);
    menu(opcao);
}else

    if (opcao==4){ 
	cout <<"Digite uma posicao para inserir valores";
    cin >> posicaoI;
    inserirPosicao(vetor, posicaoI, tam);
    menu(opcao);
}else

    if (opcao==5){
	selectionSort(vetor, tam);
    menu(opcao);
}else

    if (opcao==6){
	imprimirEstrutura(vetor, tam);
    menu(opcao);
}else

 Encerrar();
}

int main(){
menu(opcao);
}
