#include <stdio.h>
#include <stdlib.h>

int main(){
	int cocuksayisi,toplamseker,enbuyuk,a;
	int dizi[100000];
	
	printf("cocuksayisi: ");
	scanf("%d",&cocuksayisi);
	for(int i=0;i<cocuksayisi;i++){
		printf("kisi basi seker:");
		scanf("%d",&dizi[i]);
	}
	printf("toplam seker: ");
	scanf("%d",&toplamseker);
	
	enbuyuk=dizi[0];
	for (int i = 0; i <cocuksayisi-1; i++) {
	    if (dizi[i] > enbuyuk) {
	        enbuyuk = dizi[i];
	    }
	}
		
	printf("%d\n",enbuyuk);
	
	for(int i=0;i<cocuksayisi-1;i++){
		a=enbuyuk-dizi[i];
		toplamseker=toplamseker-a;
		if(i==cocuksayisi-1&&toplamseker==0){
			printf("1");
		}
	}
	if(toplamseker%cocuksayisi==0){
		printf("1");
	}else{
		printf("0");
	}
}

