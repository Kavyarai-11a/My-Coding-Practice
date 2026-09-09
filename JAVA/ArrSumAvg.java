import java.util.Scanner;
class ArrSumAvg {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.print("Enter size of array : ");
		n = sc.nextInt();

		int[] arr = new int[n];

		int sum = 0;
		System.out.println("Enter " + n + " elements");
		for(int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
		}
		
		double avg = sum/n;
		
		System.out.println("Sum = " + sum);
		System.out.println("Average = " + avg);

		sc.close();
	}
}