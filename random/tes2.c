#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buah [2][20] = {"roti coklat", "roti keju"};
    int stok [2][3] = {
        {3000, 5000, 2500},
        {5000, 10000, 3000}
    };

    printf("Nama Produk\tgudang 1\tgudang 2\tgudang 3\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%s\t", buah[i]);
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t\t", stok[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
