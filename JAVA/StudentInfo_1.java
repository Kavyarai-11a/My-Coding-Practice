import java.util.Scanner;
class StudentInfo_1 {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter a number : ");
	int a = sc.nextInt();
	boolean prime = true;
	if(a <= 1)  {
	prime = false;
	}
	for(int i=2;i*i<=a;i++)
	{
		if(a%i == 0) {
		prime = false;
		break;
		}
	}
	if(prime) {
	System.out.println(a + " is prime");
	}
	else {
	System.out.println(a + " is not prime");
	}
	sc.close();
	}
}
