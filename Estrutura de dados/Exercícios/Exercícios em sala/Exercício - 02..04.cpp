#include <iostream>
using namespace std;

const int tamanho=5;
int numero;

struct candidato{
	char nome [60];
	int tempo;
	int idade;

};

struct candidato candidatos[tamanho];

void lerEstrutura(struct candidato cand[], int tamanho){
	for (int i=0; i<tamanho; i++){
		cout<<"Digite o nome: "<<endl;
		cin.getline(cand[i].nome, 60);
		cout<<"Digite o tempo: "<<endl;
		cin>>cand[i].tempo;
		cin.ignore();
	}
}

void imprimirEstrutura(candidato cand[],int tamanho){
	for (int i=0; i<tamanho;i++){
		
		cout<<"Nome: "<<cand[i].nome<<endl;
		cout<<"Tempo: "<<cand[i].tempo<<endl;
	cout<<endl;	
	}
	
	
}
int main() {
	cout<<"";
 lerEstrutura(candidatos, tamanho);
 cout<<"";
 imprimirEstrutura(candidatos, tamanho);
return 0;
}

