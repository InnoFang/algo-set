import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 * Created by Inno Fang on 2017/4/22.
 */
public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedInputStream(System.in));
        PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
        Solution main = new Solution();
        while (in.hasNext()) {
            String a = in.next();
            String b = in.next();
            String result = main.complexNumberMultiply(a, b);
            out.println(result);
            out.flush();
        }
        in.close();
        out.close();
    }

    public String complexNumberMultiply(String a, String b) {
        StringBuilder sb = new StringBuilder();
        String[] tokenA = a.split("\\+|i");
        String[] tokenB = b.split("\\+|i");
        int realA = Integer.parseInt(tokenA[0]);
        int realB = Integer.parseInt(tokenB[0]);
        int imgA = Integer.parseInt(tokenA[1]);
        int imgB = Integer.parseInt(tokenB[1]);
        int real = realA * realB - imgA * imgB;
        int complex = realA * imgB + imgA * realB;
        sb.append(real).append("+").append(complex).append("i");
        return sb.toString();
    }

}
