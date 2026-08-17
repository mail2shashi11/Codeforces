import java.util.Scanner;

public class SubmatrixSum {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();  // number of test cases
        while (t-- > 0) {
            int r = sc.nextInt();  // rows
            int c = sc.nextInt();  // columns

            long[][] arr = new long[r + 1][c + 1]; // original matrix (1-based indexing)
            long[][] pm = new long[r + 1][c + 1];  // prefix sum matrix

            // Input the matrix
            System.out.println("Enter the matrix elements:");
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    arr[i][j] = sc.nextLong();
                }
            }

            // Build prefix sum matrix
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    pm[i][j] = arr[i][j] + pm[i - 1][j] + pm[i][j - 1] - pm[i - 1][j - 1];
                }
            }

            // Print prefix sum matrix
            System.out.println("\nPrefix Sum Matrix:");
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    System.out.print(pm[i][j] + " ");
                }
                System.out.println();
            }

            int q = sc.nextInt();  // number of queries
            System.out.println("\nQuery results:");
            while (q-- > 0) {
                int x1 = sc.nextInt();
                int y1 = sc.nextInt();
                int x2 = sc.nextInt();
                int y2 = sc.nextInt();

                // Calculate sum using inclusion-exclusion
                long sum = pm[x2][y2] - pm[x2][y1 - 1] - pm[x1 - 1][y2] + pm[x1 - 1][y1 - 1];
                System.out.println(sum);
            }
        }

        sc.close();
    }
}
