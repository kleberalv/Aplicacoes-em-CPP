#include <iostream>

using namespace std;


//Fun��o n�o recursiva

int fatorial (int a){
	int fat=1;
	for (int i=1; i<=a;i++){
		fat=fat*i;
	}
	return fat;
}

//Fun��o recursiva

int fatorial(int a, int b){
	if (a==b){
		return 1;
	}else{
		
		return b*fatorial(a,b-1);
  }
}

main(){

	cout<< fatorial(3) <<endl;
	cout<< fatorial(1,3) <<endl;
	return 0;
}
