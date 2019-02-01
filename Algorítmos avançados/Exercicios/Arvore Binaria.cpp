#include <iostream>

using namespace std;

struct node{
	
	int value;
	node *left;
	node*right;

};

node*root=NULL;

void inserir(int value, node*leaf){
	if(value < leaf->value){
		if(leaf->left != NULL){
			inserir(value, leaf->left);
		}else
			leaf->left= new node;
			leaf->left->value=value;
			leaf->left->left=NULL;
			leaf->left->right=NULL; 
	}else
		if (value>=leaf->value){
			if(leaf->right !=NULL){
				inserir(value, leaf->right);
			}else{
			leaf->right= new node;
			leaf->right->value=value;
			leaf->right->left=NULL;
			leaf->right->right=NULL; 				
			}
		}	
}

void inserir(int value){
	if(root!=NULL){
		inserir(value,root);
	}else
	
		root= new node;
		root->value=value;
		root->left=NULL;
		root->right=NULL; 		
	
}

main(){
	inserir(5);
}


