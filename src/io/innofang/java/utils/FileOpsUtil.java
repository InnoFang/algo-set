package io.innofang.java.utils;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by Inno Fang on 2017/5/2.
 * <p>
 * Get Each Word from the text
 */
public class FileOpsUtil {

    public static boolean isAlpha(char ch) {
        return (ch >= 'A' && ch <= 'Z')
                || (ch >= 'a' && ch <= 'z');
    }

    public static int firstCharacterIndex(String s, int start) {
        for (int i = start; i < s.length(); i++) {
            if (isAlpha(s.charAt(i)))
                return i;
        }
        return s.length();
    }

    public static boolean readFile(String fileName, List<String> words) {
        String read;
        StringBuilder contents = new StringBuilder();
        FileReader fr = null;
        BufferedReader br = null;
        try {
            File file = new File(fileName);
            if (!file.canRead() || !file.exists()) {
                System.out.println("Cannot read or open " + fileName);
                return false;
            }
            fr = new FileReader(file);
            br = new BufferedReader(fr);
            while ((read = br.readLine()) != null) {
                contents.append(read + '\n');
            }
            int start = firstCharacterIndex(contents.toString(), 0);
            for (int i = start + 1; i <= contents.length(); ) {
                if (i == contents.length() || !isAlpha(contents.charAt(i))) {
                    String word = contents.substring(start, i).toLowerCase();
                    words.add(word);
                    start = firstCharacterIndex(contents.toString(), i);
                    i = start + 1;
                } else {
                    i++;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            closeQuietly(fr);
            closeQuietly(br);
        }
        return true;
    }

    public static void closeQuietly(Closeable closeable) {
        if (null != closeable) {
            try {
                closeable.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

}
