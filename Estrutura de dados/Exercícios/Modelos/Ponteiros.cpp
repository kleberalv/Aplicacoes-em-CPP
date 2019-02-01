#include <iostream>

using namespace std;

int a=10,b;//Declaracao duas variaveis globais do tipo inteiro

int *ptr; //Declaracao de um ponteiro do tipo inteiro

int main()
{
    b=a;//A variável b copia o valor em A, que é 10;
    cout <<"O valor da variavel b e: "<<b<<endl;
    ptr = &a; //ptr recebe o endereço da variável a;
    cout <<"Endereço de memoria do ponteiro ptr: "<< ptr << endl; //imprime o endereço de memória que o ponteiro armazena;
    cout <<"O valor apontado pelo ponteiro e: "<< *ptr << endl; //imprime o valor apontado pelo ponteiro;
    return 0;
}

