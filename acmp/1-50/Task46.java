import java.math.*;
import java.io.PrintWriter;
import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static String f(int n) {
        if(n == 0)
            return "";
        String r = ".";
        for(int i = 0; i < n; ++i)
            r += "0";
        return r;
    }

    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.ENGLISH);
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        int n = in.nextInt();
        out.print(new DecimalFormat( "0" + f(n)).format(new BigDecimal("2.7182818284590452353602875")));
        out.flush();
    }
}