# Permutation

```java
/**
 * Author: Inno Fang
 * Description: Permutation Algorithm Implementation (Java)
 */

public class Permutation {

    public static <T> void swap(T[] list, int i, int j) {
        T temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }

    public static <T> void permutation(T[] list, int start, int length) {
        if (start == length) {
            for (int i = 0; i <= length; i++) {
                System.out.print(list[i] + "");
            }
            System.out.println();
        } else {
            for (int i = start; i <= length; i++) {
                swap(list, start, i);
                permutation(list, start + 1, length);
                swap(list, start, i);
            }
        }
    }

/* 
    // example
    public static void main(String[] args) {
        Integer[] list = {1, 2, 3, 4};
        permutation(list, 0, list.length - 1);
    }
*/
}
```
