#include <stdio.h>

int main()
{
    int nilai, batas;
    long double hasilKali = 1, hasilPangkat = 1;
    printf("###### PROGRAM LOOPING PERKALIAN DAN PERPANGKATAN DENGAN BATAS ATAS ######\n\n");

    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);

    printf("Masukkan Batas Atas: ");
    scanf("%d", &batas);

    //loop perkalian
    printf("\n=== PERKALIAN ===\n");
    for(int i = 1; i <= batas; i++){
        hasilKali = nilai * i;
        printf("%d x %d = %.0Lf \n", nilai, i, hasilKali);
    }
    printf("\n");

    //loop perpangkatan
    printf("=== PERPANGKATAN ===\n");
    for(int i = 1; i <= batas; i++){
        hasilPangkat *= nilai;
        printf("%d pangkat %d = %.0Lf \n", nilai, i, hasilPangkat);
    }

    return 0;
}