#include <stdio.h>

int main(){
    float sapiJantan1;
    float sapiJantan2;
    float sapiBetina1;
    float sapiBetina2;
    float kambingJantan1;
    float kambingJantan2;
    float kambingBetina1;

    printf("Masukkan berat sapi 1: ");
    scanf("%f", &sapiJantan1);
    
    printf("Masukkan berat sapi 2: ");
    scanf("%f", &sapiJantan2);
    
    printf("Masukkan berat sapi 3: ");
    scanf("%f", &sapiBetina1);
    
    printf("Masukkan berat sapi 4: ");
    scanf("%f", &sapiBetina2);
    
    printf("Masukkan berat kambing 1: ");
    scanf("%f", &kambingJantan1);
    
    printf("Masukkan berat kambing 2: ");
    scanf("%f", &kambingJantan2);
    
    printf("Masukkan berat kambing 3: ");
    scanf("%f", &kambingBetina1);
    

    printf("\nHasil Berat Sapi: %.2f\n", sapiJantan1 + sapiJantan2 + sapiBetina1 + sapiBetina2);
    printf("Hasil Berat Kambing: %2.f\n", kambingJantan1 + kambingJantan2 + kambingBetina1);
}