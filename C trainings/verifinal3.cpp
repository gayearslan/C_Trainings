#include <stdio.h>
#include <stdlib.h>

int ters(char dizi){
	if(dizi==NULL){
		if(dizi==ters(dizi)){
			return 1;
		}
	}
	ters(dizi+1);
}

int main(){
}

