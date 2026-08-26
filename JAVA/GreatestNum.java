import java.util.Scanner;
public class GreatestNum {
	public static void main(String[] args) {
	
	Scanner sc = new Scanner(System.in);

	System.out.print("Enter first num : ");
	int a = sc.nextInt();
	System.out.print("Enter Second num : ");
	int b = sc.nextInt();

	if(a>b) {
	System.out.println("Greatest Number = " + a);
	}
	else if(b>a) {
	System.out.println("Greatest Number = " + b);
	}
	else {
	System.out.println("Both numbers are equal");
	}

	sc.close();
	}
}