#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ile 100 aras�nda rasgele de�erlerden olu�turaca��n�z 20 elemanl� bir dizi i�erisindeki
 //elemanlar� pointer i�lemlerini kullanarak selection sort (en k���k bul) algoritmas� ile b�y�kten k����e do�ru s�ralay�n�z.

void yerdegistirme(int *a, int *b);
void listeyiYazdir(int *dizi);

int main(){
	srand(time(NULL));
	int dizi[20];
	for(int i=0;i<20;i++){
		*(dizi+i)=rand()%100;
	}
	listeyiYazdir(dizi);
	printf("\n");
	int enbuyuk,temp,sayac=0;
	enbuyuk=*dizi;
	for(int i=0;i<20;i++){
		if(enbuyuk<*(dizi+i)){
			*(dizi+i)=enbuyuk;
			sayac++;
			yerdegistirme(dizi,dizi+i);
		}
	}
	listeyiYazdir(dizi);
}
 void yerdegistirme(int *a, int *b){
 	int temp;
 	temp=*a;
 	*a=*b;
 	*b=temp;
 }
 
 void listeyiYazdir(int *dizi){
 	for(int i=0;i<20;i++){
 		printf("%d ",*(dizi+i));
	 }
 }
 
