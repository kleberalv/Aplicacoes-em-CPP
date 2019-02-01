#include <iostream>
using namespace std;

const int tamanho=5;

struct registro {
	char nome[60];
	int idade;
	
};

registro*registros[tamanho];

void inicializarRegistros(registro*registros[], int tamanho){
	for (int i=0; i<tamanho; i++){
		registros[i] = new registro;
	}
}

void lerRegistros(registro*registros[],int tamanho){
	cout<< "Digite os valores para os registros"<<endl;
	for (int i=0; i<tamanho;i++){
		
		cout<<""<<endl;
		cout<<"Digite um nome: ";
		cin.getline(registros[i]->nome,60);
		cout<<"Digite uma idade: ";
		cin>> registros[i]->idade;

		cin.ignore();
	}	
}

void imprimirRegistros(registro *registros[],int tamanho){
	cout<<""<<endl;
	cout<<"Conteudo dos registros: "<<endl;
	for (int i=0; i<tamanho;i++){
		
		cout<<"Nome: "<<registros[i]->nome <<endl;
		cout<<"Idade: "<<registros[i]->idade <<endl;
	}
	
}

int main()
{
	
inicializarRegistros(registros,tamanho);
lerRegistros(registros,tamanho);
imprimirRegistros(registros,tamanho);
cout<<""<<endl;
return 0;	
	
	
	
}
