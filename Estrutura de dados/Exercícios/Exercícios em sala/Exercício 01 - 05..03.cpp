#include <iostream>

using namespace std;

int vetor[10];

int main(int argc, char *argv[])
{
	cout<<"Programa da aula do dia: 05/03"<<endl;
	system("pause");
    cout<< " "<<endl;
    cout<<"Digite os valores do vetor e pressione ENTER: " <<endl;
    for(int i=0; i<10; i++){
      cout<<" Posicao "<<(i+1)<<": ";        
      cin>> vetor[i];
                           }
cout<<" "<<endl;
                           
        for(int i=0; i<10; i++){
        cout<<"Conteudo digitado na Posicao "<<(i+1)<<": "<<vetor[i]<<endl;          
   }
		cout<<""<<endl;                           
    system("pause");
}
