#include <stdio.h>

int obeb(int sayi1,int sayi2) {
    if (sayi2!=0)
        return obeb(sayi2,sayi1%sayi2);
    else
        return sayi1;
}
int main() {
    int sayi1,sayi2;
    printf("iki tam sayi giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);
    int sonuc=obeb(sayi1, sayi2);
    printf("girilen iki sayinin ebobu:%d\n",sonuc);
    return 0;
}

