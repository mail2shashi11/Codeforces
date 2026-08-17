import java.util.Scanner;

public class PizzaTime {
    public static int maxSlicesHaoCanEat(int n) {
        if (n <= 3) {
            return 1;
        } else {
            return (n - 1) / 2 ;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            System.out.println(maxSlicesHaoCanEat(n));
        }
        scanner.close();
    }
}