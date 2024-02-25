#include <stdio.h>

int main(int argc, char const *argv[])
{
    int jumlah = 2; //langsung gini aja karena penjumlahan 2 matriks 2x2
    int hasil[2][2];

    int matriks1[2][2] = {
        {2, 3},
        {4, 6}
    };
    int matriks2[2][2] = {
        {2, 3},
        {4, 6}
    };

    //loop penjumlahan
    for (int i = 0; i < jumlah; i++){
        for (int j = 0; j < jumlah; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    //menampilkan matriks
    for (int i = 0; i < jumlah; i++){
        for (int j = 0; j < jumlah; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
