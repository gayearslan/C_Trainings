#include <stdio.h>
#include <stdlib.h>

void yazdir(char** output){
	printf("%s\n",*output);
}

int main(){
	char* str = "gaye";
	yazdir(&str); //str adresini g�steren adresi yolluyoz
	return 0;
}

