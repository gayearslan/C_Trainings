#include<stdio.h>
#include<stdlib.h>

void rightrotshift(char *str, int x, int size);
int cstrlen(char *cumle);

int main() {
    char metin[50];
    int sayi;
    
    printf("Bir metin giriniz: ");
    gets(metin);
    
    printf("Kac defa kaydirmak istediginizi giriniz: ");
    scanf("%d", &sayi);
    
    rightrotshift(metin, sayi, sizeof(metin));
    
    printf("Girdiginiz metnin son hali:\n%s", metin);
    
    return 0;
}

void rightrotshift(char *str, int x, int size) {
    int len = cstrlen(str);
    x %= len;
    if (x == 0) return;
    
    char temp[x];
    for (int i = 0; i < x; i++) {
        *(temp + i) = *(str + len - x + i);
    }
    for (int i = len - 1; i >= x; i--) {
        *(str + i) = *(str + i - x);
    }
    for (int i = 0; i < x; i++) {
        *(str + i) = *(temp + i);
    }
}

int cstrlen(char *cumle) {
    int y = 0;
    while (*cumle) {
        y++;
        cumle++;
    }
    return y;
}
