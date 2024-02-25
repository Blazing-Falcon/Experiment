#include <stdio.h>

int main(int argc, char const *argv[])
{
    //minta user jumlah elemen
    int elemen;
    printf("Masukkan jumlah elemen yang akan diinput: ");
    scanf("%d", &elemen);
    printf("Input %d elemen:\n", elemen);

    //create the damn array, dan penghitungnya
    int arrayGanjil[elemen], pointerGanjil = 0;
    int arrayGenap[elemen], pointerGenap = 0;

    //loop memasukkan nilai user ke array yang sesuai
    for (int i = 0; i < elemen; i++)
    {
        int input;
        scanf("%d", &input);
        if (input % 2 == 0) {
            arrayGenap[pointerGenap] = input;
            pointerGenap++;
        } else {
            arrayGanjil[pointerGanjil] = input;
            pointerGanjil++;
        }
    }
    
    //print array ganjil
    printf("Bilangan Ganjil dalam array: ");
    for (int i = 0; i < pointerGanjil ; i++)
    {
        printf("%d ", arrayGanjil[i]);
    }
    
    //print array genap
    printf("Bilangan Genap dalam array: ");
    for (int i = 0; i < pointerGenap ; i++)
    {
        printf("%d ", arrayGenap[i]);
    }

    printf("\n");
    return 0;
}
