import java.util.Scanner;

public class sumOfInput {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        // Input 5 numbers from the keyboard
        System.out.println("Enter 5 numbers:");
        int sum = 0;
        for (int i = 1; i <= 5; i++) {
            System.out.print("Enter number " + i + ": ");
            double number = s.nextDouble();
            sum += number;
        }

        // Calculate average
        int average = sum / 5;

        // Print sum and average
        System.out.println("Sum of the numbers: " + sum);
        System.out.println("Average of the numbers: " + average);

        s.close();
    }
}
