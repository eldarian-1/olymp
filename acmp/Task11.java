import java.util.Scanner;
import java.math.BigInteger;
import java.io.File;
import java.io.PrintWriter;

public class Task11 {
    public static int n;
    public static int k;
    public static BigInteger[] v;

    public static BigInteger f(int n) {
        if(n == 0)
            return BigInteger.valueOf(1);
        if(n < 0)
            return BigInteger.valueOf(0);
        if(v[n - 1] != null)
            return v[n - 1];
        BigInteger r = BigInteger.valueOf(0);
        for(int i = 1; i < k + 1; ++i)
            r = r.add(f(n - i));
        v[n - 1] = r;
        return r;
    }

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        k = in.nextInt();
        n = in.nextInt();
        v = new BigInteger[n];
        out.print(f(n));
        out.flush();
    }
}