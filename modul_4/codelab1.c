#include <stdio.h>

int main()
{
    int total = 0, i = 1, n;
    printf("Masukkan angka N: ");
    scanf("%d", &n);

    //loop penjumlahan dari suku ke 1 sampai N
    while (i <= n){
        total += i;
        i++;
    }
    
    printf("\nJumlah angka dari 1 hingga %d adalah %d", n, total);
}