#include <stdio.h>

float luasBalok(int P, int L, int T)
{
    return 2 * (P * L + P * T + L * T);
}

float volumeBalok(int P, int L, int T)
{
    return P * L * T;
}

int main(int argc, char const *argv[])
{
    int panjang, lebar, tinggi;

    printf("=== KALKULATOR MENGHITUNG BALOK ===\n");
    printf("Masukkan panjang balok: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar balok: ");
    scanf("%d", &lebar);
    printf("Masukkan tinggi balok: ");
    scanf("%d", &tinggi);

    printf("Luas permukaan balok: %.2f cm^2\n", luasBalok(panjang, lebar, tinggi));
    printf("Volume balok: %.2f cm^3\n", volumeBalok(panjang, lebar, tinggi));

    return 0;
}
