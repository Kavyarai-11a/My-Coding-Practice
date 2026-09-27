import java.util.Scanner;
import Shape.circle;
import Shape.triangle;

public class CalcAr
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		double r = sc.nextDouble();
		double b = sc.nextDouble();
		double h = sc.nextDouble();
		
		circle c = new circle(r);
		triangle t = new triangle(b,h);

		System.out.printf("Circle Area: %.2f%n",
                          c.CalArea());

        	System.out.printf("Triangle Area: %.2f%n",
                          t.CalArea());
		
		sc.close();
	}
}