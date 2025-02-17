#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonksiyon tan�m�
char* convert(const char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) { // �zel durumlar
        return strdup(s);
    }

    int len = strlen(s);
    char* result = (char*)malloc(len + 1); // ��k�� stringi i�in bellek ay�rma
    int index = 0; // ��k�� stringi i�in indeks

    int cycleLen = 2 * numRows - 2; // Zigzag bir d�ng�n�n uzunlu�u

    for (int row = 0; row < numRows; row++) { // Her bir sat�r� i�ler
        for (int j = row; j < len; j += cycleLen) {
            result[index++] = s[j]; // Ana s�tundaki karakterleri ekler
            if (row != 0 && row != numRows - 1 && j + cycleLen - 2 * row < len) {
                // Orta karakterler i�in
                result[index++] = s[j + cycleLen - 2 * row];
            }
        }
    }
    result[index] = '\0'; // String sonland�rma
    return result;
}

int main() {
    // �rnek giri�ler
    const char* s = "PAYPALISHIRING";
    int numRows = 3;

    char* result = convert(s, numRows);
    printf("Output: %s\n", result);

    free(result); // Belle�i serbest b�rakma
    return 0;
}

