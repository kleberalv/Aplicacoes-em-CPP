//mostrar as idades carregadas
//mostrar a soma das idades
//mostrar a maior idade
//mostrar as idades maiores de 18 anos
#include <iostream>
#include <conio.h>
 using namespace std;
main () {
    int idades[10],i,soma=0,maior=0;
    for(i=0;i<10;i++){
     cout<<"\nDigite a"<<i+1<<"a idade:";
       cin>>idades[i];
       soma=soma+idades[i];
           } 
     cout<<"\nIdades Digitadas:";
     for (i=0;i<10;i++){
       cout<<idades[i]<<"\t";
       if (idades[i]>maior){maior=idades[i];}  
       cout<<"\nSoma das idades;"<<soma;
       cout<<"\nMaior idade digitade:"<<maior;
       getch();
         
         
         }
     
     
     
     
     }
