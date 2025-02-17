#include <stdio.h>
#include <stdlib.h>
void cevir(int sayi){
	if(sayi==0){
		return;
	}
	cevir(sayi/2);
	printf("%d",sayi%2);//binary basamaðuný yazdýrýr
}
int main(){
	cevir(386);
}

