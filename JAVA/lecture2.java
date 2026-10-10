import java.util.Scanner;
public class lecture2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // int age = sc.nextInt();

        // if(age > 18)
        // {
        //     System.out.println("Adult");
        // }
        // else
        // {
        //     System.out.println("Child");
        // }


        // int a = sc.nextInt();
        // int b = sc.nextInt();

        // if(a%2 == 0)
        // {
        //     System.out.println("Even");
        // }
        // else
        //     System.out.println("Odd");
        
        // if(a>b)
        //     System.out.println(a + " is greater than " + b);

        // else if(b>a)
        //     System.out.println(b + " is greater than " + a);
        // else
        //     System.out.println(a + " and " + b + " both are equal");

        int c = sc.nextInt();

        switch(c)
        {
            case 1:
                System.out.println("Hello");
                break;

            case 2:
                System.out.println("Namaste");
                break;

            case 3:
                System.out.println("Bonjunga");
                break;

            default: 
                System.out.println("Invalid Input");
        }
        sc.close();

    }
}
