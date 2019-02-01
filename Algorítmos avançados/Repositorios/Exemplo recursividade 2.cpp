#include <iostream>

//Exemplo clássico de recursividade com fatorial.

using namespace std;

int fatorial(int a, int b){
    if (a == b){
        return 1;
    } else {
        return b * fatorial(a,b-1);
    }
}

int main()
{
    cout << fatorial(1,4) << endl;
    return 0;
}

