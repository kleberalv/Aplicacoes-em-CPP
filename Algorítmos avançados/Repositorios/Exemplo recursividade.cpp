#include <iostream>
//Exemplo de recursividade com mudança de sinal, alternada, em multiplicação

using namespace std;

int multiplicacao(int a, int b){
    if (a == b){
        return a;
    }
    else {
        if ((b % 2) == 0)
           return -b * multiplicacao(a,b-1);
        else
           return b * multiplicacao(a,b-1);
    }
}

int main()
{
    cout << multiplicacao(1,3) << endl;
    return 0;
}

