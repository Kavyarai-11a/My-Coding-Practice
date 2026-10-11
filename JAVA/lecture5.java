import java.util.Scanner;
public class lecture5 {
    // public static void myName(String name)
    // {
    //     System.out.println(name);
    //     return;
    // }

    // public static int sum(int a,int b)
    // {
    //     return a+b;
    // }

    // public static int mul(int a,int b)
    // {
    //     return a*b;
    // }

    // public static int factorialOfNum(int n)
    // {
    //     int fac = 1;
    //     for(int i=1;i<=n;i++)
    //     {
    //         fac *= i;
    //     }

    //     return fac;
    // }

    // public static double cirOfCircle(double r)
    // {
    //     return 2*3.14*r;
    // }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        // String name = sc.next();

        // myName(name);

        // double r = sc.nextDouble();
        // int b = sc.nextInt();

        //System.out.println(sum(a,b));
        // System.out.println(mul(a,b));

        // System.out.println(factorialOfNum(n));

        // System.out.println(cirOfCircle(r));

        int i=1;
        do
        {
            System.out.println("Infinite Loop");
        }
        while(i<=2);
        sc.close();
    }
}
