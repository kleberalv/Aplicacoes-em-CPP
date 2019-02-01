#include <iostream>

using namespace std;

int a=1;
int b=20;

prod(int a, int b){	
	if (a==b){
		return a;
	}else
	
	if (b%2==0){
			
	    return b+prod(a,b-1);
	    
	}else 
		  if (a==b){
			return a;
	         	}else{
					return b+prod(a,b-1);}
if(prod(a,b)%2==0){
	cout<<prod;
}else{
	return a;
}

}




main(){
	
	cout<<prod(a,b);
	
}
