#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
struct Node{
    	int data;
    	struct Node *next;
	};
	
struct Node *ilk=NULL, *son=NULL;//global tanýmýlýoz ya!

void ekle(int sayi){//eklemek
	
	if(ilk==NULL){
		ilk=(struct Node *)malloc(sizeof(struct Node));
		ilk->data=sayi;
		ilk->next=NULL;
		son=ilk;
	}
	else {
		son->next=(struct Node*)malloc(sizeof(struct Node));
		son=son->next;
		son->data=sayi;
		son->next=NULL;
	}
}
void yazdir(){//listelemek
	struct Node *temp;
	temp=ilk;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void arama(int sayi){
	struct Node *temp;
	temp=ilk;
	while(temp!=NULL){
		if(temp->data==sayi){
			printf("sayi bulundu");
			break;
		}else{
			temp=temp->next;
		}
	}
}

void silme(int sayi){
	struct Node *temp,*temp2;
	temp=ilk;
	temp2=temp->next;
	while(temp!=NULL){
		if(temp==ilk && temp->data== sayi){
				ilk=ilk->next;
				free(temp);
				return;
			}
		if(temp2->data==sayi){
			if(temp2->next==NULL){
				temp->next==NULL;
				son=temp;
				free(temp2);
				return;
			}
			else{
				temp->next=temp2->next;
				free(temp2);
				return;
			}
			
		}else{
			temp=temp->next;
			temp2=temp2->next;
			
		}
	}
	
}

void freelemek(struct Node *temp){
	temp=ilk->next;
	
	while(ilk!=NULL){
		free(ilk);
		ilk = temp;
		temp=temp->next;
		if(temp==NULL)
		{
			return;
		}
		
	}
}

int main() {
	int secim=0;
	int sayi;
    while(secim!=-1){
    	printf("\nislem secin 1-ekle 2-listele 3-ara 4-sil\n");
    	scanf("%d",&secim);
	    switch (secim){
	    	case 1:
	    		scanf("%d",&sayi);
	    		ekle(sayi);
	    		break;
	    	case 2:
	    		yazdir();
	    		break;
	    	case 3:
	    		scanf("%d",&sayi);
	    		arama(sayi);
	    		break;
	    	case 4:
	    		scanf("%d",&sayi);
	    		silme(sayi);
	    		break;	
	    	default:
	    		printf("lutfen gecerli bir islem secin.");
		}
	}
	freelemek(ilk);
	
}

