import java.util.Scanner;
public class Array {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter the size of array: ");
	int n = sc.nextInt();
	int[] arr = new int[n];
	System.out.println("Enter" + n + "elements of array: ");
	for(int i=0;i<n;i++) {
	System.out.print("element at index " + i + ":" );
	arr[i] = sc.nextInt();
	}
	System.out.println("Entered elements of array: ");
	for(int i=0;i<n;i++) {
	System.out.println("Element at index " + i + ":" + arr[i]);
	}
	}
}