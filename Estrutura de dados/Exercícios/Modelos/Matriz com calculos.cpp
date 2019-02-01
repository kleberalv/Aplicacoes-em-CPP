#include <iostream>

using namespace std;

int somar(int a, int b){//Aqui é usado passagem por valor
    a = a + b;
    return a;
}

int subtrair(int *a,int *b){//Aqui é usado passagem por referencia
    *a = *a - *b;
    return *a;
}

int multiplicar(int& a,int& b){//Também é uma passagem por referencia -- estilo C++
    a = a * b;
    return a;
}

int main()
{
    int numero1, numero2; //Duas variáveis locais

    cout << "Digite um valor: "<<endl;
    cin >> numero1;
    cout << "Digite outro valor: "<<endl;
    cin >> numero2;
    /*
      Depois de ler as variaveis numero1 e numero2
      será chamada cada uma das funções
    */
    cout << "O resultado da soma é: "<<somar(numero1,numero2)<<endl; //Só copia os valores das variáveis numero1 e numero2
    cout << "O resultado da subtração é: "<<subtrair(&numero1,&numero2)<<endl;//Passa os endereços das variáveis
    cout << "O resultado da multiplicacao é: "<<multiplicar(numero1,numero2)<<endl;//Também passa o endereço de memória das variáveis
    return 0;
}

