#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void asal(int sayi);
FILE *fp,*fp2;

int main(){
	srand(time(NULL));
	int sayi;
	fp=fopen("sayilar.txt","w+");
	fp2=fopen("sayilar2.txt","w+");
	for(int i=0;i<100;i++){
		sayi=rand()%100;
		fprintf(fp,"%d\n",sayi);

	}
	fseek(fp,0,0);
	for(int i=0;i<100;i++){
		fscanf(fp,"%d",&sayi);
		
		asal(sayi);
		
	}
	fclose(fp);
	fclose(fp2);
}
void asal(int sayi){
	
	int kontrol=0;
	for(int i=sayi-1;i>=2;i--){
		if(sayi%i==0){
			kontrol=0;
			break;
		}
		else{
			if(sayi==2){
				kontrol=1;
			}
			kontrol=1;
		}
		
	}
	if(kontrol==1){
		fprintf(fp2,"%d\n",sayi);
	}
}
