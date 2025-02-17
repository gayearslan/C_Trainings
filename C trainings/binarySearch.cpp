#include <stdio.h>

int binarySearchIterative(int dizi[], int boyut, int aranan) {
    int altSinir = 0;
    int ustSinir = boyut - 1;

    while (altSinir <= ustSinir) {
        int orta = (altSinir + ustSinir) / 2;

        if (dizi[orta] == aranan) {
            return orta; // Aranan elemanýn indisini döndür
        } else if (dizi[orta] < aranan) {
            altSinir = orta + 1;
        } else {
            ustSinir = orta - 1;
        }
    }

    return -1; // Aranan eleman bulunamadý
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int aranan = 7;

    int sonuc = binarySearchIterative(dizi, boyut, aranan);

    if (sonuc != -1) {
        printf("Sayi bulundu. Indis: %d\n", sonuc);
    } else {
        printf("Sayi bulunamadi.\n");
    }

    return 0;
}

