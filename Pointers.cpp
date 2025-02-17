#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int dizi[20],*enkucuk,gecici;
	for(int i=0;i<20;i++){
		*(dizi+i)=rand()%100;	
	}
	
	for(int i=0;i<20;i++){
		printf("%d ",dizi[i]);
	}
	for(int i=0;i<19;i++){
		enkucuk=dizi+i;
		for(int j=i;j<20;j++){
			if(*(enkucuk) > *(dizi+j)){
			enkucuk=dizi+j;
			}
		}

		gecici=*(enkucuk);
		*(enkucuk)=*(dizi+i);
		*(dizi+i)=gecici;
		
	}
	printf("\n");
	for(int i=0;i<20;i++){
		printf("%d ",dizi[i]);
	}
	
	
}


