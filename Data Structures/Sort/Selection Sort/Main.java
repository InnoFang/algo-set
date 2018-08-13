public class Main {

    public static void selectionSort(Integer[] list) {
        for (int i = 0; i < list.length; ++i) {
            int idx = i;
            for (int j = i + 1; j < list.length; ++j) {
                if (list[j] < list[idx]) {
                    idx = j;
                }
            }
            if (idx != i) {
                int tmp = list[idx];
                list[idx] = list[i];
                list[i] = tmp;
            }
        }
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        selectionSort(list);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }

}