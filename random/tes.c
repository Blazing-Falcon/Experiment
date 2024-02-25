#include <stdio.h>

void konvert_biner(int desimal)
{
    int biner = 0, i = 1, sisa;
    while (desimal != 0)
    {
        sisa = desimal % 2;
        desimal /= 2;
        biner += sisa * i;
        i *= 10;
    }
    printf("%d\n", biner);
}

int main()
{
    int angka_awal = 4;
    int angka_shift = angka_awal << 1;

    printf("%d\n", angka_awal);
    konvert_biner(angka_awal);
    printf("%d\n", angka_shift);
    konvert_biner(angka_shift);

    return 0;
}

