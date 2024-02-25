#include <stdio.h>

enum film
{
    Unstoppable, Insidious, Us
};

int pilihan;
int genre;

int main()
{
    printf("List Film \n");
    printf("1. Unstoppable \n");
    printf("2. Insidious \n");
    printf("3. Us \n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        genre = Unstoppable;
    } else if (pilihan == 2) {
        genre = Insidious;
    } else if (pilihan == 3) {
        genre = Us;
    } else {
        printf("Masukkan pilihan yang sesuai \n");
    }
    
    switch (genre)
    {
        case 0: 
            printf("Film Action \n");
            break;
        case 1:
            printf("FIlm Horror \n");
            break;
        case 2:
            printf("Film Thriller \n");
            break;
    }
}