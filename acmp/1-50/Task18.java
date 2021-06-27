import java.util.Scanner;
import java.math.BigInteger;
import java.io.PrintWriter;

public class Main {
    public static int n;
    public static BigInteger k = BigInteger.valueOf(1);

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        n = in.nextInt();
        for(int i = 2; i <= n; ++i)
            k = k.multiply(BigInteger.valueOf(i));
        out.print(k);
        out.flush();
    }
}