#include <stdio.h>
#include <stdlib.h>


int carp(int sayac, int sabit){
	if(sayac==1){
		return sabit;
	}
	return sabit+carp(sayac-1,sabit);
	
}



int main(){
	printf("%d ",carp(5,6));
}
//carpma islemini toplama olarak recursive function
//multiply by recursive adding function
