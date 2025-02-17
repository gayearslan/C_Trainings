#include <stdio.h>
#include <stdlib.h>
//bir dizinin elemnalarýný toplamak
int toplam=0;
void topla(int *eleman){
	if(*eleman==5){
		toplam+=*eleman;
		printf("%d",toplam);
		return;
	}
	toplam+=*eleman;
	topla(eleman+1);
}

int main(){
	int dizi[5]={1,2,3,4,5};
	topla(dizi);
}

