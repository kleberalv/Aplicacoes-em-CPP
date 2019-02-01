#include <iostream>

using namespace std;

int n;

void ImparPar(int n){
	
	cout<<"Digite um número e descubra se é impar ou par."<<endl;
	cin>>n;
	
	if (n%2==0){
		cout<<"È par."<<endl;
		
	}else{
	
	cout<<"É impar."<<endl;
 }
}

main(){

  ImparPar(n);	
}
