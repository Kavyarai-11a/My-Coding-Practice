// import java.util.Scanner;
// public class lecture7{
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         // String name = "Tony";
//         // String fullName = "Tony Kakar";
//         // String sentence = "I am a good person";
//         String name = sc.nextLine();
//         System.out.println("Your name is " + name);
//         sc.close();
//     }
// }

//CONCATINATION
// import java.util.Scanner;
// public class lecture7{
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         String Fname = sc.nextLine();
//         String Lname = sc.nextLine();
//         String Fullname = Fname + " " + Lname;

//         //Length;
//         System.out.println(Fullname.length());
        
//         //charAt
//         for(int i=0;i<Fullname.length();i++)
//         {
//             System.out.println(Fullname.charAt(i));
//         }
//         sc.close();
//     }
// }

//COMPARE LENGTH
// import java.util.Scanner;
// public class lecture7{
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         // String Fname = sc.nextLine();
//         // String Lname = sc.nextLine();

//         // if(Fname.compareTo(Lname) == 0){
//         //     System.out.println("Both are equal");
//         // }
//         // else
//         // {
//         //     System.out.println("Both are not equal");
//         // }
//         // sc.close();

//         //Here it will show both strings are not equal thats why we need compareTo function required
//         if(new String("Tony") == new String("Tony")){
//             System.out.println("Both are equal");
//         }
//         else
//         {
//             System.out.println("Both are not equal");
//         }
//     }
// }

//SUBSTRING
import java.util.Scanner;
public class lecture7{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String n = "My name is Tony";
        //substring(bed index,end index);
        String name = n.substring(11,n.length());
        System.out.print(name);

        //String are Immutable means u can't change a string ones it made
    }
}