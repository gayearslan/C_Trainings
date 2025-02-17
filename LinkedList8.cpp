#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node *ilk=NULL,*son=NULL,*temp=NULL;

void ekle(int girilensayi){
	if(ilk==NULL){
		ilk=(struct Node*)malloc(sizeof(struct Node));
		ilk->data=girilensayi;
		ilk->next=NULL;
		ilk->prev=NULL;
		son=ilk;
	}
	else{
		son->next=(struct Node*)malloc(sizeof(struct Node));
		son->next->prev=son;
		son=son->next;
		son->data=girilensayi;
		son->next=NULL;
	}
}
void listeyiYazdir(){
	temp=ilk;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main(){
	int sayi;
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		ekle(sayi);
	}
	listeyiYazdir();
}

