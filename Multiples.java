public class Multiples {

	public static void main(String[] args){

		System.out.print("Multiples of 3 and 7 below 100 are: ");
		System.out.println("\nSum of the above displayed multiples: " + sumOfMultiples());

	}

	static int sumOfMultiples() {
		int result = 0, m1 = 3, m2 = 7;
		// To get all numbers that are smaller than
		// or equal to 100 and multiples of 3 and 7
		for (int i = 1; i < 100; i++) {
			if (i % m1 == 0 || i % m2 == 0) {
				result += i; // To get the sum of the multiples

				System.out.print(i + " ");
			}
		}
		return result;
	}
}
