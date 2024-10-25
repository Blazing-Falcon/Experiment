import java.util.Random;
import java.util.Scanner;

public class ndogmateng {
    
    public static char[] encrypt(String plaintext) {
        char [] encryptedMessage = new char[plaintext.length() * 4];

        for (int i = 0; i < plaintext.length(); i++) {
            char huruf = plaintext.charAt(i);
            Random random = new Random((int) huruf);

            for (int j = 0; j < 4; j++) {
                char randomHuruf = (char) (random.nextInt(94) + 33);
                encryptedMessage[i * 4 + j] = randomHuruf;
            }
        }

        return encryptedMessage;
    }

    public static char[] decrypt(char[] encryptedMessage) {
        int originalLength = encryptedMessage.length / 4;
        char decryptedMessage[] = new char[originalLength];

        for (int i = 0; i < originalLength; i++) {
            char[] encryptedBlock = new char[4];
            for (int j = 0; j < 4; j++) {
                encryptedBlock[j] = encryptedMessage[i * 4 + j];
            }
            for (int ascii = 33; ascii <= 126; ascii++) {
                Random random = new Random(ascii);
                char[] generatedBlock = new char[4];
                for (int j = 0; j < 4; j++) {
                    generatedBlock[j] = (char) (random.nextInt(94) + 33);
                }
                //disini kita bandingkan encrypted block dengan block yang kita generate
                if (compareBlocks(encryptedBlock, generatedBlock)) {
                    decryptedMessage[i] = (char) ascii;
                    break;
                }
            }
        }

        return decryptedMessage;
    }

    public static boolean compareBlocks(char[] block1, char[] block2) {
        for (int i = 0; i < block1.length; i++) {
            if (block1[i] != block2[i]) {
                return false;
            }
        }
        return true;
    }

    public static String toString(char[] array) {
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < array.length; i++) {
            stringBuilder.append(array[i]);
        }
        return stringBuilder.toString();
    }

    public static void showMenu() {
        System.out.println("Program Enkripsi Menggunakan Random (Tapi ga random)");
        System.out.println("1. Lakukan Enkripsi");
        System.out.println("2. Lakukan Dekripsi");
        System.out.print("Pilihan Anda: ");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        showMenu();
        int pilihan = scanner.nextInt();
        scanner.nextLine();

        switch (pilihan) {
            case 1:
                System.out.print("Masukkan plaintext untuk di-enkripsi: ");
                String plainText = scanner.nextLine();
                System.out.println("Hasil Enkripsi: " + toString(encrypt(plainText)));
                break;
            case 2:
                System.out.print("Masukkan teks yang ter-enkripsi: ");
                String encryptedInput = scanner.nextLine();
                char[] encryptedArr = encryptedInput.toCharArray();
                System.out.println("Hasil Dekripsi: " + toString(decrypt(encryptedArr)));
                break;
            default:
                System.out.println("Input tidak valid");
                break;
        }
    }
}
