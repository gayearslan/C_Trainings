#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi;
	int *dizi,sayac=0;
	dizi=(int *)malloc(sizeof(int));
	
	do{
		scanf("%d",&sayi);
		if(sayi<0){
			printf("lutfen pozitif gir\n");
			break;
		}	
		if(sayi%5==0&&sayi%3==0){
			dizi = (int *)realloc(dizi,(sayac+1)*sizeof(int));
			*(dizi+sayac) = sayi;
			sayac++;
			
		}
	
	}while(sayi>=0);
	
	for (int i = 0;i<sayac; i++) {
        printf("%d\n", dizi[i]);
    }
	free(dizi);	
}

