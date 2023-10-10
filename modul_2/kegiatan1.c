#include <stdio.h>

int main(){
    float mat;
    float fis;
    float bio;
    float hasil;

    printf("Masukkan nilai Matematika: ");
    scanf("%f", &mat);
    printf("Masukkan nilai Fisika: ");
    scanf("%f", &fis);
    printf("Masukkan nilai Biologi: ");
    scanf("%f", &bio);
    hasil = (mat + fis + bio) / 3;
    printf("Nilai Rata-rata: %.2f\n", hasil);
}