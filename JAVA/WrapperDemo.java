import java.util.Scanner;
public class WrapperDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter marks of student 1 : ");
        String s1 = sc.nextLine();

        System.out.print("Enter marks of student 2 : ");
        String s2 = sc.nextLine();

        System.out.print("Enter marks of student 3 : ");
        String s3 = sc.nextLine();

        Integer i1 = Integer.valueOf(s1);
        Integer i2 = Integer.valueOf(s2);
        Integer i3 = Integer.valueOf(s3);

        int total = i1 + i2 + i3;
        double avg = total/(double)3;

        System.out.println("Marks 1 : " + i1);
        System.out.println("Marks 2 : " + i2);
        System.out.println("Marks 3 : " + i3);
        System.out.println("Total Marks : " + total);
        System.out.println("Avg Marks : " + avg);
        
        sc.close();
    }
}