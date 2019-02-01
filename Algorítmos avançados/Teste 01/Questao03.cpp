#include <iostream>

using namespace std;

int a;
int *ptra;
int b;

int main(){
	a = 10;
	b = a;
	a = a + b;
	
	ptra = &a;
	a = *ptra + (2*b);
	*ptra = *ptra + 1;
	
	cout<< a << endl;
}
