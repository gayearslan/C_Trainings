#include <stdio.h>
#include <stdlib.h>
//Girilen say�ya kadar olan pozitif tamsay�lar�n toplam�n� bulan �z yinelemeli fonksiyonu yaz

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

