#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char agen[5][10] = {"neon", "gekko", "omen", "sage", "jett"};
    int jumlah = sizeof agen / sizeof agen [0];

    printf("Daftar Agen:\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("Agent ke-%d: %s\n", i + 1, agen[i]);
    }
    printf("\n");

    //ubah menggunakan strcpy
    strcpy (agen[3], "kage");

    printf("Daftar Agen setelah perubahan:\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("Agent ke-%d: %s\n", i + 1, agen[i]);
    }
    printf("\n");
    
    return 0;
}

