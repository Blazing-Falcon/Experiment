#include <stdio.h>

enum makanan
{
    nasiGoreng = 15000, 
    mieGoreng = 15000, 
    ayamGoreng = 10000, 
    baksoGoreng = 12000, 
    mieAyam = 8000
};

enum minuman
{
    airMineral = 3000, 
    esTeh = 4000, 
    esJeruk = 4000, 
    joshua = 5000, 
    susu = 6000
};

int pilihMakanan, pilihMinuman;
float harga, bayar, kembalian;
char member;

int main()
{
    printf("==== Rumah Makan ==== \n");
    printf("Menu Makanan: \n");
    printf("1. Nasi Goreng \t Rp. 15000 \n");
    printf("2. Mie Goreng \t Rp. 15000 \n");
    printf("3. Ayam Goreng \t Rp. 10000 \n");
    printf("4. Bakso \t Rp. 12000 \n");
    printf("5. Mie Ayam \t Rp. 8000 \n");
    printf("Pilih menu makanan (1-5): ");
    scanf("%d", &pilihMakanan);
    printf("\n");

    switch(pilihMakanan)
    {
        case 1:
            harga += nasiGoreng;
            break;
        case 2:
            harga += mieGoreng;
            break;
        case 3:
            harga += ayamGoreng;
            break;
        case 4:
            harga += baksoGoreng;
            break;
        case 5:
            harga += mieAyam;
            break;
        default:
            printf("Makanan Tidak Tersedia");
    }

    printf("Menu Minuman: \n");
    printf("1. Air Mineral \t Rp. 3000 \n");
    printf("2. Es Teh \t Rp. 4000 \n");
    printf("3. Es Jeruk \t Rp. 4000 \n");
    printf("4. Joshua \t Rp. 5000 \n");
    printf("5. Susu \t Rp. 6000 \n");
    printf("Pilih menu minuman (1-5): ");
    scanf("%d", &pilihMinuman);
    printf("\n");
    
    switch(pilihMinuman)
    {
        case 1:
            harga += airMineral;
            break;
        case 2:
            harga += esTeh;
            break;
        case 3:
            harga += esJeruk;
            break;
        case 4:
            harga += joshua;
            break;
        case 5:
            harga += susu;
            break;
        default:
            printf("Minuman Tidak Tersedia");
    }

    printf("Apakah Anda sudah menjadi member? (Y/N): ");
    scanf(" %c", &member);

    if (member == 'Y' || member == 'y'){
        harga = harga * 0.9;
    }

    printf("\n");
    printf("Total harga: %.2f \n", harga);
    printf("Alamat memori variabel harga total: %p \n\n", &harga);
    
    printf("Masukkan jumlah uang pembayaran: ");
    scanf("%f", &bayar);

    if (bayar == harga){
        printf("Terima kasih \n");
    } else if (bayar < harga) {
        printf("Mohon maaf, Uang Anda kurang \n");
        return 0;
    } else if (bayar > harga) {
        kembalian = bayar - harga;
        printf("Kembalian Anda: %.2f \n", kembalian);
    }
}