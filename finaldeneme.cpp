#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//0 ile 1000 aras�nda rasgele �retti�inin 100 adet tam say�y� sayilar.txt dosyas�na yaz�n�z.
//Olu�turdu�unuz sayilar.txt dosyas�ndaki say�lar� okuyunuz. Okudu�unuz say�lardan asal say�  olanlar� sayilar2.txt dosyas�na kaydediniz.

void asal(int sayi);
FILE *fp,*fp2;


int main(){
	srand(time(NULL));
	int sayi;
	fp=fopen("sayilar.txt","w+");
	fp2=fopen("sayilar2.txt","w+");
	for(int i=0;i<100;i++){
		sayi=rand()%100+1;
		fprintf(fp,"%d\n",sayi);
	}
	fseek(fp,0,0);
	for(int i=0;i<100;i++){
		fscanf(fp,"%d\n",&sayi);
		printf("%d\n\n\n",sayi);
		asal(sayi);
	
	}
}

void asal(int sayi){
	int kontrol=0;
	for(int i=sayi-1;i>1;i--){
		if(sayi%i==0){
			kontrol=1;
			break;
		}
		else{
			kontrol=0;
		}
	}
	if(kontrol==0){
		fprintf(fp2,"%d\n",sayi);
	}
}
