#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n=0,toplam=0;

struct Node{
	int data;
	struct Node* next;
};

struct Node *ilk=NULL, *son=NULL;
struct Node *ilk2=NULL, *son2=NULL;

int topla(struct Node* basamak){
	int toplam = 0, n = 0;
    struct Node* temp = basamak;
	
	//recursive
   	int topla(struct Node* basamak, int n) {
    if (basamak == NULL) {
        return 0; // Baðlantý listesi bittiðinde 0 döner.
    }
    return basamak->data * pow(10, n) + topla(basamak->next, n - 1);
}

// Listedeki eleman sayýsýný hesaplar
int uzunluk(struct Node* basamak) {
    if (basamak == NULL) {
        return 0; // Liste boþsa uzunluk sýfýrdýr.
    }
    return 1 + uzunluk(basamak->next);
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
	
	printf("\n");
	sayi=0;
	
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		if(ilk2==NULL){
			ilk2=(struct Node*)malloc(sizeof(struct Node));
			ilk2->data=sayi;
			ilk2->next=NULL;
			son2=ilk2;
		}else{
			son2->next=(struct Node*)malloc(sizeof(struct Node));
			son2=son2->next;
			son2->data=sayi;
			son2->next=NULL;
		}
	}
	gecici=ilk2;	
	for(;gecici!=NULL;){
		
		printf("%d ",gecici->data);
		gecici=gecici->next;
	}
	
	int toplam=0;
	toplam +=	topla(ilk);
	n=0;
	toplam += topla(ilk2);
	
	printf("\n %d",toplam);
}

