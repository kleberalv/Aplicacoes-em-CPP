#include <iostream>
#include <stdlib.h>

using namespace std;

//Escreva o c�digo de um programa que leia 10 posi��es inteiras e imprima os valores na tela.  
//Usar modulariza��o no programa.

const int tam=10;
int vetor[tam];
int i;

void receber (int vetor[], int tam){
	cout<<"VETOR"<<endl;
	for (i=0; i<tam; i++){
	
	cout<<"Digite o "<<(i+1)<<" do vetor e pressione ENTER: "<<endl;
	cin>> vetor[i];
}
system("cls");

}


void mostrar(int vetor[], int tam){
    cout<<"Valores do vetor: "<<endl;
	for (i=0; i<tam; i++){
		cout<<vetor[i]<<endl;
	}
}




main(){
	
	receber(vetor, tam);
	mostrar(vetor, tam);
	
	system("pause");	
	
	
}
