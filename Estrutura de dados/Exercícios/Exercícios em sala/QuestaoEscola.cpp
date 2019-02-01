#include <iostream>

using namespace std;

int n1, n2, m;

void notas (int n1, int n2){
	
 	 cout<<"Programa para escola"<<endl;
 	 
 	 cout<<"Digite sua primeira nota: "<<endl;
	  cin>>n1;
	 
	 cout<<"Digite sua segunda nota: "<<endl;
	  cin>>n2;
	  
	int m= (n1+n2)/2; 
	cout<<"Sua média: "<< m <<endl;	
	
	if (m >= 7){
		cout<<"Aluno aprovado!"<<endl;
	}else
	
	if (m>= 5 && m<7){
	   cout<<"Aluno apto para a terceira prova."<<endl;
    
	}else
	if (m<5){
		cout<<"Aluno reprovado... Faca novamente a disciplina!"<<endl;
	}	
	
}

main(){
	
	notas(n1, n2);

system("pause");	
}
