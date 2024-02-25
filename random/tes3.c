#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buah [10][20] = {"apel","mangga","pisang","pepaya","jeruk"};
    char cari[10];
    printf("buah dalam array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", buah[i]);
    }
    printf("\nmasukkan buah yang dicari: ");
    scanf("%s", cari);
    for (int i = 0; i < 5; i++)
    {
        if ((strcmp(buah[i], cari)) == 0)
        {
            printf("%s ditemukan", buah[i]);
            break;
        }
        printf("manuk");
    }
    
    return 0;
}
