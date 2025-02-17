#include <stdio.h>

int toplam(int n) {
    if (n==1)
        return 1;
    else
        return n+toplam(n-1);
}

int main() {
    int sayi;
    printf("Bir pozitif tam sayi giriniz: ");
    scanf("%d",&sayi);
    if (sayi<=0) {
        printf("Girdiðiniz sayi pozitif deðil veya 0.Lutfen pozitif bir sayi giriniz.\n");
        return 1;
    }
    int sonuc=toplam(sayi);
    printf("1'den %d'e kadar olan tamsayilarin toplami: %d\n",sayi,sonuc);
    return 0;
}

