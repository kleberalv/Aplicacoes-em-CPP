#include <iostream>

using namespace std;

int *a, b, *c;
int main(){
	
	b=10;
	a=&b;
	c=a;
	cout<< ++(*a) + ++(*c)<<endl;
	return 0;
}
