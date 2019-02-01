#include <iostream>
using namespace std;

int a, *b, *c;

int main(){
	
	
	a = 5;
	b = &a;
    c = b;
	*b= a+*c;
	
	cout<< ++(*c) + ++(*b) + a <<endl;
	return 0;
}
