import java.util.Scanner;

class Mahasiswa{
    public static String[] nama = new String[5];
    public static String[] jurusan = new String[5];
    public static String[] nim = new String[5];

    void inputDataMahasiswa(int i){
        Scanner scanString = new Scanner(System.in);
        System.out.print("Masukkan nama mahasiswa: ");
        nama[i] = scanString.nextLine();

        System.out.print("Masukkan NIM mahasiswa: ");
        nim[i] = scanString.nextLine();
        while(true){
            if (String.valueOf(nim[i]).length() != 15 ) {
                System.out.print("Nim Harus 15 Digit!!!\n");
                System.out.print("Masukkan NIM mahasiswa: ");
                nim[i] = scanString.nextLine();
            } else {
                break;
            }
        }

        System.out.print("Masukkan jurusan mahasiswa: ");
        jurusan[i] = scanString.nextLine();

        System.out.print("Data Mahasiswa berhasil ditambahkan.\n");
    }

    static String tampilUniversitas(){
        return "Universitas Muhammadiyah Malang\n";
    }

    String tampilDataMahasiswa(int i){
        return "Nama: "+nama[i]+", NIM: "+(nim[i])+", Jurusan: "+jurusan[i];
    }
}

class Main{
    void menu(){
        System.out.println("\nMenu:\n1. Tambah Data Mahasiswa\n2. Tampilkan Data Mahasiswa\n3. Keluar");
        System.out.print("Pilihan Anda: ");
    }

    public static void main(String[] args) throws Exception {
        Mahasiswa mahasiswa = new Mahasiswa();
        Main main = new Main();
        int i = 0;
        while (true) {
            main.menu();
            Scanner scanInt = new Scanner(System.in);
            int pilih = scanInt.nextInt();
            if (pilih == 1) {
                mahasiswa.inputDataMahasiswa(i);
                i++;
            } else if (pilih == 2) {
                System.out.print("Data Mahasiswa:\n"+Mahasiswa.tampilUniversitas());
                for (int j = 0; j < i; j++) {
                    System.out.println(mahasiswa.tampilDataMahasiswa(j));
                }
            } else {
                System.out.println("Adios");
                break;
            }
        }
    }
}