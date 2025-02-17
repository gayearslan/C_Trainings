#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	FILE *fp1;
	int sayi;
	if ((fp1=fopen("sayilar.txt", "w+")) == NULL) {
      printf("Dosya açýlamadý!\n");
      getch();
      return 0;
	}

	for(int i=0;i<100;i++){
		sayi=rand()%1000;
		fprintf(fp1,"%d\n",sayi);
		
	}
	fclose(fp1);
}
