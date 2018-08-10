public class Main {

    public static void bubbleSort(Integer[] list) {
        for (int i = 0; i < list.length - 1; ++i) 
            for (int j = 0; j < list.length - 1 - i; ++j) 
                if (list[j] > list[j + 1]) {
                    int tmp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = tmp;
                } 
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        bubbleSort(list);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}