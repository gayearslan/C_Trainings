#include <stdio.h>
#include <stdlib.h>
int lenght(char *metin);
void lower(char *metin);

int main(){
	char metin[100];
	gets(metin);
	
	lower(metin);
	printf("%s",metin);
}
int lenght(char *metin){
	int sayac=0;
	for(int i=0;metin[i]!='\0';i++){//dizi uzunlugu
		sayac++;
	}
	return sayac;
}

void lower(char *metin){
		for(int i=0;i<lenght(metin);i++){
		if(metin[i]>=65 && metin[i]<=90){
			metin[i]=metin[i]+32;
		}
	}
}
