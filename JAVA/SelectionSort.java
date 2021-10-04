import java.util.Scanner;  
  
public class SelectSort  
{  
   public static void main(String args[])  
   {  
       int size, a, b, t;  
       int arr[] = new int[50];  
       Scanner scan = new Scanner(System.in);  
         
       System.out.print("Enter Array Size : ");  
       size = scan.nextInt();  
         
       System.out.print("Enter Array Elements : ");  
       for(a=0; a<size; a++)  
       {  
           arr[a] = scan.nextInt();  //taking the array inputs and storing it to array indexes
       }  
         
       System.out.print("Sorting Array using Selection Sort Technique..\n");  
       for(a=0; a<size; a++)  //iteration through first for loop
       {  
           for(b=a+1; b<size; b++)  //iterating through the second for loop
           {  
               if(arr[a] > arr[b])  //when the number in ath position is greater than number in bth position 
               {  
                   t = arr[a];  //storing the number in ath position and storing it to t
                   arr[a] = arr[b];  // storing the number of bth position to ath position
                   arr[b] = t;  // storing the number t in bth position
               }  
           }  
       }  
         
       System.out.print("Now the Array after Sorting is :\n");  
       for(a=0; a<size; a++)  
       {  
           System.out.print(arr[a]+ "  ");  
       }  
   }  
}