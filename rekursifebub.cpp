#include <stdio.h>
#include <stdlib.h>


int ebobbulma(int sayi1,int sayi2){
	if(sayi2==0){
		
		return sayi1;
		
	}
	
	return ebobbulma(sayi2,sayi1%sayi2);
	}


int main(){
	printf("%d ",ebobbulma(30,200));
}

