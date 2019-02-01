#include <iostream>
#include <stdlib.h>

using namespace std;

const int tam = 3;
int i;
struct registro {
        int codigo;
        char nome[60];
        char endereco[60];
};

struct registro reg[tam];

void Registro (int tam){
	cout<<"Bem-vindo ao programa de registro!"<<endl;
	cout<<endl;
    for(i = 0; i < tam; i++){
      cout<<"Usuario: "<<(i+1)<<endl;
      cout<< "Digite o codigo e pressione ENTER: " << endl;
        cin>> reg[i].codigo;
        cout<<endl;
          cout<< "Digite o nome e pressione ENTER: " << endl;
          cin>> reg[i].nome;
          cout<< endl;
            cout<< "Digite o endereco e pressione ENTER: " << endl;
            cin>> reg[i].endereco;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    }
}

void PesquisaDoRegistro(int cod, int tam){
    for(i = 0;i < tam;i++){
        if(cod == reg[i].codigo){
          cout<<"O nome e: "<< reg[i].nome << "." << endl;
          cout<<"O endereco e: "<< reg[i].endereco << "." << endl;
            exit(0);
        }
    }
      cout << "Codigo nao encontrado! Programa encerrado." << endl;
}

int main()
{
    int cod;
    Registro(tam);
    cout<<"Digite o codigo a ser pesquisado e pressione ENTER: " << endl;
    cin>>cod;
    PesquisaDoRegistro(cod, tam);
system("pause");
}

