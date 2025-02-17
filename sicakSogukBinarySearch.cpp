#include <stdio.h>
#include <stdlib.h>

void guess(int alt, int ust, int aranan){
	float tahmin= (alt+ust)/2;
	if(tahmin<aranan){
		guess(tahmin, ust, aranan);
	}else if(tahmin>aranan){
		guess(alt,tahmin,aranan);
	}else{
		printf("tahminim: %f tuttugun sayi: %d",tahmin,aranan);
	}
}

int main(){
	int aranan;
	scanf("%d",&aranan);
	guess(1,10,aranan);
}

