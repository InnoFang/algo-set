# My Java Solution Template

> Template for **algorithm competition**

**PS** *LOCAL* is your `in.txt` location

```java
import java.io.*;
import java.util.*;

public class Main {

    private static final String LOCAL = "src/main/java/template";

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

    long nextLong() {
        return Long.parseLong(next());
    }

    double nextDouble() {
        return Double.parseDouble(next());
    }

    int[] nextIntArray(int size) {
        int[] array = new int[size];
        for (int i = 0; i < array.length; i++)
            array[i] = nextInt();
        return array;
    }

}

class OutputWriter extends PrintWriter {

    public OutputWriter(OutputStream out) {
        super(new BufferedOutputStream(out));
    }
}


class Solution {

    public void solve(InputReader in, OutputWriter out) {
        // solve your problem here
    }

}
```
