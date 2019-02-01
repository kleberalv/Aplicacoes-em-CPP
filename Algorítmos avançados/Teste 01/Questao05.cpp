#include <iostream>

using namespace std;

const int tamanho = 10;
int a=1;
int b=10;

prod(int a, int b){
	if (a==b){
		return a;
	}else
	
	return b+prod(a,b-1);
		if (a==b){
			return a;
		}else
			return b+prod(a,b-1);
}


main(){
	
	cout<<prod(a,b);
	
}
