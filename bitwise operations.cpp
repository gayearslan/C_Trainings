#include <stdio.h>
#include <stdlib.h>
void ikiliyaz(int);
int leftRotatedShift(int x,int sayac);
int main(){
	
	int sayi,sayac;
	scanf("%d",&sayi);
	scanf("%d",&sayac);
	ikiliyaz(sayi);
	ikiliyaz(leftRotatedShift(sayi,sayac));
}

void ikiliyaz(int x)
{
 int i = sizeof(int) * 8 - 1;

 for (; i >= 0; i--)
 {
	 if (x & 1 << i)
	 	putchar('1');
	 else
	 	putchar('0');
	 if (i%4==0) putchar(' ');
}
 printf("\n");
}

int leftRotatedShift(int x,int sayac){
	for(int i=0;i<sayac;i++){
		if(x&1<<31){
			x=x<<1;
			x=x|1;
		}
		else{
			x=x<<1;
		}
	}
	return x;
}


 

