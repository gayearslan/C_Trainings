#include <stdio.h>

int binarySearchRecursive(int dizi[], int altSinir, int ustSinir, int aranan) {
    if (altSinir > ustSinir) {
        return -1; // Aranan eleman bulunamadý
    }

    int orta = (altSinir + ustSinir) / 2;

    if (dizi[orta] == aranan) {
        return orta; // Aranan elemanýn indisini döndür
    } else if (dizi[orta] < aranan) {
        return binarySearchRecursive(dizi, orta + 1, ustSinir, aranan);
    } else {
        return binarySearchRecursive(dizi, altSinir, orta - 1, aranan);
    }
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int aranan = 7;

    int sonuc = binarySearchRecursive(dizi, 0, boyut - 1, aranan);

    if (sonuc != -1) {
        printf("Sayi bulundu. Indis: %d\n", sonuc);
    } else {
        printf("Sayi bulunamadi.\n");
    }

    return 0;
}

