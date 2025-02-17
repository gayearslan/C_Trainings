#include <stdio.h>
#include <stdlib.h>
//kucukten buyuge 2. Sýralý ekleme örneðini çift yönlü baðlý listelerle gerçekleþtiriniz.  



struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};
struct Node *ilk=NULL,*son=NULL,*gecici=NULL;
void sirali_ekle(int girilensayi){
	if(ilk==NULL){
		ilk=(struct Node*)malloc(sizeof(struct Node*));
		ilk->data=girilensayi;
		ilk->next=NULL;
		ilk->prev=NULL;
		son=ilk;
	}else{
		if(ilk->data>=girilensayi){
			ilk->prev=(struct Node*)malloc(sizeof(struct Node*));
			ilk->prev->next=ilk;
			ilk=ilk->prev;
			ilk->data=girilensayi;
			ilk->prev=NULL;
		}
		else if(son->data<=girilensayi){
			son->next = (struct Node*)malloc(sizeof(struct Node*));
			son->next->prev=son;
			son=son->next;
			son->data=girilensayi;
			son->next=NULL;
		}
		else{
		
			gecici=ilk;
			while(gecici!=NULL){
				if(girilensayi>=gecici->data && girilensayi<=gecici->next->data){
					gecici->next->prev=(struct Node*)malloc(sizeof(struct Node*));
					gecici->next->prev->next=gecici->next;
					gecici->next->prev->prev=gecici;
					gecici->next=gecici->next->prev;
					gecici->next->data=girilensayi;
					break;
					}
				gecici=gecici->next;
				}	
		}			
	}
}
int main(){
	int sayi;
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		sirali_ekle(sayi);	
	}	
	gecici=ilk;
	while(gecici!=NULL){
		printf("%d ",gecici->data);
		gecici=gecici->next;
	}
	
}

