#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ile 100 aras�nda rasgele de�erlerden olu�turaca��n�z 100 adet tam say�s� sayi.txt dosyas�na kaydediniz. sayi.txt
// dosyas�ndaki tamsay�lardan 5. biti 0 olanlar� olu�turaca��n�z dinamik bir dizi i�erisine pointer i�lemeleri kullanarak aktar�n�z
FILE *fp;
int *dizi;
int sayac=0;
int main(){
	int sayi;
	srand(time(NULL));
	dizi=(int *)malloc(sizeof(int));
	fp=fopen("sayi.txt","w+");
	for(int i=0;i<100;i++){
		sayi=rand()%100;
		fprintf(fp,"%d\n",sayi);
	}
	
	fclose(fp);
}

void bitsel(int sayi){
	if(sayi&(1<<5)!=0){ //o sayinin o biti 1dir.
	}
	else{
		sayac++;
		dizi=(int *)realloc(dizi,sayac*sizeof(int ));
		sayi=*(dizi+sayac-1);
	}
}
