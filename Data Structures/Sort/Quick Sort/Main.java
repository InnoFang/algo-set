public class Main {
    
    public static Integer partition(Integer[] list, int left, int right) {
        int l = left, r = right;
        Integer tmp = list[l];
        while (l != r) {
            while (l < r && list[r] >= tmp) --r;
            while (l < r && list[l] <= tmp) ++l;
            if (l < r) {
                Integer t = list[l];
                list[l] = list[r];
                list[r] = t;
            }
        }
        Integer t = list[l];
        list[l] = list[left];
        list[left] = t;
        return l;
    }

    public static void quickSort(Integer[] list, int left, int right) {
        if (left > right) return;
        int pivot = partition(list, left, right);
        quickSort(list, left, pivot - 1);
        quickSort(list, pivot + 1, right);
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        quickSort(list, 0, list.length - 1);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}