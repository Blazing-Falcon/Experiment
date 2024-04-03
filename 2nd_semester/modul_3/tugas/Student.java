import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;

public class Student extends User {
    public static ArrayList<String> nama = new ArrayList<String>(Arrays.asList("Farhan", "Rakha"));
    public static ArrayList<String> fakultas = new ArrayList<String>(Arrays.asList("Teknik", "Teknik"));
    public static ArrayList<String> nim = new ArrayList<String>(Arrays.asList("202310370311486", "202310370311483"));
    public static ArrayList<String> prodi = new ArrayList<String>(Arrays.asList("Informatika", "Informatika"));
    public static ArrayList<String> bukuTerpinjam = new ArrayList<String>();
    public static ArrayList<Integer> durasi = new ArrayList<Integer>();

    public boolean isStudent(String user){
        for (int i = 0; i < nama.size(); i++) {
            if (user.equals(nim.get(i))) {
                System.out.println("Sukses login sebagai student\n");
                return true;
            }
        }
        System.out.println("Nim tidak ditemukan\n");
        return false;
    }

    public void bukuTerpinjam(){
        Book book = new Book();
        System.out.println("===========================================================================================================================================");
        System.out.println("|| No. || Id Buku\t\t\t || Nama Buku\t\t\t || Author\t\t || Category\t\t || Durasi\t || ");
        for (int i = 0; i < bukuTerpinjam.size(); i++) {
            for (int j = 0; j < book.id.size(); j++) {
                if (bukuTerpinjam.get(i).equals(book.id.get(j))) {
                    System.out.printf("|| %d   || %s\t\t || %s\t\t\t || %s\t\t || %s\t\t || TODO\t || \n", i, book.id.get(i), book.nama.get(i), book.author.get(i), book.category.get(i));
                } else {
                    continue;
                }   
            }
        }
        System.out.println("===========================================================================================================================================");
    }

    public void pinjamBuku(){
        Book book = new Book();
        Scanner scanString = new Scanner (System.in);
        System.out.print("Masukkan id buku yang ingin anda pinjam: ");
        String input = scanString.nextLine();
        pilih:
        for (int i = 0; i < book.id.size(); i++) {
            if (input.equals(book.id.get(i))){
                if (book.stock.get(i) == 0) {
                    System.out.println("Stock buku kosong!");
                    System.out.println("Silahkan pilih yang lain");
                    continue pilih;
                }
                bukuTerpinjam.add(input);
                System.out.println("Buku id " + input + " berhasil dipinjam");
                book.stock.set(i, (book.stock.get(i) - 1));
                break;
            }
        }
    }

    public void kembalikanBuku(){
        Book book = new Book();
        Scanner scanString = new Scanner (System.in);
        bukuTerpinjam();
        System.out.print("Masukkan id buku yang ingin anda kembalikan: ");
        String input = scanString.nextLine();
        for (int i = 0; i < bukuTerpinjam.size(); i++) {
            if (input.equals(bukuTerpinjam.get(i))){
                for (int j = 0; j < book.id.size(); j++) {
                    if (input.equals(book.id.get(j))) {
                        book.stock.set(j, (book.stock.get(i) + 1));
                        System.out.println("Buku id " + input + " berhasil dikembalikan");
                    }
                }
            }
        }
    }
}
