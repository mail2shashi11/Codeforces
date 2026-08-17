import java.util.*;
import java.io.*;

public class StrangeMachine {
    static int n;
    static String s;
    static int K = 31; // 2^31 > 1e9
    static int[] pow2 = new int[K + 1];
    static HashMap<Long, Integer> memo;

    static long packKey(int pos, int k, int x) {
        // combine into one long key
        return (((long) pos) << 38) | (((long) k) << 32) | (x & 0xffffffffL);
    }

    static int applyK(int pos, int k, int x) {
        if (x == 0) return 0;
        long key = packKey(pos, k, x);
        if (memo.containsKey(key)) return memo.get(key);

        int res;
        if (k == 0) {
            if (s.charAt(pos) == 'A') res = x - 1;
            else res = x / 2;
        } else {
            int mid = applyK(pos, k - 1, x);
            if (mid == 0) res = 0;
            else {
                int nextPos = (pos + pow2[k - 1]) % n;
                res = applyK(nextPos, k - 1, mid);
            }
        }
        memo.put(key, res);
        return res;
    }

    static int solveOneQuery(int a) {
        memo = new HashMap<>();
        int pos = 0;
        int cur = a;
        long ans = 0;

        for (int k = K; k >= 0; k--) {
            int val = applyK(pos, k, cur);
            if (val > 0) {
                ans += (1L << k);
                cur = val;
                pos = (pos + pow2[k]) % n;
            }
        }

        // simulate remaining few steps
        while (cur > 0) {
            cur = applyK(pos, 0, cur);
            ans++;
            pos = (pos + 1) % n;
        }
        return (int) ans;
    }

    public static void main(String[] args) throws IOException {
        FastReader fr = new FastReader();
        int t = fr.nextInt();
        for (int i = 0; i <= K; i++) pow2[i] = 1 << i;

        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            n = fr.nextInt();
            int q = fr.nextInt();
            s = fr.next();
            for (int i = 0; i < q; i++) {
                int a = fr.nextInt();
                sb.append(solveOneQuery(a)).append('\n');
            }
        }
        System.out.print(sb.toString());
    }

    // Fast input reader
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        FastReader() { br = new BufferedReader(new InputStreamReader(System.in)); }
        String next() throws IOException {
            while (st == null || !st.hasMoreElements()) {
                String line = br.readLine();
                if (line == null) return null;
                st = new StringTokenizer(line);
            }
            return st.nextToken();
        }
        int nextInt() throws IOException { return Integer.parseInt(next()); }
    }
}
