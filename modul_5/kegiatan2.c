#include <stdio.h>
#include <stdbool.h>

/*
hardcoded untuk matriks 3x3
TODO kalo gabut:
- buat supaya user yang menentukan ukuran matriks
- untuk saat ini program hanya mengulang jika user salah input pilihan saja
  buat untuk mengulang jika salah input matriks :D
*/

//fungsi penjumlahan matriks
void penjumlahan(int matriks1[3][3], int matriks2[3][3], int hasil[3][3])
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

//fungsi pengurangan matriks
void pengurangan(int matriks1[3][3], int matriks2[3][3], int hasil[3][3])
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}

//fungsi perkalian matriks
void perkalian(int matriks1[3][3], int matriks2[3][3], int hasil[3][3])
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            hasil[i][j] = 0;
            for (int k = 0; k < 3; k++){
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    //deklarasi variabel
    int matriks1[3][3];
    int matriks2[3][3];
    int hasil[3][3];
    int pilihan;

    while (true)
    {
        //print opsi
        printf("=== Operasi Matriks ===\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("Pilih Salah Satu (1/2/3): ");
        if (scanf("%d", &pilihan) != 1 && pilihan < 1 || pilihan > 3)
        {
            printf("INPUTAN TIDAK VALID\n");
            while (getchar() != '\n');
            continue;
        }

        //memasukkan matriks pertama
        printf("Masukkan elemen pada matriks pertama (3x3):\n");
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if (scanf("%d", &matriks1[i][j]) != 1)
                {
                    printf("INPUTAN TIDAK VALID\n");
                    return 0;
                }
            }
        }
        
        //memasukkan matriks kedua
        printf("Masukkan elemen pada matriks kedua (3x3):\n");
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if (scanf("%d", &matriks2[i][j]) != 1)
                {
                    printf("INPUTAN TIDAK VALID\n");
                    return 0;
                }
            }
        }

        //print matriks pertama
        printf("Matriks Pertama:\n");
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf("%d ", matriks1[i][j]);
            }
            printf("\n");
        }

        //print matriks kedua
        printf("Matriks Kedua:\n");
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf("%d ", matriks2[i][j]);
            }
            printf("\n");
        }

        //switch case operasi yang dipilih
        switch (pilihan)
        {
            case 1:
                penjumlahan(matriks1, matriks2, hasil);
                printf("Hasil Penjumlahan:\n");
                break;
            case 2:
                pengurangan(matriks1, matriks2, hasil);
                printf("Hasil Pengurangan:\n");
                break;
            case 3:
                perkalian(matriks1, matriks2, hasil);
                printf("Hasil Perkalian:\n");
                break;
        }

        //print matriks hasil
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf("%d ", hasil[i][j]);
            }
            printf("\n");
        }

        //break while loop-nya
        break;
    }
    return 0;
}
