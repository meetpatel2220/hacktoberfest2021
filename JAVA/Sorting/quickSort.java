import java.util.Scanner;

public class quickSort {
	
public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
    int n;
    System.out.print("Enter the number of elements in the array: ");
    n = scanner.nextInt();
    int[] arr = new int[n + 1];
    System.out.print("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
		arr[i] = scanner.nextInt();
    }
    arr[n] = Integer.MAX_VALUE;
    quickSort(arr, 0, arr.length - 1);
	System.out.println("Sorted Array: ");
    for (int i = 0; i < arr.length - 1; i++)
    System.out.print(arr[i] + " ");
}

public static void quickSort(int[] arr, int l, int r) {
	if (l < r)
    {
        int j = partition(arr, l, r);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, r);
    }
}

public static int partition(int[] arr, int l, int r) {
    int pivot = arr[l];
    int i = l, j = r;
    while (i < j) {
        do {
            i++;
        } while (arr[i] <= pivot);
        do {
            j--;
        } while (arr[j] >  pivot);
        if (i < j) {
            swap(i, j, arr);
        }
    }
    swap(l, j, arr);
    return j;
}

public static void swap(int i, int j, int[] arr) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
}