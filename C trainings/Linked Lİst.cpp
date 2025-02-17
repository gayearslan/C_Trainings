#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *ilk=NULL,*son=NULL;


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
		
		printf("%d\n",gecici->data);
		gecici=gecici->next;
	}
	gecici=ilk;
	scanf("%d",&sayi);
	while(gecici!=NULL){
		if(sayi==gecici->data){
			printf("var");
		}
		gecici=gecici->next;
	}
}

