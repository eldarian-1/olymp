import java.lang.Math;
import java.io.*;

public class Task11 {
    public static String[] v;

    public static void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int max = -1, min = 1000000;
        v = in.readLine().split(" ");
        for(int i = 0, n = v.length; i < n; ++i) {
            int t = Integer.parseInt(v[i]);
            max = Math.max(max, t);
            min = Math.min(min, t);
        }
        out.print(max - min);
        out.flush();
    }
}