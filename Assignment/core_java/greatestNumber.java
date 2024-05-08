import java.util.Scanner;

public class greatestNumber {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter three numbers:");
        System.out.println("Enter First numbers:");
            int a = s.nextInt();
            System.out.println("Enter Second numbers:");
            int b = s.nextInt();
            System.out.println("Enter Third numbers:");
            int c = s.nextInt();


        // Finding the greatest number
        int greatest = a;
        if (b > greatest) {
            greatest = b;
        }
        if (c > greatest) {
            greatest = c;
        }

        // Printing the greatest number
        System.out.println("The greatest number is: " + greatest);

        s.close();
    }
}
