import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter a year to check if it's a leap year:");
        int year = s.nextInt();


        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            System.out.println(year + " is a leap year.");
        }

        else {
            System.out.println(year + " is not a leap year.");
        }
        System.out.println("First 10 natural numbers:");
        int count = 1;
        while (count <= 10) {
            System.out.print(count + " ");
            count++;
        }

        s.close();
    }
}
