#include <stdio.h>
#include <stdlib.h>

#define boyut 20

struct yigin{
    int indis;
    int eleman[boyut];
};

struct yigin yigin1;

void yiginaekle(int digit){
    yigin1.indis++;
    yigin1.eleman[yigin1.indis]=digit;
}

void cevir(int sayi){
        int digit;
        while(sayi>=2){
            digit=sayi%2;
            yiginaekle(digit);
            sayi=sayi/2;
                if(sayi<2){
                    yiginaekle(sayi);
                    break;
                }
        } 
}

void listele(){
    int temp;
    temp=yigin1.indis;
    while(temp>=0){
        printf("%d",yigin1.eleman[temp]);
        temp--;
    }
}

int main(){
    yigin1.indis = -1;
    cevir(1);
    listele();
}