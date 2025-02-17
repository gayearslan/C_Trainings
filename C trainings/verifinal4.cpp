#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
int toplam=0;
int fonk(struct Node *root){
	if((root->left==NULL || root->right==NULL)&&(root->left!=NULL)&&(root->right!=NULL)){
		toplam+=root->data;
		return toplam;	
	}
	fonk(root->left);
	fonk(root->right);
}

int main(){
	
}

