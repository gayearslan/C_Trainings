#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Stack{
	int data[100];
	int indis;
};

struct Stack yeniyigin;

int yigintamdolu_mu(){
	if(yeniyigin.indis>=99){
		return 1;
	}
	else{
		return -1;
	}
}

int yiginbos_mu(){
	if(yeniyigin.indis==-1){
		return 1;
	}else{
		return -1;
	}
}

void yiginaekle(int sayi){
	if(yigintamdolu_mu()==1){
		printf("yigin dolu\n");
	}else{
		yeniyigin.indis++;
		yeniyigin.data[yeniyigin.indis]=sayi;
	}
	
}

int yigindancikar(){
	int cikandata;
	if(yiginbos_mu()==1){
		printf("yigin bos\n");
	}
	else{
		cikandata=yeniyigin.data[yeniyigin.indis];
		yeniyigin.indis--;
		return cikandata;
	}
}

void listele(){
 	int i;
	for(i=yeniyigin.indis;i>=0;i--){
		printf("%d\n",yeniyigin.data[i]);
	}
}

int main(){
	yeniyigin.indis=-1;
	char secim;
	int numara;

	while(1){
		
		printf("1-ekleme 2-cikar 3-listeleme\n");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				scanf("%d",&numara);
				yiginaekle(numara);
				break;
			case 2:
				yigindancikar();
				break;
			case 3:
				listele();
				break;
			default:
				printf("lutfen gecerli bir islem giriniz");
		}
	}	
}

