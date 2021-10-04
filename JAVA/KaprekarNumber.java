import java.util.Scanner;
class Kaprekar
{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int sq, temp, r, q;
        int c=0;
        System.out.println("Enter a number");
        int n=sc.nextInt();
        temp=n;
        sq=n*n;
        while(n!=0){
            c++;
            n=n/10;
        }
        r=sq%((int)Math.pow(10,c));
        q=sq/((int)Math.pow(10,c));
        if((r+q)==temp)
        System.out.println(temp+" is a Kaprekar Number");
        else
        System.out.println(temp+" is not a Kaprekar Number");
    }
}