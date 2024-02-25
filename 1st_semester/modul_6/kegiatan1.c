#include <stdio.h>
#include <string.h>
// program ini broken parah bjir, ini tuh kayak cara paling idiot yang terpikirkan
// teks file nya aja ngga kuformat
// scalable? yeah what is that???
// ide banyak tapi karena waktu mepet (gw malas malas an) jadi gini aja dah

// pake struct aja buat ngumpulin variabel disini
struct buku
{
    char id[10];
    char judul[50];
    char author[50];
    char halaman[10];
    char genre[50];
};

// fungsi tambah buku
void createBook()
{
    struct buku newBook;

    printf("Masukkan ID buku: ");
    fgets(newBook.id, sizeof(newBook.id), stdin);

    // check id, exit jika id sudah ada
    FILE *fptr = fopen("library_books.txt", "r");
    if (fptr != NULL)
    {
        struct buku existingBook;
        while (fgets(existingBook.id, sizeof(existingBook.id), fptr) != NULL)
        {
            fgets(existingBook.judul, sizeof(existingBook.judul), fptr);
            fgets(existingBook.author, sizeof(existingBook.author), fptr);
            fgets(existingBook.halaman, sizeof(existingBook.halaman), fptr);
            fgets(existingBook.genre, sizeof(existingBook.genre), fptr);

            // membandingkan id yang dibaca dengan input user
            if (strcmp(existingBook.id, newBook.id) == 0)
            {
                fclose(fptr);
                printf("ID SUDAH TERDAFTAR\n");
                return 0; // exit kalo id sudah ada
            }
        }
        fclose(fptr);
    }

    printf("Masukkan Judul buku: ");
    fgets(newBook.judul, sizeof(newBook.judul), stdin);

    printf("Masukkan Penulis buku: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);

    printf("Masukkan Jumlah halaman: ");
    fgets(newBook.halaman, sizeof(newBook.halaman), stdin);

    printf("Masukkan Genre buku: ");
    fgets(newBook.genre, sizeof(newBook.genre), stdin);

    // tulis apa yang dimasukkan user ke file
    fptr = fopen("library_books.txt", "a");
    if (fptr != NULL) {
        fprintf(fptr, "%s", newBook.id);
        fprintf(fptr, "%s", newBook.judul);
        fprintf(fptr, "%s", newBook.author);
        fprintf(fptr, "%s", newBook.halaman);
        fprintf(fptr, "%s", newBook.genre);
        fclose(fptr);
        printf("Buku berhasil ditambahkan.\n");
    } else {
        printf("Gagal membuka file.\n");
    }
}

// fungsi menampilkan buku
void displayBook()
{
    struct buku book;
    FILE *fptr = fopen("library_books.txt", "r");
    if (fptr != NULL)
    {
        printf("Daftar Buku:\n");
        while (fgets(book.id, sizeof(book.id), fptr) != NULL)
        {
            fgets(book.judul, sizeof(book.judul), fptr);
            fgets(book.author, sizeof(book.author), fptr);
            fgets(book.halaman, sizeof(book.halaman), fptr);
            fgets(book.genre, sizeof(book.genre), fptr);

            printf("ID: %s", book.id);
            printf("Judul: %s", book.judul);
            printf("Penulis: %s", book.author);
            printf("Jumlah halaman: %s", book.halaman);
            printf("Genre: %s\n", book.genre);
        }
        fclose(fptr);
    }
    else
    {
        printf("Gagal membuka file.\n");
    }
}

// fungsi update buku
void updateBook()
{
    // minta id buku yang mau di-update
    char searchId[10];
    printf("Masukkan ID buku yang ingin diupdate: ");
    fgets(searchId, sizeof(searchId), stdin);

    // untuk update aku pake sistem temp, 
    // masukkan data update ke temp lalu ubah temp ke file utama
    FILE *fptr = fopen("library_books.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    int found = 0;

    if (fptr != NULL && tempFile != NULL)
    {
        struct buku book;
        while (fgets(book.id, sizeof(book.id), fptr) != NULL)
        {
            fgets(book.judul, sizeof(book.judul), fptr);
            fgets(book.author, sizeof(book.author), fptr);
            fgets(book.halaman, sizeof(book.halaman), fptr);
            fgets(book.genre, sizeof(book.genre), fptr);

            // membandingkan id yang dibaca dengan input user
            if (strcmp(book.id, searchId) == 0)
            {
                found = 1;

                printf("ID: %s", book.id);
                printf("Judul: %s", book.judul);
                printf("Penulis: %s", book.author);
                printf("Jumlah halaman: %s", book.halaman);
                printf("Genre: %s", book.genre);

                // update detail nya
                printf("Masukkan judul baru: ");
                fgets(book.judul, sizeof(book.judul), stdin);
                printf("Masukkan penulis baru: ");
                fgets(book.author, sizeof(book.author), stdin);
                printf("Masukkan jumlah halaman baru: ");
                fgets(book.halaman, sizeof(book.halaman), stdin);
                printf("Masukkan genre baru: ");
                fgets(book.genre, sizeof(book.genre), stdin);
            }

            // tulis detail buku ke file temp
            fprintf(tempFile, "%s%s%s%s%s", book.id, book.judul, book.author, book.halaman, book.genre);
        }

        fclose(fptr);
        fclose(tempFile);

        // ubah temp menjadi file utama
        remove("library_books.txt");
        rename("temp.txt", "library_books.txt");

        if (found)
            printf("Informasi buku berhasil diupdate.\n");
        else
            printf("Buku dengan ID tersebut tidak ditemukan.\n");
    }
    else
    {
        printf("Gagal membuka file atau membuat file sementara.\n");
    }
}

void deleteBook()
{
    // minta id buku yang mau di-delete
    char searchId[10];
    printf("Masukkan ID buku yang ingin dihapus: ");
    fgets(searchId, sizeof(searchId), stdin);

    // untuk delete aku pake sistem temp, 
    // masukkan semua data ke temp kecuali yang di-delete
    // lalu ubah temp ke file utama
    FILE *fptr = fopen("library_books.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    int found = 0;

    if (fptr != NULL && tempFile != NULL)
    {
        struct buku book;
        while (fgets(book.id, sizeof(book.id), fptr) != NULL)
        {
            fgets(book.judul, sizeof(book.judul), fptr);
            fgets(book.author, sizeof(book.author), fptr);
            fgets(book.halaman, sizeof(book.halaman), fptr);
            fgets(book.genre, sizeof(book.genre), fptr);

            // membandingkan id yang dibaca dengan input user
            // jika id sama, data tidak akan dimasukkan ke temp
            if (strcmp(book.id, searchId) == 0)
            {
                found = 1;
                printf("Buku yang dihapus:\n");
                printf("ID: %s", book.id);
                printf("Judul: %s", book.judul);
                printf("Penulis: %s", book.author);
                printf("Jumlah halaman: %s", book.halaman);
                printf("Genre: %s", book.genre);
            }
            else
            {
                // tulis detail buku ke file temp
                fprintf(tempFile, "%s%s%s%s%s", book.id, book.judul, book.author, book.halaman, book.genre);
            }
        }

        fclose(fptr);
        fclose(tempFile);

        remove("library_books.txt");
        rename("temp.txt", "library_books.txt");

        if (found)
            printf("Buku berhasil dihapus.\n");
        else
            printf("Buku dengan ID tersebut tidak ditemukan.\n");
    }
    else
    {
        printf("Gagal membuka file atau membuat file sementara.\n");
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    printf("====Selamat Datang di Program Managemen Buku Perpustakaan====\n");
    printf("Dalam program ini anda dapat menambahkan buku, menampilkan daftar buku,\n");
    printf("mengupdate informasi buku dan menghapus buku dalam database\n");

    do
        {
            printf("\nPilihan:\n");
            printf("1. Tambahkan Buku\n");
            printf("2. Tampilkan Daftar Buku\n");
            printf("3. Update Informasi Buku\n");
            printf("4. Hapus Buku\n");
            printf("5. Keluar\n");
            printf("Pilih: ");
            scanf("%d", &choice);
            while((getchar()) != '\n');

            switch (choice)
            {
            case 1:
                createBook();
                break;
            case 2:
                displayBook();
                break;
            case 3:
                updateBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Keluar dari program. Selamat tinggal!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
                break;
            }
        } while (choice != 5);

    return 0;
}
