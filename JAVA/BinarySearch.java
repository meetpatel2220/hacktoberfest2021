public class BinarySearch {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int i, num, n, c=0, pos=0;
        Scanner scan = new Scanner(System.in);
       
        System.out.print("Enter Array Size : ");
        n = scan.nextInt();
       
        System.out.print("Enter Array Elements : ");
        for(i=0; i<n; i++)
        {
            arr[i] = scan.nextInt();
        }
       
        System.out.print("Enter the Number to be Search...");
        num = scan.nextInt();
       
        int ans = binary_search(arr, num);
        System.out.println(ans);
    }

    static int binary_search(int[] arr, int target) {
        int s = 0;
        int e = arr.length - 1;
        while (s <= e) {
            int mid = s + ((e - s) / 2);
            if (target < arr[mid]) {
                e = mid - 1;
            } else if (target > arr[mid]) {
                s = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
}
