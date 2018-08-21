public class Main {
    public static void heapSort(Integer[] list) {
        
        for (int i = list.length / 2 - 1; i >= 0; --i) {
            shiftDown(list, list.length, i);
        }

        for (int i = list.length - 1; i >= 0; --i) {
            swap(list, 0, i);
            shiftDown(list, i, 0);
        }

    }

    public static void shiftDown(Integer[] list, int len, int idx) {
        while (idx * 2 + 1 < len) {
            int child = idx * 2 + 1;
            if (child + 1 < len && list[child] < list[child + 1]) ++child;
            if (list[idx] >= list[child]) break;
            swap(list, idx, child);
            idx = child;
        }
    }

    public static void swap(Integer[] list, int i, int j) {
        int tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        heapSort(list);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}