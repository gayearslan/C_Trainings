#include <stdio.h>
#include <stdlib.h>

void terstenYazdir (char *index) {
	if(*index=='\0'){
		return;
	}
	terstenYazdir(index+1);
	printf("%c ",*index);
}


int main(){
	char dizi[]="burak";
	terstenYazdir(dizi);
	return 0;
}

