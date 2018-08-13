public class Main {

    public static void insertionSort(Integer[] list) {
        for (int i = 1; i < list.length; ++i) {
            int tmp = list[i], j;
            for (j = i; j > 0 && list[j - 1] > tmp; --j) {
                list[j] = list[j - 1];
            }
            list[j] = tmp;
        }
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        insertionSort(list);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}