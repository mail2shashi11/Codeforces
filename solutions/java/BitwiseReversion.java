import java.util.*;
public class BitwiseReversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long x = sc.nextLong(), y = sc.nextLong(), z = sc.nextLong();
            boolean ok = true;
            for (int i = 0; i < 31; i++) {
                int X = (int)((x >> i) & 1);
                int Y = (int)((y >> i) & 1);
                int Z = (int)((z >> i) & 1);
                if ((X == 1 && Y == 1 && Z == 0) ||
                    (X == 1 && Y == 0 && Z == 1) ||
                    (X == 0 && Y == 1 && Z == 1)) {
                    ok = false;
                    break;
                }
            }
            System.out.println(ok ? "YES" : "NO");
        }
        sc.close();
    }
}

