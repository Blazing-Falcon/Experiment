#include <stdio.h>
#include <string.h>

int main() 
{
    char input[100];
    printf("Masukkan sebuah string: ");
    fgets(input, sizeof(input), stdin); //scanf berhenti kalo ketemu spasi jadi pake fgets

    //loop untuk menghilangkan huruf duplikat dalam string menggunakan sistem komparasi dan mengubah string yang ada
    int length = strlen(input);
    int penunjuk = 1;
    for (int i = 1; i < length; i++) {
        int j;
        for (j = 0; j < penunjuk; j++) {
            if (input[i] == input[j] || input[i] == ' ') {
                break;
            }
        }
        if (j == penunjuk) {
            input[penunjuk] = input[i];
            penunjuk++;
        }
    }
    input[penunjuk] = '\0'; //akhiri string pada penunjuk terakhir

    //print string setelah diproses
    printf("Karakter unik dalam string adalah: ");
    for (int i = 0; input[i] != '\0'; ++i) {
        printf("%c ", input[i]);
    }

    return 0;
}
