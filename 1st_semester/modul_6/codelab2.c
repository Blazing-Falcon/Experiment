#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//data pada array lalu write pake loop aja dah :D
int main(int argc, char const *argv[])
{
    //deklarasi file pointer
    FILE* fptr;

    //buat atau buka file-nya, exit jika gagal
    fptr = fopen("data_mahasiswa.txt", "w");
    if (fptr == NULL){
        printf("file gagal dibuat");
        exit(0);
    }

    //data nama, nim, prodi
    int jumlah = 3;
    char nama[3][50] = {"farhan kurnia", "hadrian rakha", "sk0nes"};
    char nim[3][50] = {"202310370311486", "202310370311483", "202310370342069"};
    char prodi[3][50] ={"Informatika", "Informatika", "Informatika"};

    //print that stuff ke dalam file
    for (int i = 0; i < jumlah; i++){
        fprintf(fptr, "Nama: %s\n", nama[i]);
        fprintf(fptr, "Nim: %s\n", nim[i]);
        fprintf(fptr, "Program Studi: %s\n\n", prodi[i]);
    };
    
    fclose(fptr);
    return 0;
}
