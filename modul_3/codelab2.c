#include <stdio.h>

enum film
{
    Unstoppable, Insidious, Us
};

int pilihan;

int main()
{
    printf("List Film \n");
    printf("1. Unstoppable \n");
    printf("2. Insidious \n");
    printf("3. Us \n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1: 
            printf("Film Action \n");
            break;
        case 2:
            printf("FIlm Horror \n");
            break;
        case 3:
            printf("Film Thriller \n");
            break;
        default:
            printf("masukkan pilihan yang sesuai \n");
    }
}