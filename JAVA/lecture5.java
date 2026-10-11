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
    public static int mul(int a,int b)
    {
        return a*b;
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        // String name = sc.next();

        // myName(name);

        int a = sc.nextInt();
        int b = sc.nextInt();

        //System.out.println(sum(a,b));
        System.out.println(mul(a,b));
        sc.close();
    }
}
