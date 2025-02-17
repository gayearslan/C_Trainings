#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);
int main(){
	int dizi[5]={3,2,5,4,1};
	int *enkucuk;
	for(int j=0;j<5;j++){
		enkucuk=&dizi[j];
		for(int i=j;i<5;i++){
			if(*enkucuk>dizi[i]){
				enkucuk=&dizi[i];
			}
		}
		swap(&dizi[j],enkucuk);
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
