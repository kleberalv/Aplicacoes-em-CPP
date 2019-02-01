#include <iostream>
#include <stdlib.h>
using namespace std;

const int tam=10;
int i;
int maior;
int menor;
int vetor;
int valor;

struct pontos {
    int x;
    int y;
};

struct pontos pt[tam];

void CriarXeY (int tam){
    for(i=0; i<tam; i++){
      cout<<"Programa para ler 10 valores X e Y, mostrar o maior e o menor e suas determinadas posicoes."<<endl;	
      cout<<"Vetor X"<<endl;
      cout << "Posicao: [" <<(i+1)<< "] " <<endl;
        cin>> pt[i].x;
system("cls");
    }
    
    for(i=0; i< tam; i++){
      cout<<"Programa para ler 10 valores X e Y, mostrar o maior e o menor e suas determinadas posicoes."<<endl;	
      cout<<"Vetor Y"<<endl;    
      cout<< "Posicao: [" <<(i+1)<< "] "<<endl;
        cin>> pt[i].y;
system("cls");
    }
}

void MaiorValorX(pontos pt[], int tam){
    for(i=0; i<tam; i++){
      if (pt[i].x >maior){
        maior=pt[i].x;
        }
    }
      cout<< "O maior valor de X é: " <<maior <<endl;
}

void MenorValorY(pontos pt[], int tam){
    for(i=0; i<tam; i++){
      if (pt[i].y <maior){
        menor= pt[i].y;
        }
    }
      cout<< "O menor valor de Y é: " <<menor <<endl;
}

void procurarValorXeY(pontos pt[], int tam){
    cout<< "Informe qual valor voce deseja pesquisar nos vetores: X e Y:" <<endl;
      cin>> valor;
        cout<< endl;
          for(i=0; i<tam; i++){
            if(valor == pt[i].x){
              cout<< "As posicoes que contem o valor no vetor X:" << (i+1) << endl;
        }
    }
    for(i=0; i<tam; i++){
      if(valor == pt[i].y){
        cout<< "As posicoes que contem o valor no vetor Y:" <<(i+1) <<endl;
        }
    }
}

void MostrarXeY (pontos p[], int tam){
  cout<<"Vetor X:"<<endl;
    for (i=0; i<tam; i++){
  	  cout<<pt[i].x;
  	  cout<<endl;
  	}
  	cout<<endl;
    cout<<"Vetor Y:"<<endl;
  	  for (i=0; i<tam; i++){
        cout<<pt[i].y;
        cout<<endl;
}
	
  }
int main()
{
    CriarXeY(tam);
    MostrarXeY(pt, tam);
    system("pause");
    MaiorValorX(pt, tam);
    MenorValorY(pt, tam);
    procurarValorXeY(pt, tam);
system("pause");
}
