#include <stdio.h>
#include <stdlib.h>
struct Node{
	char data;
	struct Node *next;
};

struct Node *ilk=NULL,*son=NULL,*temp=NULL,*ilk2=NULL,*son2=NULL;

void listeyiYazdir();
void ekle();
void listeyiYazdir2();
void terstenYazdirCevir(struct Node* temp);
void ekle2(char);

int main(){
	ekle();
	listeyiYazdir();
	terstenYazdirCevir(ilk);
	listeyiYazdir2();
}


void ekle(){
	char kar;
	for(int i=0;i<10;i++){
		scanf(" %c",&kar);
		if(ilk==NULL){
			ilk=(struct Node*)malloc(sizeof(struct Node*));
			ilk->data=kar;
			son=ilk;
			son->next=NULL;
		}
		else{
			son->next=(struct Node*)malloc(sizeof(struct Node*));
			son=son->next;
			son->data=kar;
			son->next=NULL;
		}
	}
}
void ekle2(char kar){
		if(ilk2==NULL){
			ilk2=(struct Node*)malloc(sizeof(struct Node*));
			ilk2->data=kar;
			son2=ilk2;
			son2->next=NULL;
		}
		else{
			son2->next=(struct Node*)malloc(sizeof(struct Node*));
			son2=son2->next;
			son2->data=kar;
			son2->next=NULL;
		}
}
void listeyiYazdir2(){
	temp=ilk2;
	while(temp!=NULL){
		printf("%c ",temp->data);	
		temp=temp->next;
	}
}
void listeyiYazdir(){
	temp=ilk;
	while(temp!=NULL){
		printf("%c ",temp->data);	
		temp=temp->next;
	}
}


void terstenYazdirCevir(struct Node* temp){
	if(temp==NULL){
		return;
	}
	terstenYazdirCevir(temp->next);
	printf(" %c",temp->data);
	ekle2(temp->data);
}
