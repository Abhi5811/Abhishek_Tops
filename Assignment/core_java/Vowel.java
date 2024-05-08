import java.util.Scanner;

public class Vowel {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        // Prompting the user to enter a single character
        System.out.println("Enter a single character from the alphabet:");
        String input = s.nextLine();

        // Checking if the input is a single character
        if (input.length() != 1 || !Character.isLetter(input.charAt(0))) {
            System.out.println("Error: Please enter a single character from the alphabet.");
        } else {
            char ch = Character.toLowerCase(input.charAt(0)); // Convert to lowercase for easier comparison

            // Checking if the character is a vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                System.out.println("Vowel");
            } else {
                System.out.println("Consonant");
            }
        }

        s.close();
    }
}
