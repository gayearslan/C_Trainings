#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int kontrol=1;
	FILE *fp,*fp2;
	int sayi;
	if((fp=fopen("sayilar.txt", "r")) == NULL) {
      printf("Dosya açýlamadý!\n");
      getch();
      return 0;
    }
    if((fp2=fopen("sayilar2.txt", "w")) == NULL){
      printf("Dosya açýlamadý!\n");
      getch();
      return 0;
    }

	fp2=fopen("sayilar2.txt","w");
	for(int i=0;i<100;i++){
		fscanf(fp,"%d\n",&sayi);
		for(int i=2;i<sayi;i++){
			if(sayi%i==0){
				kontrol=1;
				break;
			}else{
				kontrol=0;
			}
			
		}
		if(kontrol==0||sayi==2){
				fprintf(fp2,"%d\n",sayi);
			}
	}
	fclose(fp);
	fclose(fp2);
}
