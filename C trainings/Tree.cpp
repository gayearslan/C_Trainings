#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *root=NULL , *gecici=NULL;

/*void ekle(int sayi){
	root=gecici;
	if(root==NULL){
		root->data=sayi;
		root->left=NULL;
		root->right=NULL;
	}
}*/
//kucukler sola , buyukler saga
void ekleRec(struct Node* root, struct Node* yeni){
	if(root==NULL){
		root=yeni;
	}
	if(yeni->data < root->data){
		if(root->left==NULL){
			root->left=yeni;
		}
		else{
			ekleRec(root->left, yeni);
		}
	}
	else{
		if(root->right==NULL){
			root->right=yeni;
		}
		ekleRec(root->right,yeni);
	}
}

void enKucukEleman(struct Node* root){
	if(root==NULL){
		printf("agac bostur");
	}
	else{
		if(root->left==NULL){
			printf("en kucuk eleman %d",root->data);
		}
		else{
			enKucukEleman(root->left);	
		}
	}
}

void enBuyukEleman(struct Node* root){
	if(root==NULL){
		printf("agac bostur");
	}
	else{
		if(root->right==NULL){
			printf("en buyuk eleman %d",root->data);
		}
		else{
			enBuyukEleman(root->right);	
		}
	}
}
void preOrderDolasma(struct Node* root){
	if(root==NULL){
		return;
	}
	printf("%d",root->data);
	preOrderDolasma(root->left);
	preOrderDolasma(root->right);
}

void inOrderDolasma(struct Node* root){
	if(root==NULL){
		return;
	}
	inOrderDolasma(root->left);
	printf("%d",root->data);
	inOrderDolasma(root->right);
}


void postOrderDolasma(struct Node* root){
	if(root==NULL){
		return;
	}
	postOrderDolasma(root->left);
	postOrderDolasma(root->right);
	printf("%d",root->data);
}



int main(){
	
}

