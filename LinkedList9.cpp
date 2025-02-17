#include <stdio.h>
#include <stdlib.h>
//Kullanýcý tarafýndan girilen bir tam sayý deðerini oluþturduðunuz baðlý listede arayýnýz. Mevcut ise siliniz.
int search(struct Node* ilk, int aranansayi);
struct Node{
	int data;
	struct Node *next;
};

struct Node *ilk=NULL,*son=NULL,*gecici=NULL;

int main(){
	int sayi,aranansayi;
	scanf("%d",&sayi);
	while(sayi>=0){
		scanf("%d",&sayi);
		if(ilk==NULL){
			ilk=(struct Node*)malloc(sizeof(struct Node));
			ilk->data=sayi;
			ilk->next=NULL;
			son=ilk;
		}
		else{
			son->next=(struct Node*)malloc(sizeof(struct Node));
			son=son->next;
			son->data=sayi;
			son->next=NULL;
		}
	}
	scanf("%d",&aranansayi);
	search(ilk,aranansayi);
}

// Baðlý listede aranan sayýyý bulma fonksiyonu
int search(struct Node* ilk, int aranansayi) {
    struct Node* gecici = ilk; // Listenin baþýndan baþla
    while (gecici != NULL) {
        if (gecici->data == aranansayi)
            return 1; // Sayý bulundu
        gecici = gecici->next;
    }
    return 0; // Sayý bulunamadý
}




