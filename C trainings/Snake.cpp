#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matris[5][5];

struct Node {
    int x, y; // Yýlanýn bulunduðu koordinat
    struct Node* next;
};

struct Node* yilanBas = NULL; // Yýlanýn baþýný temsil eder
struct Node* yilanKuyruk = NULL; // Yýlanýn kuyruðunu takip eder

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
    } while (matris[x][y] != 0); // Yýlanýn olmadýðý bir hücre bul
    matris[x][y] = 2; // Yemek
}

void yilanOlustur() {
    struct Node* bas = (struct Node*)malloc(sizeof(struct Node));
    bas->x = 0;
    bas->y = 0;
    bas->next = NULL;
    yilanBas = bas;
    yilanKuyruk = bas; // Kuyruk baþlangýçta baþ ile ayný
    matris[0][0] = 1;  // Yýlanýn baþlangýç pozisyonu
}

void hareketEttir(int dx, int dy) {
    int yeniX = yilanBas->x + dx;
    int yeniY = yilanBas->y + dy;

    // Sýnýr kontrolü
    if (yeniX < 0 || yeniX >= 5 || yeniY < 0 || yeniY >= 5) {
        printf("Game Over! Duvara carptiniz.\n");
        exit(0);
    }

    // Kendine çarpma kontrolü
    if (matris[yeniX][yeniY] == 1) {
        printf("Game Over! Kendine carptiniz.\n");
        exit(0);
    }

    // Yemek kontrolü
    int yemekYendi = 0;
    if (matris[yeniX][yeniY] == 2) {
        yemekYendi = 1;
        yemekOlustur();
    }

    // Yýlanýn yeni baþýný oluþtur
    struct Node* yeniBas = (struct Node*)malloc(sizeof(struct Node));
    yeniBas->x = yeniX;
    yeniBas->y = yeniY;
    yeniBas->next = yilanBas;
    yilanBas = yeniBas;
    matris[yeniX][yeniY] = 1; // Yeni baþ konumunu ayarla

    // Eðer yemek yenmemiþse kuyruðu hareket ettir
    if (!yemekYendi) {
        matris[yilanKuyruk->x][yilanKuyruk->y] = 0; // Kuyruðun eski konumunu temizle
        struct Node* temp = yilanBas;
        while (temp->next != yilanKuyruk) {
            temp = temp->next;
        }
        free(yilanKuyruk); // Kuyruðun eski düðümünü serbest býrak
        yilanKuyruk = temp; // Yeni kuyruk
        yilanKuyruk->next = NULL;
    }
}

void matrisYazdir() {
    printf("\nMatrisin Güncel Durumu:\n");
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
            case 'w': hareketEttir(-1, 0); break; // Yukarý
            case 'a': hareketEttir(0, -1); break; // Sola
            case 's': hareketEttir(1, 0); break;  // Aþaðý
            case 'd': hareketEttir(0, 1); break;  // Saða
            default: printf("Geçersiz giriþ!\n");
        }
    }
    return 0;
}

