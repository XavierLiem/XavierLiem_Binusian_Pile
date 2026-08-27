#include <stdio.h>

int main() {
    int panjang,lebar;
    printf("Masukkan panjang sisi segitiga (panjang, lebar): ");
    scanf("%d %d", &panjang, &lebar);

    int luas = (panjang * lebar) / 2;
    printf("Luas segitiga: %d\n", luas);

    return 0;
}