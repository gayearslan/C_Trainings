#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node *next;
};
 
//bu seperate chaining yöntemidir. her hash farklýdýr. 
 
struct Node* dizi[10]; //dizi dediðimiz þey hash table 

void ekleme(int sayi, struct Node* ilk);

void nullama(struct Node* dizi[]){
	for(int i=0;i<10;i++){
		dizi[i]=NULL;
	}
}
int mod;

void hashing(int sayi){
	mod=sayi%10;
	for(int i=0;i<10;i++){
		if(mod==i){
			ekleme(sayi,dizi[i]);
		}
	}
}
struct Node* temp=NULL;
void ekleme(int sayi, struct Node* ilk){ //ilk adresi gelen baðlý listenin sonuna ekliyor
	temp=ilk;
	if(temp==NULL){
		temp=(struct Node *)malloc(sizeof(struct Node));
		temp->data=sayi;
		temp->next=NULL;
	}
	else{
		while(temp!=NULL){
			temp=temp->next;
		}
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=sayi;
		temp->next=NULL;
	}
	for(int i=0;i<10;i++){
		while(dizi[i]!=NULL){
			printf("%d ",dizi[i]->data);
			dizi[i]=dizi[i]->next;
		}
		printf("\n");
	}
}


/*void yazdir(){
	for(int i=0;i<10;i++){
		while(dizi[i]!=NULL){
			printf("%d ",dizi[i]->data);
			dizi[i]=dizi[i]->next;
		}
		printf("\n");
	}
}*/


int main(){
	int sayi;
	while(sayi!=-1){
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		hashing(sayi);
	}
	//yazdir();
	return 0;
	//printf("aramak istediginiz sayiyi giriniz: ",aranan);
	//arama(aranan);
}

