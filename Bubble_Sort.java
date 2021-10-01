import java.util.*;

public class Bubble_Sort {

    // Best Case - O(N) , Average/Worst Case - O(N*N)
    public static void bubbleSort_optimised(int[] arr) {
        int n = arr.length;
        for (int li = n - 1; li > 0; li--) {
            boolean isSwapDone = false;
            for (int itr = 1; itr <= li; itr++) {
                if (isSmaller(arr, itr, itr - 1)) {
                    swap(arr, itr, itr - 1);
                    isSwapDone = true;
                }
            }
            if (!isSwapDone)
                break;
        }
    }

    // Best Case/Average/Worst Case - O(N*N)
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int li = n - 1; li > 0; li--) {
            for (int itr = 1; itr <= li; itr++) {
                if (isSmaller(arr, itr, itr - 1))
                    swap(arr, itr, itr - 1);
            }
        }
    }

    // used for swapping ith and jth elements of array
    public static void swap(int[] arr, int i, int j) {
        System.out.println("Swapping " + arr[i] + " and " + arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // return true if ith element is smaller than jth element
    public static boolean isSmaller(int[] arr, int i, int j) {
        System.out.println("Comparing " + arr[i] + " and " + arr[j]);
        if (arr[i] < arr[j]) {
            return true;
        } else {
            return false;
        }
    }

    public static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        bubbleSort(arr);
        print(arr);
    }

}
