#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayý giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi < 1 || sayi > 3999) {
        printf("Lütfen 1-3999 arasýnda bir sayý giriniz.\n");
        return 1;
    }

    while (sayi >= 1000) {
        printf("M");
        sayi -= 1000;
    }
    if (sayi >= 900) {
        printf("CM");
        sayi -= 900;
    }
    if (sayi >= 500) {
        printf("D");
        sayi -= 500;
    }
    if (sayi >= 400) {
        printf("CD");
        sayi -= 400;
    }
    while (sayi >= 100) {
        printf("C");
        sayi -= 100;
    }
    if (sayi >= 90) {
        printf("XC");
        sayi -= 90;
    }
    if (sayi >= 50) {
        printf("L");
        sayi -= 50;
    }
    if (sayi >= 40) {
        printf("XL");
        sayi -= 40;
    }
    while (sayi >= 10) {
        printf("X");
        sayi -= 10;
    }
    if (sayi >= 9) {
        printf("IX");
        sayi -= 9;
    }
    if (sayi >= 5) {
        printf("V");
        sayi -= 5;
    }
    if (sayi >= 4) {
        printf("IV");
        sayi -= 4;
    }
    while (sayi >= 1) {
        printf("I");
        sayi -= 1;
    }
    
    printf("\n");
    return 0;
}

