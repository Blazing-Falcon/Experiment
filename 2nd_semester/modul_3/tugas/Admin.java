import java.util.Scanner;
import java.util.Random;

public class Admin extends User {
    static String AdminUser = "admin";
    static String AdminPass = "1231";

    public boolean isAdmin(String user, String pass){
        if (user.equals(AdminUser) && pass.equals(AdminPass)) {
            System.out.println("Sukses login sebagai admin\n");
            return true;
        } else {
            System.out.println("Admin tidak ditemukan\n");
            return false;
        }
    }

    public void addStudent(){
        Student student = new Student();
        Scanner scanString = new Scanner(System.in);
        String UserInput;

        System.out.print("Masukkan nama mahasiswa: ");
        UserInput = scanString.nextLine();
        student.nama.add(UserInput);

        System.out.print("Masukkan fakultas mahasiswa: ");
        UserInput = scanString.nextLine();
        student.fakultas.add(UserInput);

        System.out.print("Masukkan NIM mahasiswa: ");
        UserInput = scanString.nextLine();
        while(true){
            if (String.valueOf(UserInput).length() != 15 ) {
                System.out.print("Nim Harus 15 Digit!!!\n");
                System.out.print("Masukkan NIM mahasiswa: ");
                UserInput = scanString.nextLine();
            } else {
                student.nim.add(UserInput);
                break;
            }
        }

        System.out.print("Masukkan jurusan mahasiswa: ");
        UserInput = scanString.nextLine();
        student.prodi.add(UserInput);

        System.out.print("Data Mahasiswa berhasil ditambahkan.\n");
    }

    public void dispayStudent(){
        Student student = new Student();
        for (int i = 0; i < student.nama.size(); i++) {
            System.out.println("Data mahasiswa ke " + (i+1));
            System.out.println("Nama: " + student.nama.get(i));
            System.out.println("Fakultas: " + student.fakultas.get(i));
            System.out.println("nim: " + student.nim.get(i));
            System.out.println("prodi: " + student.prodi.get(i));
        }
    }

    public String generateId(){
        StringBuilder sb = new StringBuilder();
        Random random = new Random();
        for (int i = 0; i < 3; i++) {
            int length = 4;
            for (int j = 0; j < length; j++) {
                if (random.nextBoolean()) {
                    char c = (char) ('a' + random.nextInt(26));
                    sb.append(c);
                } else {
                    char c = (char) ('0' + random.nextInt(10));
                    sb.append(c);
                }
            }
            if (i < 2) {
                sb.append('-');
            }
        }
        return sb.toString();
    }

    public void addBook(){
        Book book = new Book();
        Scanner scanInt = new Scanner(System.in);
        Scanner scanString = new Scanner(System.in);
        String UserInput;
        System.out.println("Select book category: ");
        System.out.println("1. Story Book");
        System.out.println("2. History Book");
        System.out.println("3. Text Book");
        System.out.print("Choose category (1-3): ");
        int pilih = scanInt.nextInt();
        if (pilih == 1) {
            book.category.add("Story");
        }
        if (pilih == 2) {
            book.category.add("History");
        }
        if (pilih == 3) {
            book.category.add("Text");
        }

        String id = generateId();
        book.id.add(id);

        System.out.print("Masukkan judul buku: ");
        UserInput = scanString.nextLine();
        book.nama.add(UserInput);

        System.out.print("Masukkan penulis: ");
        UserInput = scanString.nextLine();
        book.author.add(UserInput);

        System.out.print("Masukkan jumlah stock: ");
        int stock = scanInt.nextInt();
        book.stock.add(stock);

        System.out.print("Data buku berhasil ditambahkan.\n");
    }

    @Override
    public void displayBook(){

    }


}
