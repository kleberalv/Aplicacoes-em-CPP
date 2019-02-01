#include <iostream>

using namespace std;

const int tam = 10;
int vetor[tam];
int maior;
float media;
int menor;
int i;

void criarVetor(int vetor[tam], int tam){
    cout<< "Programa para mostrar o maior, menor e a media dos numeros digitados." <<endl;
    for(i=0; i<tam; i++){
        cout<< "Digite o " <<(i+1)<< " numero e pressione ENTER: ";
        cin>> vetor[i];
   }
   cout<<endl;
}

void maiorValorDigitado(int vetor[tam], int tam){
    for(i=0; i<tam; i++){
        if (vetor[i]>maior){
          maior=vetor[i];
        }
    }
   cout<< "O maior numero digitado e: " << maior <<endl;
}

void mediaVetor(int vetor[tam], int tam){
    for(i=0; i<tam; i++){
        media=(vetor[i]+media);
    }
    media=media/tam;

   cout<<"A media dos numeros digitaos e: "<<media<<endl;
}
void menorValorDigitado(int vet[tam], int tam){
    menor = vetor[i];
    for(i=0; i<tam; i++){
        if (vetor[i]<menor){
          menor=vetor[i];
        }
    }
   cout<< "O menor numero digitado e: " << menor<<endl;
}

int main()
{
criarVetor(vetor, tam);
maiorValorDigitado(vetor, tam);
mediaVetor(vetor, tam);
menorValorDigitado(vetor, tam);
system("pause");}
