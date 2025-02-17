#include <stdio.h>
#include <stdlib.h>



int toplama(int yuzler,int onlar,int birler,int yuzler1,int onlar1,int birler1){
	int count=0,a,b,c;
	c=birler+birler1;
	if(c>9){
		count=1;
		c=c%10;
	}

	b=onlar+onlar1+count;
	count=0;
	if(b>9){
		count=1;
		b=b%10;
	}
	
	a=yuzler+yuzler1+count;
	count =0;
	if(a>9){
		count=1;
		a=a%10;
	}
	
	printf("%d%d%d%d ",count,a,b,c);
}

int main(){
	int birler=5;
	int onlar = 6;
	int yuzler=9;
	
	int birler1=7;
	int onlar1=9;
	int yuzler1=6;
	
	toplama(9,6,5,6,9,7);
}


