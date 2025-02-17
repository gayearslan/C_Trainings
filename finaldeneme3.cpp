#include <stdio.h>
#include <stdlib.h>
//Girilen sayýya kadar olan pozitif tamsayýlarýn toplamýný bulan öz yinelemeli fonksiyonu yaz

int toplam(int sayi);

int main(){
	printf("%d",toplam(4));
}
int toplamm=0;
int toplam(int sayi){
	
	if(sayi==1){
		return 1;
	}
	return sayi+toplam(sayi-1);
}

