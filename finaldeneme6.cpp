#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ile 100 arasýnda rasgele deðerlerden oluþturacaðýnýz 100 adet tam sayýsý sayi.txt dosyasýna kaydediniz. sayi.txt
// dosyasýndaki tamsayýlardan 5. biti 0 olanlarý oluþturacaðýnýz dinamik bir dizi içerisine pointer iþlemeleri kullanarak aktarýnýz
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
