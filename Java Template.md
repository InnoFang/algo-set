
# My Java Solution Template

```java
import java.io.*;
import java.util.*;

public class Main {

    private static final String LOCAL = "src/main/java/template";

    public static void main(String[] args) throws IOException {
        System.out.println(Main.class.getPackage().getName());
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
    }

    String next() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(readLine());
            } catch (IOException e) {
                e.printStackTrace();
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

    int[] nextIntArray(int size) {
        int[] array = new int[size];
        for (int i = 0; i < array.length; i++)
            array[i] = nextInt();
        return array;
    }

    String nextLine() {
        String str = "";
        try {
            str = readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}

class OutputWriter extends PrintWriter {

    public OutputWriter(OutputStream out) {
        super(new BufferedOutputStream(out));
    }
}


class Solution {

    public void solve(InputReader in, OutputWriter out) {
        out.println(in.nextInt());
    }

    private int min(int a, int b) {
        return a <= b ? a : b;
    }

    private int max(int a, int b) {
        return a >= b ? a : b;
    }

    private void swap(int arr[], int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
```