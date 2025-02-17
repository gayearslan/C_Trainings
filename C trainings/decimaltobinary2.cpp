#include <stdio.h>
#include <stdlib.h>
struct Stack{
	int data[100];
	int indis;
};

struct Stack yeniyigin;


void ekle(int sayi){
	yeniyigin.data=sayi;
	yeniyigin.indis=-1;
	yeniyigin.indis++;
}

int cikar(){
	int cikandata;
	cikandata=yeniyigin.data[yeniyigin.indis]
	yeniyigin.indis--;
	return cikandata;
}

void cevir(int sayi){
	int digit;
	while(sayi>0)
		{
		digit=sayi%2;
		ekle(digit);
		sayi=sayi/2;
		}
	while (yigin.indis>=0)
		{
		digit=cikar();
		printf("%d",digit);
		}
}

int main(){
}

