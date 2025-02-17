#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
	FILE *fp;
	int sayi,sayac=0,*dizi;
	dizi=(int *)malloc(sizeof(int));
	srand(time(NULL));
	fp=fopen("sayilar.txt","w+");
	for(int i=0;i<100;i++){
		sayi=rand()%100;
		fprintf(fp,"%d\n",sayi);
	}
	rewind(fp);
	for(int i=0;i<100;i++){
		fscanf(fp,"%d\n",&sayi);
		if(sayi&(1<<5)){
			
		}else{
			dizi=(int *)realloc(dizi,(sayac+1)*sizeof(int));
			sayac++;
			*(dizi+sayac)=sayi;
			printf("%d\n",*(dizi+sayac));
		}
	}
	free(dizi);
	fclose(fp);
}
