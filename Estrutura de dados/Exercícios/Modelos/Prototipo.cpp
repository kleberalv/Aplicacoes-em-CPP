#include <iostream>

using namespace std;

int i, *iptr;

int main(){
	
	i=10;
	iptr=&i;
	(*iptr)++;
	i=i+2;

cout << i + (*iptr) + 2<< endl;
return 0;}
