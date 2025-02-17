#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Rastgele sayýda elemandan ve rastgele deðerlerden oluþan bir tek yönlü 
      baðlý liste oluþturun. Oluþturduðunuz baðlý listenin ilk elemanýnýn adresini parametre alan bir 
	  Terscevir fonksiyonu yazalým. Tesrcevir fonksiyonu recursive bir fonksiyon olacaktýr ve kendisine 
	  parametre olarak gelen tek yönlü baðlý listeyi tersine çevirecektir. (Not: ters çevirme iþlemi deðerleri
	   taþýyarak deðil baðlantýlarý deðiþtirerek yapýlacaktýr.) 
*/

struct Node{
	int data;
	struct Node *next;
};

struct Node *ilk=NULL,*son=NULL,*temp=NULL;

void ekle(int sayi, int elemansayisi){
	int sayac=0;
	sayi=rand()%100;
	elemansayisi=rand()%100;
	while(sayac<elemansayisi){
		if(ilk==NULL){
			ilk=(struct Node*)malloc(sizeof(struct Node*));
			ilk->data=sayi;
			ilk->next=NULL;
			son=ilk;
			sayac++;
		}else{
			son->next=(struct Node*)malloc(sizeof(struct Node*));
			son->data=sayi;
			son=son->next;
			son->next=NULL;
			sayac++;
		}	
	}	
}

void terscevir(){
	temp=ilk;
	temp=temp->next;
	return temp;
}


int main(){
	ekle(int sayi, int elemansayisi);
	terscevir();
}

