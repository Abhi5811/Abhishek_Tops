public class pattern {
    public static void main(String[] args) {
        int rows = 5; // Number of rows in the triangle

        // Outer loop for rows
        for (int i = 1; i <= rows; i++) {
            // Inner loop for printing numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            // Move to the next line after each row is printed
            System.out.println();
        }
    }
}
