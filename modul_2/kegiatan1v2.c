#include <stdio.h>
#include <string.h>

int main() 
{
    printf("=== Program Penghitungan Nilai Rata-Rata V2 ===\n\n");

    //pertama kita meminta jumlah matkul dari user
    int jumlahMatkul;
    printf("Masukkan jumlah matkul Anda: ");
    scanf("%d", &jumlahMatkul);

    //membuat array untuk menyimpan nama matkul dan nilanya
    char matkul[jumlahMatkul][50];
    float nilai[jumlahMatkul];

    //loop untuk memasukkan nama matkul kedalam array matkul
    printf("\n");
    for (int i = 0; i < jumlahMatkul; i++) 
    {
        printf("Masukkan nama matkul ke-%d: ", i + 1);
        if (scanf("%s", matkul[i]) != 1) {
            printf("Input Anda salah, tolong masukkan string\n");
            return 1;
        }
    }

    //loop untuk memasukkan nilai matkul kedalam array nilai
    printf("\n");
    for (int i = 0; i < jumlahMatkul; i++)
    { 
        printf("Masukkan nilai %s: ", matkul[i]);
        if (scanf("%f", &nilai[i]) != 1) { 
            printf("Input Anda salah, tolong masukkan angka\n");
            return 1;
        }
    }

    //loop untuk menampilkan matkul dan nilai yang telah dimasukkan
    printf("\n");
    printf("Nama matkul dan nilai yang Anda masukkan:\n");
    for (int i = 0; i < jumlahMatkul; i++) 
    {
        printf("Matkul %s dengan nilai %.2f\n", matkul[i], nilai[i]);
    }

    //loop menghitung nilai total
    float total;
    for (int i = 0; i < jumlahMatkul; i++)
    {
        total += nilai[i];
    }
    printf("\n");
    printf("Nilai total Anda: %.2f\n", total);

    //menghitung rata-rata
    float rerata = (total / jumlahMatkul);
    printf("Nilai rata-rata Anda adalah: %.2f\n", rerata);

    return 0;
}
