#include <iostream>

using namespace std;

int top=0;
const int tamanho=10;
int number[tamanho];

void push(int number[], int* top,int valor){
    if (*top >=0 || *top < tamanho) {
      number[*top] = valor;
      (*top)++;
    } else {
      cout << "A pilha está cheia!!" <<endl;
      *top = tamanho;
    }
}

/*
 * Retira sempre do topo da pilha
 */
int pop(int number[],int *top){
    if (*top > 0){
        (*top)--;
        int val=number[*top];
        return val;
    } else {
        cout <<"A pilha esta vazia!!" <<endl;
        *top=0;
        return -1;
    }
}

int main()
{
    cout << "Pilha de forma inversa:  " << endl;
//    cin >> push(number,&top);
    push(number,&top,1);
    push(number,&top,2);
    push(number,&top,3);
    push(number,&top,4);
    push(number,&top,5);
    push(number,&top,6);
    push(number,&top,7);
    push(number,&top,8);
    push(number,&top,9);
    push(number,&top,10);

    cout<<""<<endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;
    cout << pop(number,&top) << endl;    
	//cout << pop(number,&top) << endl;
    return 0;
}

