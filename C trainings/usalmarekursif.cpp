#include <stdio.h>
#include <stdlib.h>
char kthCharacter(int k) {
    char kelime='a';
    int sayac=0;
    int boyut;
    if(k==1){
    	printf("%c",'kelim');
        return 'kelime';
    }
    boyut=boyut*2;
    if(boyut>26){
        boyut=boyut%26;
    }
    kelime='kelime'+'kelime+sayac';
    return kthCharacter(sayac+1);
}

int main(){
	printf("%c ",kthCharacter(1));
}

