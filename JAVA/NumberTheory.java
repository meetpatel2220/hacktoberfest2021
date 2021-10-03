import java.io.*;
import java.util.*;

public class MathCP {
	
	static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	
	static long MOD = 1000000007; 
	static int MAX = 500;
	static int size = 1000007;
	static int primeArray[] = new int[size];

	public static void main(String[] args) {
		
		FastReader sc = new FastReader(); 
       int n = sc.nextInt();
       prime();
		for(int i=0;i<n;i++) {
			System.out.print(primeArray[i]+" ");
		}
		System.out.println();
	}
	
	static void prime() {
		boolean isPrime[] = new boolean[size+1];
		Arrays.fill(isPrime, true);
		for(int i=2;i*i<=size;i++) {
			if(isPrime[i] == true) {
				for(int j=i*i;j<=size;j+=i) {
					isPrime[j] = false;
				}
			}
		}
		int k = 0;
		for(int i=2;i<size;i++) {
			if(isPrime[i] == true) {
				primeArray[k++] = i;
			}
		}
	}
	
	static int gcd(int a,int b) {
		if(b == 0) return a;
		else return gcd(b,a%b);
	}
	
	static int lcm(int a,int b) {
		return (a*b)/gcd(a,b);
	}
	
	static long fastPower(long num,long power,long n) {
		long result = 1;
		while(power>0) {
			if((power&1) == 1) {
				result = ((result%n) * (num%n))%n ;
			}
			num = ((num%n)*(num%n))%n;
			power = power >> 1;
		}
		return result;
	}
	
	static void factorial(long n) {
		int res[] = new int[MAX];
		int res_size = 1;
		res[0] = res[1] = 1;
		for(int i=2;i<=n;i++) {
			res_size = multiply(i,res,res_size);
		}
		for(int i=res_size-1;i>=0;i--) {
			System.out.print(res[i]);
		}
		System.out.println();
	}
	
//	This function is used in factorial function
	static int multiply(int x,int res[],int size) {
		int carry = 0;
		for(int i=0;i<size;i++) {
			int product = res[i]*x + carry;
			res[i] = product % 10;
			carry = product / 10;
		}
		while(carry>0) {
			res[size] = carry;
			carry = carry / 10;
			size++;
		}
		return size;
	}
	
//	Logic : First-> calculate no. of 2s and 5s from 1 to n
//	        Second-> As there are always 2s > 5s so we have to  calculate no. of 5s from 1 to n
//			Third-> As numbers also contain 25,125,625,... which contains no. of 5s more than one in single no.
	static long trailingZeros(long n) {
		long res = 0;
		for(int i=5;i<=n;i*=5) {
			res += n/i;
		}
		return res;
	}
	
	static int fibonacci(int n) {
		int a = 0,b = 1,res = 1;
		System.out.print(a+" ");
		if(n >= 2) System.out.print(b+" ");
		for(int i=3;i<=n;i++) {
			int c = a+b;
			a = b;
			b = c;
			System.out.print(c+" ");
			res += c;
		}
		System.out.println();
		return res;
//		return c; -> for nth fibonacci number
	}
	
	static boolean isPalindrome(long n) {
		long rev = 0;
		long temp = n;
		while(temp>0) {
			rev = rev*10 + temp%10;
			temp = temp/10;
		}
		return rev == n;
	}
	
	static void divisors(int n) {
		for(int i=1;i<Math.sqrt(n);i++) {
			if(n%i == 0) {
				if(n/i == i) System.out.print(i+" ");
				else System.out.print(i+" "+n/i+" ");
			}
		}
	}
//	Formula used for catalan number : (2nCn/(n+1))
	static long catalanNo(int n) {
		long c = binomialCoff(2*n,n);
		return c/(n+1);
	}
	
//	This function is used for calculate catalan number
	static long binomialCoff(int n,int k) {
		long res = 1;
//		C(n,k) = C(n,n-k)
		if(k > n-k) {
			k = n-k;
		}
		
		for(int i=0;i<k;i++) {
			res *= (n-i);
			res /= (i+1);
		}
		return res;
	}
}
