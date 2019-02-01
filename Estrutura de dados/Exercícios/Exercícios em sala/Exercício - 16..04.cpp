#include <iostream>
using namespace std;

const int vetor = 5;
int left;
int right;


void quickshort(int vetor[], int left, int right){
	qs(vetor,left, int right-1);	
}

void qs(int vetor[],int left, int right){
	int i=right;
	int j=left;	
	int meio= vetor [(left+rigth)/2];
	  while (i<j);
	  while (meio>vetor[i] && i<right) i++;
	  while (meio<vetor[j] && j>left)  j--;
	  
	  while (i<j){
	  	int temp= vetor[i];
	  	vetor[i]=vetor[j];
	  	vetor[j]=temp;
	  	i++;
	  	j--;
	  }
	    if (i<right) qs(vetor,i,right);
	    if (j>left)  qs(vetor,j,left)	
}




int main(){

quicksort;
return 0;	
}
