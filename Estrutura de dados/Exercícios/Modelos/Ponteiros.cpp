#include <iostream>

using namespace std;

int a=10,b;//Declaracao duas variaveis globais do tipo inteiro

int *ptr; //Declaracao de um ponteiro do tipo inteiro

int main()
{
    b=a;//A vari�vel b copia o valor em A, que � 10;
    cout <<"O valor da variavel b e: "<<b<<endl;
    ptr = &a; //ptr recebe o endere�o da vari�vel a;
    cout <<"Endere�o de memoria do ponteiro ptr: "<< ptr << endl; //imprime o endere�o de mem�ria que o ponteiro armazena;
    cout <<"O valor apontado pelo ponteiro e: "<< *ptr << endl; //imprime o valor apontado pelo ponteiro;
    return 0;
}

