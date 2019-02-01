#include <iostream>
#include <stdlib.h>
using namespace std;

const int tamanho=10;
int vetor[tamanho];
int i;


void Vetor(int vetor[], int tamanho) {
	
	cout<<"Digite 10 valores e pressione ENTER: "<<endl;
	for (i=0; i<tamanho; i++){
		cin>>vetor[i];
	}
	
}


void MostrarValores(int vetor[], int tamanho){
	system("cls");
	
	cout<<"Os valores digitados foram: "<<endl;
	for (i=0; i<tamanho; i++){
		cout<<vetor[i];
		cout<<""<<endl;
	}
}



int main() {

Vetor(vetor, tamanho);
MostrarValores(vetor, tamanho);

}
