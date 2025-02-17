#include <stdio.h>
#include <stdlib.h>
int orta;
void search(int aranan, int altSinir, int ustSinir){
	orta=(altSinir+ustSinir)/2;
	if(aranan<orta){
		return search(aranan,altSinir,orta);
	}
	else if(aranan>orta){
		return search(aranan,orta,ustSinir);
	}else{
		printf("Sayi bulundu. yeri: %d",orta);
	}
}

int main(){
	int dizi[]={3,5,7,8,9,10};
	search(3,3,10);
}

