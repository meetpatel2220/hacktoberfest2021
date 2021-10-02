import java.util.Scanner;

// Time Complexity: O(n) rather than O(nlogn)
public class HeapSort {
	
	// To heapify a subtree rooted with node i which is 
    // an index in A[]. n is size of heap 
	static void MaxHeapify(int A[],int n,int i) {
		
		int largest = i;
		int l = 2*i+1;
		int r = 2*i+2;
		
		if(l < n  && A[l] > A[largest])
			largest = l;
		if(r < n  && A[r] > A[largest])
			largest = r;
		
		// If largest is not root
		if(largest != i) {
			
			int swap = A[i];
			A[i] = A[largest];
			A[largest] = swap;
			
			MaxHeapify(A,n,largest);
		}
	}
	
	static void heapSort(int A[],int n) {
		
		// Build a Max heap Tree
		for(int i=n/2-1;i>=0;i--) {
			MaxHeapify(A,n,i);
		}
		
		// Delete from Max Heap Tree
		for(int i=n-1;i>0;i--) {
			
			int temp = A[i];
			A[i] = A[0];
			A[0] = temp;
			
			MaxHeapify(A,i,0);
		}
	}

    static void printArr(int A[],int N) {
		
		System.out.print("Sorted Array: ");
		for(int i=0;i<N;i++) 
			System.out.print(A[i]+" ");
		
	}
	
	public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter size of Array: ");
		int N = sc.nextInt();
		
		int A[] = new int[N];
		
		
		for(int i=0;i<N;i++) {
			System.out.print("Enter data of array: ");
			A[i] = sc.nextInt();
		}
		
		heapSort(A,N);
		
		printArr(A,N);
		
		sc.close();

	}

}
