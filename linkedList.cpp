#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node *ilk=NULL, *son=NULL ,*temp=NULL;

void ters(struct Node *sayi);

struct Node *tersCevir(struct Node *sayi);

void ters(struct Node *sayi){
	tersCevir(sayi);
	ilk->next = NULL;
	temp=son;
	son=ilk;
	ilk=temp;
}
struct Node *tersCevir(struct Node *sayi){
	if(sayi->next!=NULL){
		temp = tersCevir(sayi->next);
		temp->next = sayi;
		return sayi;
	}
	return sayi;
}

int main(){
	int sayi;
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		if(ilk==NULL){
			ilk=(struct Node*)malloc(sizeof(struct Node));
			ilk->data=sayi;
			ilk->next=NULL;
			son=ilk;
		}else{
			son->next=(struct Node*)malloc(sizeof(struct Node));
			son=son->next;
			son->data=sayi;
			son->next=NULL;
		}
	}
	struct Node *gecici=ilk;	
	for(;gecici!=NULL;){
		
		printf("%d ",gecici->data);
		gecici=gecici->next;
	}
	
	ters(ilk);
	printf("\n");
	gecici=ilk;
	for(;gecici!=NULL;){
		
		printf("%d ",gecici->data);
		gecici=gecici->next;
	}
	
	
	
	
	
}

