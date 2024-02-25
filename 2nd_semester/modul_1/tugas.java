import java.util.Scanner;

public class tugas {
    public static void main(String[] args) throws Exception {
        while (true) {
            System.out.println("==== Library System ====");
            System.out.println("1. Login as Student");
            System.out.println("2. Login as Admin");
            System.out.println("3. Exit");
            System.out.print("Choose option (1-3): ");
            Scanner inputScanner = new Scanner(System.in);
            int input = inputScanner.nextInt();

            if(input == 1){
                System.out.print("Enter your NIM: ");
                Scanner nimScanner = new Scanner(System.in);
                String nim = nimScanner.nextLine();
                if(nim.length() == 15){
                    System.out.println("Successful Login as Student");
                }
                else{
                    System.out.println("User Not Found");
                }
            }
            else if (input == 2){
                String userx = "admin";
                String passx = "1231";
        
                Scanner adminScanner = new Scanner(System.in);
                System.out.print("Enter your username (admin): ");
                String user = adminScanner.nextLine();
                System.out.print("Enter your password (admin): ");
                String pass = adminScanner.nextLine();
                if (user.equals(userx) && pass.equals(passx)) {
                    System.out.println("Successful Login as Admin");
                }
                else {
                    System.out.println("Admin User Not Found!!");
                }
            }
            else if (input == 3){
                System.out.println("adios");
                break;
            }
        }
    }
}
