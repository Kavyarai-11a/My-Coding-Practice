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

    // public static void checkNum(int[] arr,int n)
    // {
    //     Scanner sc = new Scanner(System.in);
    //     int pos = 0,neg = 0,zero = 0;
    //     for(int i=0;i<n;i++)
    //     {
    //         arr[i] = sc.nextInt();
    //     }

    //     for(int i=0;i<n;i++)
    //     {
            
    //         if(arr[i] > 0){
    //             pos++;
    //         } else if(arr[i] < 0){
    //             neg++;
    //         } else{
    //             zero++;
    //         }
    //     }
        
    //     System.out.println("Total positive num : "+pos);
    //     System.out.println("Total negative num : "+neg);
    //     System.out.println("Total zeros : "+zero);
    //     return;

    public static void powerNum(int x,int n)
    {
        int pow = 1;
        for(int i=0;i<n;i++)
        {
            pow *= x;
        }

        System.out.println(pow);
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        // String name = sc.next();

        // myName(name);

        // double r = sc.nextDouble();
        // System.out.print("Enter size of array : ");
        int n = sc.nextInt();
        int x = sc.nextInt();
        powerNum(x,n);
        // int[] arr = new int[n];
        //System.out.println(sum(a,b));
        // System.out.println(mul(a,b));

        // System.out.println(factorialOfNum(n));

        // System.out.println(cirOfCircle(r));

        // int i=1;
        // do
        // {
        //     System.out.println("Infinite Loop");
        // }
        // while(i<=2);

        // checkNum(arr,n);
        sc.close();
    }
}
