#include <iostream>
using namespace std;

int *a, *b, *c;

int main(){
	
	a = new int;
	*a=5;
	b= new int;
	*b=5;
	c=a;
	*c= *a+*c;
	cout<< (*c) + ++(*b) + ++(*a)<<endl;
	
	return 0;
	
}
