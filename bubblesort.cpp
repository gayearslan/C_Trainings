#include <stdio.h>
#include <stdlib.h>
//kucukten buyuge
//BUBBLE SORT
void swap(int *x,int *y);
int main(){
	int dizi[5]={3,2,5,4,1};
	int temp;
	for(int j=0;j<5;j++){
		for(int i=0;i<4;i++){
			if(dizi[i]>=dizi[i+1]){
				swap(&dizi[i],&dizi[i+1]);
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
}

void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

