#include <iostream>

using namespace std;

int n;

void ImparPar(int n){
	
	cout<<"Digite um n�mero e descubra se � impar ou par."<<endl;
	cin>>n;
	
	if (n%2==0){
		cout<<"� par."<<endl;
		
	}else{
	
	cout<<"� impar."<<endl;
 }
}

main(){

  ImparPar(n);	
}
