public class pattern1 {
    public static void main(String[] args) {
        int rows = 4; // Number of rows in the triangle
        int num = 1; // Starting number

        // Outer loop for rows
        for (int i = 1; i <= rows; i++) {
            // Inner loop for printing numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(num + " ");
                num++; // Increment the number for each iteration
            }
            // Move to the next line after each row is printed
            System.out.println();
        }
    }
}
