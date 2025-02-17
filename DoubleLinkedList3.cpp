#include <stdio.h>
#include <stdlib.h>
//Klavyeden kullanýcý istediði sürece girilen tam sayýlarý bir çift yönlü baðlý listeye aktarýnýz.
void listeyeaktar(int sayi);
void listeyiYazdir();
struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node *ilk=NULL,*son=NULL;

int main(){
	int sayi=0;
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		listeyeaktar(sayi);
	}
	listeyiYazdir();
}
void listeyeaktar(int sayi){
	if(ilk==NULL){
		ilk=(struct Node*)malloc(sizeof(struct Node));
		ilk->data=sayi;
		ilk->next=NULL;
		ilk->prev=NULL;
		son=ilk;
	}
	else{
		son->next=(struct Node*)malloc(sizeof(struct Node));
		son->next->prev=son;
		son=son->next;
		son->data=sayi;
		son->next=NULL;
	}
}

void listeyiYazdir(){
	struct Node *temp=ilk;
	while(temp!=NULL){
		printf("%d ",temp->data);
		if(temp==NULL){
			break;
		}
		temp=temp->next;
	}
}
