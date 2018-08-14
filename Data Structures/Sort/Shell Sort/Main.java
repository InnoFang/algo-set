public class Main {

    public static void shellSort(Integer[] list) {
        int gap = 1;

        while (gap < list.length / 3) {
            gap = gap * 3 + 1;
        }

        for (; gap > 0; gap = (gap - 1) / 3) {
            for (int i = gap; i < list.length; i += gap) {
                int tmp = list[i], j = i;
                for (; j > 0 && list[j - gap] > tmp; j -= gap) {
                    list[j] = list[j - gap];
                }
                list[j] = tmp;
            }
        }
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        shellSort(list);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}