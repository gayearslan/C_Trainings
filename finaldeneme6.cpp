#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ile 100 arasında rasgele değerlerden oluşturacağınız 100 adet tam sayısı sayi.txt dosyasına kaydediniz. sayi.txt
// dosyasındaki tamsayılardan 5. biti 0 olanları oluşturacağınız dinamik bir dizi içerisine pointer işlemeleri kullanarak aktarınız
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
