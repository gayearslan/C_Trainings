#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int sayi,i=0;
FILE *fp0,*fp1;
int main(){
	fp0=fopen("sayilar0.txt","w");
	fp1=fopen("sayilar1.txt","w");
	 if (fp0 == NULL) {
		printf ("Dosya açma hatasý!");
		getch();
		return 0;
	 }
	  if (fp1 == NULL) {
		printf ("Dosya açma hatasý!");
		getch();
		return 0;
	 }
	srand(time(NULL));
	while(i<100){
		sayi=rand()%100;
		if(sayi& 1<<5){
			//3.bitini 0 yap
			sayi=sayi&~(1<<3);
			fprintf(fp1,"%d\n",sayi);
		}else{
			//4.bitini 1 yap
			sayi=sayi|1<<4;
			fprintf(fp0,"%d\n",sayi);
		}
		i++;
		}
		printf("isleminiz basariyla gerceklemisitir");
		fclose(fp0);
		fclose(fp1);
}

