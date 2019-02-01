#include <iostream>

using namespace std;

int somar(int a, int b){//Aqui � usado passagem por valor
    a = a + b;
    return a;
}

int subtrair(int *a,int *b){//Aqui � usado passagem por referencia
    *a = *a - *b;
    return *a;
}

int multiplicar(int& a,int& b){//Tamb�m � uma passagem por referencia -- estilo C++
    a = a * b;
    return a;
}

int main()
{
    int numero1, numero2; //Duas vari�veis locais

    cout << "Digite um valor: "<<endl;
    cin >> numero1;
    cout << "Digite outro valor: "<<endl;
    cin >> numero2;
    /*
      Depois de ler as variaveis numero1 e numero2
      ser� chamada cada uma das fun��es
    */
    cout << "O resultado da soma �: "<<somar(numero1,numero2)<<endl; //S� copia os valores das vari�veis numero1 e numero2
    cout << "O resultado da subtra��o �: "<<subtrair(&numero1,&numero2)<<endl;//Passa os endere�os das vari�veis
    cout << "O resultado da multiplicacao �: "<<multiplicar(numero1,numero2)<<endl;//Tamb�m passa o endere�o de mem�ria das vari�veis
    return 0;
}

