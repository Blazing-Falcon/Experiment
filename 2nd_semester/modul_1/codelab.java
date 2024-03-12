import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;

public class codelab1 {
    public static void main(String[] args) throws Exception {
        Scanner cin = new Scanner(System.in);
        System.out.printf("// input\n");

        System.out.printf("Nama: ");
        String nama = cin.nextLine();

        System.out.printf("Jenis Kelamin (L/P): ");
        String gender = cin.nextLine();
        if(gender.toUpperCase().equals("L")){
            gender = "Laki-laki";
        }
        else if(gender.toUpperCase().equals("P")){
            gender ="Perempuan";
        }
        
        System.out.printf("Tanggal Lahir (yyyy-mm-dd): ");
        String tanggal = cin.nextLine();
        LocalDate sekarang = LocalDate.now();
        LocalDate tglLahir = LocalDate.parse(tanggal);
        Period umur = Period.between(tglLahir, sekarang);

        System.out.printf("\n// output\n");
        System.out.printf("Nama: %s\n", nama);
        System.out.printf("Jenis Kelamin: %s\n", gender);
        System.out.printf("Umur Anda: %d tahun %d bulan\n", umur.getYears(), umur.getMonths());
    }
}
