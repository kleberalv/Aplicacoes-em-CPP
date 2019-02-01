#include <cstdlib>
#include <iostream>

using namespace std;

int vetor[10];

int main(int argc, char *argv[])
{
    cout<<"Digite os valores do vetor e pressione ENTER: " <<endl;
    for(int i=0; i<10; i++){
            cout<<"Posicao "<<(i+1)<<": ";
            cin>> vetor[i];
                           }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
