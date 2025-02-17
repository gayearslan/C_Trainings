#include <stdio.h>
#include <stdlib.h>

typedef struct Liste{
	int numara;
	struct Liste *sonraki;
}BListe;


void Ortakbul(BListe *ilk1, BListe *ilk2){
	BListe *gecici1 = ilk1;
    BListe *gecici2 = NULL;
	while(gecici1!=NULL){
		gecici2=ilk2;
		while(gecici2!=NULL){
			if(gecici1->numara == gecici2->numara){
				printf("%d ",gecici1->numara);
				break;
			}
			gecici2=gecici2->sonraki;	
		}
		gecici1=gecici1->sonraki;
	}
}


// Yeni d���m olu�turma fonksiyonu
BListe* yeniDugum(int numara) {
    BListe* dugum = (BListe*)malloc(sizeof(BListe));
    if (dugum == NULL) {
        printf("Bellek ayr�l�rken hata olu�tu!\n");
        exit(1);
    }
    dugum->numara = numara;
    dugum->sonraki = NULL;
    return dugum;
}

// Ba�l� listeye sona eleman ekleme fonksiyonu
void sonaEkle(BListe** bas, int numara) {
    BListe* dugum = yeniDugum(numara);
    if (*bas == NULL) {
        *bas = dugum;
        return;
    }
    BListe* temp = *bas;
    while (temp->sonraki != NULL) {
        temp = temp->sonraki;
    }
    temp->sonraki = dugum;
}

// Ba�l� listeyi yazd�rma fonksiyonu
void listeyiYazdir(BListe* bas) {
    while (bas != NULL) {
        printf("%d -> ", bas->numara);
        bas = bas->sonraki;
    }
    printf("NULL\n");
}

// Ana fonksiyon
int main() {
    BListe* liste1 = NULL; // Birinci ba�l� liste
    BListe* liste2 = NULL; // �kinci ba�l� liste

    // Birinci ba�l� listeye eleman ekleme
    sonaEkle(&liste1, 10);
    sonaEkle(&liste1, 20);
    sonaEkle(&liste1, 30);

    // �kinci ba�l� listeye eleman ekleme
    sonaEkle(&liste2, 5);
    sonaEkle(&liste2, 20);
    sonaEkle(&liste2, 25);

    // Ba�l� listeleri yazd�rma
    printf("Birinci liste: ");
    listeyiYazdir(liste1);

    printf("Ikinci liste: ");
    listeyiYazdir(liste2);
    
	Ortakbul(liste1,liste2);
    return 0;
}


