#include <iostream>

using namespace std;

int **matriz;

int** inicializar(int linha,int coluna){
    int **mat = new int*[linha];
    for (int i=0; i<linha; i++){
        mat[i]=new int[coluna];
    }
    return mat;
}

void lerMatriz(int *mat[],int linha,int coluna){
    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna;j++){
            cout <<"Posicao["<<(i+1)<<"]["<<(j+1)<<"]: ";
            cin >> mat[i][j];
        }
    }
}

void imprimirMatriz(int *mat[],int linha,int coluna){
   	cout<<""<<endl;
    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna;j++){
            cout <<"Posicao["<<(i+1)<<"]["<<(j+1)<<"]:"<<mat[i][j]<<endl;
        }
    }
}


int main()
{
    cout << "Programa matriz dinamica"<<endl;
    int linha=0;
    int coluna=0;
    cout << "Digite o numero de linha:";
    cin >> linha;
    cout << "Digite o numero de colunas: ";
    cin >> coluna;
    //int **matriz=new int*[linha];
    //for (int i=0;i<linha;i++){
    //    matriz[i]=new int[coluna];
    //}
    matriz=inicializar(2,2);
    lerMatriz(matriz,linha,coluna);
    imprimirMatriz(matriz,linha,coluna);
    return 0;
}
