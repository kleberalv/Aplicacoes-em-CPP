#include <iostream>

using namespace std;

int a=3;
int b=5;

prod(int a, int b){
	if (a==b){
		return a;
	}else
		if(b%2==0){
			return b*prod(a,b-1);
			cout<<prod;
			
}else{
	if (a==b){
			return a;
		}else{
		
			return b*prod(a,b-1);
}
}
}

main(){
	
	cout<<prod(a,b);
	
}
