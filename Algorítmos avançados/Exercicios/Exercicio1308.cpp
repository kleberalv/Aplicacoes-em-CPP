#include <iostream>

using namespace std;
int a=3, b=4, *ptr;

int main(){
	b=a*2;
	ptr=&b;
	a=b+10;
	*ptr = a+(b*2);
	cout<< a << endl;
	
	return 0;
	
	
}
