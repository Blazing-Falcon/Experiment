#include <stdio.h>

int main(){
    int nilaiKalkulus;
    int nilaiPancasila;
    int nilaiOrkom;

    printf("Masukkan Nilai Kalkulus: ");
    scanf("%d", &nilaiKalkulus);
    printf("Masukkan Nilai Pancasila: ");
    scanf("%d", &nilaiPancasila);
    printf("Masukkan Nilai Orkom: ");
    scanf("%d", &nilaiOrkom);

    printf("\n\n");

    printf("Nilai Kalkulus Kamu: %d\n", nilaiKalkulus);
    printf("Nilai Pancasila Kamu: %d\n", nilaiPancasila);
    printf("Nilai Orkom Kamu: %d\n", nilaiOrkom);

    return 0;
}