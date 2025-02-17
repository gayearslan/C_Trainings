#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matris[5][5];

struct Node {
    int x, y; // Y�lan�n bulundu�u koordinat
    struct Node* next;
};

struct Node* yilanBas = NULL; // Y�lan�n ba��n� temsil eder
struct Node* yilanKuyruk = NULL; // Y�lan�n kuyru�unu takip eder

void haritaOlustur() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matris[i][j] = 0;
        }
    }
}

void yemekOlustur() {
    int x, y;
    do {
        x = rand() % 5;
        y = rand() % 5;
    } while (matris[x][y] != 0); // Y�lan�n olmad��� bir h�cre bul
    matris[x][y] = 2; // Yemek
}

void yilanOlustur() {
    struct Node* bas = (struct Node*)malloc(sizeof(struct Node));
    bas->x = 0;
    bas->y = 0;
    bas->next = NULL;
    yilanBas = bas;
    yilanKuyruk = bas; // Kuyruk ba�lang��ta ba� ile ayn�
    matris[0][0] = 1;  // Y�lan�n ba�lang�� pozisyonu
}

void hareketEttir(int dx, int dy) {
    int yeniX = yilanBas->x + dx;
    int yeniY = yilanBas->y + dy;

    // S�n�r kontrol�
    if (yeniX < 0 || yeniX >= 5 || yeniY < 0 || yeniY >= 5) {
        printf("Game Over! Duvara carptiniz.\n");
        exit(0);
    }

    // Kendine �arpma kontrol�
    if (matris[yeniX][yeniY] == 1) {
        printf("Game Over! Kendine carptiniz.\n");
        exit(0);
    }

    // Yemek kontrol�
    int yemekYendi = 0;
    if (matris[yeniX][yeniY] == 2) {
        yemekYendi = 1;
        yemekOlustur();
    }

    // Y�lan�n yeni ba��n� olu�tur
    struct Node* yeniBas = (struct Node*)malloc(sizeof(struct Node));
    yeniBas->x = yeniX;
    yeniBas->y = yeniY;
    yeniBas->next = yilanBas;
    yilanBas = yeniBas;
    matris[yeniX][yeniY] = 1; // Yeni ba� konumunu ayarla

    // E�er yemek yenmemi�se kuyru�u hareket ettir
    if (!yemekYendi) {
        matris[yilanKuyruk->x][yilanKuyruk->y] = 0; // Kuyru�un eski konumunu temizle
        struct Node* temp = yilanBas;
        while (temp->next != yilanKuyruk) {
            temp = temp->next;
        }
        free(yilanKuyruk); // Kuyru�un eski d���m�n� serbest b�rak
        yilanKuyruk = temp; // Yeni kuyruk
        yilanKuyruk->next = NULL;
    }
}

void matrisYazdir() {
    printf("\nMatrisin G�ncel Durumu:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    haritaOlustur();
    yilanOlustur();
    yemekOlustur();

    char hareket;
    while (1) {
        matrisYazdir();
        printf("Hareket (w/a/s/d): ");
        scanf(" %c", &hareket);
        switch (hareket) {
            case 'w': hareketEttir(-1, 0); break; // Yukar�
            case 'a': hareketEttir(0, -1); break; // Sola
            case 's': hareketEttir(1, 0); break;  // A�a��
            case 'd': hareketEttir(0, 1); break;  // Sa�a
            default: printf("Ge�ersiz giri�!\n");
        }
    }
    return 0;
}

