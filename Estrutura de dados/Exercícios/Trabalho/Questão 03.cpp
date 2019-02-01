#include <iostream>
#include <stdio.h>

using namespace std;

const int tam = 3;
int mat1[tam][tam];
int mat2[tam][tam];
int multi[tam][tam];
int soma[tam][tam];
int i;
int j;

void Matriz(int mat1[tam][tam], int mat2[tam][tam], int tam){
        for(i = 0;i < tam;i++){
          for(j = 0;j < tam;j++){
            cout<< "Primeira matriz: "<< endl;
            cout<< "Linha: [" << (i+1)<<"]"<< endl;
            cout<< "Coluna: ["<<(j+1)<<"]"<<endl;
              cin>> mat1[i][j];
system("cls"); 
        }
    }

    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
          cout<< "Segunda matriz: "<<endl;
          cout<< "Linha: [" << (i+1) <<"]"<<endl;
          cout<<"Coluna : [" <<(j+1) <<"]"<<endl;
            cin>> mat2[i][j];
system("cls"); 
        }
    } 
}

void calculosMatriz(int mat1[tam][tam], int mat2[tam][tam], int tam){
      cout<<""<<endl;
	  cout<< "MATRIZ 1: "<< endl;
      for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
          cout<< mat1[i][j] << " ";
        }
        cout<< endl;
      }
      cout<<""<<endl;
      cout<< "MATRIZ 2: "<< endl;
      for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
          cout<< mat2[i][j]<< " ";
         }
        cout<<""<<endl;
      }
      cout<<""<<endl;
      cout<< "Soma das matrizes abaixo: "<<endl;
      for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
          soma[i][j] = mat1[i][j] + mat2[i][j];
          cout<< soma[i][j]<< " ";
        }
        cout<<""<<endl;
      }
      cout<<""<<endl;
      cout<< "Multiplicacao das matrizes abaixo: "<<endl;
      for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
          multi[i][j] = mat1[i][j] * mat2[i][j];
          cout<< multi[i][j]<< " ";
        }
        cout<<""<<endl;
      }
}

int main()
{
    Matriz(mat1, mat2, tam);
    calculosMatriz(mat1, mat2, tam);
system("pause");
}
