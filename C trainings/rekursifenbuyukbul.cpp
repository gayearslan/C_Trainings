#include <stdio.h>
#include <stdlib.h>

//dizide en büyük elemaný rekürsif ile bulma 

int enBuyuk=-1;

int enBuyukBul(int enBuyuk, int dizi[]){
	if(enBuyuk<dizi[0]){
		enBuyuk=dizi[0];
		return enBuyukBul(enBuyuk,dizi+1);
	}
	return enBuyukBul(enBuyuk,dizi+1);
}


int main(){
	int dizi[]={1,4,2,7,5,9,2,3,6,0};
	printf("%d",enBuyukBul(enBuyuk,dizi));
	
}

