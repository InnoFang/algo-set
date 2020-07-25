import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {

    private static final String LOCAL = ".";

    public static void main(String[] args) throws IOException {
        File file = new File(LOCAL, "in.txt");
        if (file.exists()) System.setIn(new FileInputStream(file));
        InputReader in = new InputReader(System.in);
        OutputWriter out = new OutputWriter(System.out);
        new Solution().solve(in, out);
        in.close();
        out.close();
    }
}

class InputReader extends BufferedReader {

    private StringTokenizer st;

    public InputReader(InputStream in) {
        super(new InputStreamReader(in));
        eat("");
    }

    void eat(String s) {
        st = new StringTokenizer(s);
    }

    String nextLine() {
        try {
            return readLine();
        } catch (IOException e) {
            throw new IOError(e);
        }
    }

    boolean hasNext() {
        while (!st.hasMoreTokens()) {
            String s = nextLine();
            if (null == s) return false;
            eat(s);
        }
        return true;
    }

    String next(){
        hasNext();
        return st.nextToken();
    }

    int nextInt() {
        return Integer.parseInt(next());
    }
}

class OutputWriter extends PrintWriter {

    public OutputWriter(OutputStream out) {
        super(new BufferedOutputStream(out));
    }
}


class Solution {

    public void solve(InputReader in, OutputWriter out) {
        int T = in.nextInt();
        for (int cas = 1; cas <= T; cas++) {
            String p = in.nextLine();
            if (p != null) {
                BigInteger pNum = new BigInteger(p);
                while (true) {
                    pNum = pNum.add(BigInteger.ONE);
                    if (pNum.toString().contains("2333")) {
                        break;
                    }
                }
                System.out.printf("Case #%d: %s\n", cas, pNum);
            }
        }
    }
}