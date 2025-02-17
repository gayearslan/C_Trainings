#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ile 100 arasýnda rasgele deðerlerden oluþturacaðýnýz 20 elemanlý bir dizi içerisindeki
 //elemanlarý pointer iþlemlerini kullanarak selection sort (en küçük bul) algoritmasý ile büyükten küçüðe doðru sýralayýnýz.

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
 
