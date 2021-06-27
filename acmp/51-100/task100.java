import java.util.Scanner;
import java.math.BigInteger;
import java.io.File;
import java.io.PrintWriter;

public class Main {
    public static int n;
    public static BigInteger[][] v;

    public static BigInteger f(int n, int k) {
        if(k < 0 || k > 9 * n)
            return BigInteger.valueOf(0);
        if(n == 0 && k == 0)
            return BigInteger.valueOf(1);
        if(v[n - 1][k] != null)
            return v[n - 1][k];
        v[n - 1][k] = BigInteger.valueOf(0);
        for(int i = k - 9; i <= k; ++i)
            v[n - 1][k] = v[n - 1][k].add(f(n - 1, i));
        return v[n - 1][k];
    }

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        n = in.nextInt();
        v = new BigInteger[n][n * 9 / 2 + 1];
        out.print(f(n, n * 9 / 2));
        out.flush();
    }
}