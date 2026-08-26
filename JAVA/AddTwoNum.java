import java.util.Scanner;
public class AddTwoNum {
	public static void main(String[] args) {

	Scanner sc = new Scanner(System.in);
	
	System.out.print("Enter first num: ");
	int a = sc.nextInt();
	System.out.print("Enter second num: ");
	int b = sc.nextInt();

	int sum = a + b;
	
	System.out.println("Sum = " + sum);
	sc.close();
	}
}