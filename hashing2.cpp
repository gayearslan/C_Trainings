#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *HashTable[10];

void ekle(int sayi){
	int mod;
	mod=sayi%10;
	struct Node *temp=HashTable[mod];
	if(HashTable[mod]==NULL){
		HashTable[mod]=(struct Node*)malloc(sizeof(struct Node));
		HashTable[mod]->data=sayi;
		HashTable[mod]->next=NULL;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=(struct Node*)malloc(sizeof(struct Node));
		temp=temp->next;
		temp->data=sayi;
		temp->next=NULL;
	}
}

struct Node* aranan(int arananSayi){
	int mod;
	mod=arananSayi%10;
	struct Node *temp=HashTable[mod];
	while(temp!=NULL){
		if(temp==NULL){
			printf("aradiginiz sayi bulunamadi.");
			break;
		}
		if(temp->data==arananSayi){
			printf("%d", temp->data);
			return temp;
		}
		temp=temp->next;
	}
	
}

void yazdir(){
	struct Node *temp;
	for(int i=0;i<10;i++){
		temp=HashTable[i];
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;	
		}
		printf("\n");
	}
}

void silme(int silinecekSayi){
	int mod;
	mod=silinecekSayi%10;
	struct Node *temp=HashTable[mod];
		while(temp->next->data!=silinecekSayi){
			temp=temp->next;
		}
		//tempin nexti silinecek sayi ise
	temp->next=temp->next->next;
	printf("sayi silindi.");
}

int main(){
	int sayi,secim;

	while(1){
		printf("1-ekle 2-arama 3-silme 4-yazdir (-1)-Cikis\n");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\neklemek istediginiz sayiyi giriniz:\n");
				scanf("%d",&sayi);
				ekle(sayi);
				break;
			case 2:
				scanf("%d",&sayi);
				printf("\naradiginiz sayinin adresi: %x \n ",aranan(sayi));
				break;
			case 3:
				printf("\nsilmek istediginiz sayiyi giriniz:\n ");
				scanf("%d",&sayi);
				silme(sayi);
				break;
			case 4:
				yazdir();
				break;
			default:
				return 0;
		}
	}
	return 0;
}

