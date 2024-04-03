import java.util.Scanner;
/**
 * App
 */
public class App {
    public static void menuUtama(){
        System.out.println("\n==== Library System ====");
        System.out.println("1. Login as Student");
        System.out.println("2. Login as Admin");
        System.out.println("3. Exit");
        System.out.print("Pilihan Anda: ");
    }

    public static void menuStudent(){
        System.out.println("\n==== Student Menu ====");
        System.out.println("1. Buku terpinjam");
        System.out.println("2. Pinjam buku");
        System.out.println("3. Kembalikan buku");
        System.out.println("4. Logout");
        System.out.print("Pilihan Anda: ");
    }

    public static void menuAdmin(){
        System.out.println("\n==== Admin Menu ====");
        System.out.println("1. Add Student");
        System.out.println("2. Add Book");
        System.out.println("3. Display Registered Student");
        System.out.println("4. Display Available Book");
        System.out.println("5. Logout");
        System.out.print("Pilihan Anda: ");
    }
    public static void main(String[] args) {
        User user = new User();
        Student student = new Student();
        Admin admin = new Admin();
        Book book = new Book();

        mainMenu:
        while (true) {
            menuUtama();
            Scanner scan = new Scanner(System.in);
            int pilih = scan.nextInt();
            switch (pilih) {
                case 1:
                    Scanner scanNim = new Scanner(System.in);
                    System.out.print("Masukkan nim anda: ");
                    String nim = scanNim.nextLine();
                    if (student.isStudent(nim) == false) {
                        System.out.println("Nim tidak ditemukan atau tidak valid");
                        continue mainMenu;
                    }
                    while (true) {
                        menuStudent();
                        Scanner scanInt = new Scanner(System.in);
                        int pilih2 = scanInt.nextInt();
                        if (pilih2 == 1) {
                            student.bukuTerpinjam();
                        } else if (pilih2 == 2) {
                            user.displayBook();
                            student.pinjamBuku();
                        } else if (pilih2 == 3){
                            student.kembalikanBuku();
                        } else {
                            break;
                        }
                    }
                    break;
                case 2:
                    Scanner scanAdmin = new Scanner(System.in);
                    System.out.print("Masukkan admin user: ");
                    String adminUser = scanAdmin.nextLine();
                    System.out.print("Masukkan admin password: ");
                    String adminPass = scanAdmin.nextLine();
                    if (admin.isAdmin(adminUser, adminPass) == false) {
                        continue mainMenu;
                    }
                    while (true) {
                        menuAdmin();
                        Scanner scanInt = new Scanner(System.in);
                        int pilih2 = scanInt.nextInt();
                        if (pilih2 == 1) {
                            admin.addStudent();
                        } else if (pilih2 == 2) {
                            admin.addBook();
                        } else if (pilih2 == 3){
                            admin.dispayStudent();
                        } else if (pilih2 == 4){
                            user.displayBook();
                        } else {
                            break;
                        }
                    }
                    break;
                default:
                    System.out.println("ADIOS");
                    break mainMenu;
            }
        }
    }
}