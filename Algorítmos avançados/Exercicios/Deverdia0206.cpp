//Faça um progama para mostrar a sequencia fibronacci do 0 ate o valor proximo de 100
#include <iostream>
#include <conio.h>
using namespace std;
main (){
int ultimo=1, penultimo=0, novo;
cout<<penultimo<<"\t";
while (ultimo<=100){
 cout<<ultimo<<"\t";
novo=penultimo+ultimo;
 penultimo=ultimo;
 ultimo=novo;  
getch ();     
      }
cout<<" "<<endl;
system("Pause");      
     }
