import java.io.*;
import java.util.*;

/**
 * Problem: [Problem Title / ID]
 * Link: [Problem URL]
 * 
 * Approach:
 * - [Intuition & Algorithm Strategy]
 * 
 * Complexity:
 * - Time: O(...)
 * - Space: O(...)
 */
public class Solution {
    static class FastScanner {
        private final BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        private StringTokenizer st;

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    String line = br.readLine();
                    if (line == null) return null;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }
    }

    static void solve(FastScanner in, PrintWriter out) {
        // Solution logic here
    }

    public static void main(String[] args) {
        FastScanner in = new FastScanner();
        PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));

        String firstToken = in.next();
        if (firstToken != null) {
            int testCases = Integer.parseInt(firstToken);
            while (testCases-- > 0) {
                solve(in, out);
            }
        }
        out.flush();
    }
}
