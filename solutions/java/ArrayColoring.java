import java.util.Scanner;

public class ArrayColoring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int cnt = 0;

            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                if (x % 2 != 0) cnt++;
            }

            if (cnt % 2 == 0) System.out.println("YES");
            else System.out.println("NO");
        }

        sc.close();
    }
}

