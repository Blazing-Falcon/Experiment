#include <stdio.h>

int main()
{
    float sapiJantan1;
    float sapiJantan2;
    float sapiBetina1;
    float sapiBetina2;
    const float kambing1=120, kambing2=85.8, kambing3=23;

    printf("Masukkan berat sapi 1: ");
    scanf("%f", &sapiJantan1);
    
    printf("Masukkan berat sapi 2: ");
    scanf("%f", &sapiJantan2);
    
    printf("Masukkan berat sapi 3: ");
    scanf("%f", &sapiBetina1);
    
    printf("Masukkan berat sapi 4: ");
    scanf("%f", &sapiBetina2);

    printf("\nHasil Berat Sapi: %.2f\n", sapiJantan1 + sapiJantan2 + sapiBetina1 + sapiBetina2);
    printf("Hasil Berat Kambing: %.2f\n", kambing1 + kambing2 + kambing3);

    return 0;
}