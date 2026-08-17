import java.util.*;
import java.io.*;

public class CircleOfApples {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] parts = br.readLine().trim().split(" ");
            Set<Integer> set = new HashSet<>();

            for (int i = 0; i < n; i++) {
                set.add(Integer.parseInt(parts[i]));
            }

            sb.append(set.size()).append("\n");
        }

        System.out.print(sb.toString());
    }
}
