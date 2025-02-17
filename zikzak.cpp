#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonksiyon tanýmý
char* convert(const char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) { // Özel durumlar
        return strdup(s);
    }

    int len = strlen(s);
    char* result = (char*)malloc(len + 1); // Çýkýþ stringi için bellek ayýrma
    int index = 0; // Çýkýþ stringi için indeks

    int cycleLen = 2 * numRows - 2; // Zigzag bir döngünün uzunluðu

    for (int row = 0; row < numRows; row++) { // Her bir satýrý iþler
        for (int j = row; j < len; j += cycleLen) {
            result[index++] = s[j]; // Ana sütundaki karakterleri ekler
            if (row != 0 && row != numRows - 1 && j + cycleLen - 2 * row < len) {
                // Orta karakterler için
                result[index++] = s[j + cycleLen - 2 * row];
            }
        }
    }
    result[index] = '\0'; // String sonlandýrma
    return result;
}

int main() {
    // Örnek giriþler
    const char* s = "PAYPALISHIRING";
    int numRows = 3;

    char* result = convert(s, numRows);
    printf("Output: %s\n", result);

    free(result); // Belleði serbest býrakma
    return 0;
}

