//Faça um progama para carregar um vetor de 10 elementos do tipo real para
//mostrar:
//A) os números digitados, cada um em uma linha;
//B) A média dos numeros digitos
#include <iostream>
#include <conio.h>
using namespace std;
 main(){
   float vetor[10],media=0; int i;
    for(i=0;i<10;i++){
     cout<<"\nDigite o elemento"<<i<<"do vetor:";
      cin>>vetor[i];media=media+vetor[i];                  
}
    cout<<"vetor digitado:"<<endl;
      for(i=0;i<10;i++){
       cout<<vetor{i};                                    
}
    media=media/10;
      cout<<"\nMedia dos valores:"<<media;
        getch() 
  system ("pause");   
    
     }
