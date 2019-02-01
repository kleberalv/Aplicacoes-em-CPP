#include <iostream>
#include <conio.h>
using namespace std;

const int tamanho = 5;
struct registro{
	char nome[60];
	int idade;
};
registro *registros[tamanho];

void inicializar(registro *registros[], int tamanho){
	for (int i=0; i<tamanho; i++){
		registros[i]= new registro;
	}	
}

void lerRegistros(registro *registros[],int tamanho){
	cout<<"Digite os campos do registro: "<<endl;
	for (int i=0;i<tamanho;i++){
		cout<< "Nome: ";
		cin.getline(registros[i]->nome,60);
		cout<<"Idade: "<<endl;
		cin>>(registros[i]->idade);
		cout<<""<<endl;
		cin.ignore();		
	}	
}

void imprimirRegistros(registro *registros[],int tamanho){
	cout<<""<<endl;
	cout<<"Registros cadastrados: "<<endl;
	for (int i=0;i<tamanho;i++){
		cout<<"Nome: "<<registros[i]->nome  <<endl;
		cout<<"Idade: "<<registros[i]->idade <<endl;
		
	}	
}

void ordenarPorIdade(registro *registros[],int tamanho){
	for (int i=tamanho-1; i>0; i--){
		for (int j=0;j<i;j++){
			if (registros[j]->idade > registros[j+1] ->idade){
			  registro *aux = registros[j];
			  registros[j]=registros[j+1];	
			  registros[j+1]=aux;
			}
		
		}
	} 	
	
}

void buscarSequencialmente(registro *registros[],int tamanho, int idadeAlvo){
  for (int i=0; i<tamanho;i++){
  	if (registros[i]->idade==idadeAlvo){
  		cout<<"Registro encontrado!!"<<endl;
  		cout<<"Nome: "<<registros[i] ->nome<<endl;
  		cout<<"Idade: "<<registros[i] ->idade<<endl;
  		cout<<endl;
  		break;  		
	  }	
  }	
 cout<<"O registro não foi encontrado!"<<endl; 	
}

void buscarBinariamente(registro *registros[],int tamanho, int alvoIdade){
	int inf=0;
	int sup = tamanho -1;
	while (inf <= sup){
		int meio=(inf+sup)/2;
		if (registros[meio]->idade==alvoIdade){
			cout<<"Nome: "<<registros[meio]->nome<<endl;
			cout<<"Idade: "<<registros[meio]->idade<<endl;
			return;
		}else
		if (alvoIdade<registros[meio]->idade){
			sup = meio -1;
		}else
		inf =meio=1;
		
	}
	
}


int main(){

inicializar(registros,tamanho);	
lerRegistros(registros,tamanho);
ordenarPorIdade(registros,tamanho);	
imprimirRegistros(registros,tamanho);
//buscarSequencialmente(registros,tamanho,idade);
int idade;
cout<<"Digite a idade de busca: "<<endl;
cin>> idade;
buscarBinariamente(registros,tamanho,idade);

return 0;	
}
