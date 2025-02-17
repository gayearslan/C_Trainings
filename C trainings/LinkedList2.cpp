#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Rastgele say�da elemandan ve rastgele de�erlerden olu�an bir tek y�nl� 
      ba�l� liste olu�turun. Olu�turdu�unuz ba�l� listenin ilk eleman�n�n adresini parametre alan bir 
	  Terscevir fonksiyonu yazal�m. Tesrcevir fonksiyonu recursive bir fonksiyon olacakt�r ve kendisine 
	  parametre olarak gelen tek y�nl� ba�l� listeyi tersine �evirecektir. (Not: ters �evirme i�lemi de�erleri
	   ta��yarak de�il ba�lant�lar� de�i�tirerek yap�lacakt�r.) 
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

