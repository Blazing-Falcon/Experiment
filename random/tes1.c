#include <stdio.h>

int main(int argc, char const *argv[])
{
    int angka;
    printf("Masukkan Angka: ");
    scanf("%d", &angka);
    printf("Bilangan Genap: ");

    do
    {
        if (angka % 2 == 0)
        {
            printf("%d ", angka);
        }
        angka = angka - 1;
    } while (angka > 0);
    
    return 0;
}
