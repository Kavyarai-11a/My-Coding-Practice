import java.util.Scanner;
// public class lecture6 {
//     // public static void main(String[] args)
//     // {
//     //      int[] marks = new int[3];

//     //     //int marks[] = {97,98,95};
//     //     marks[0] = 97;
//     //     marks[1] = 98;
//     //     marks[2] = 95;
//     //     System.out.println(marks[0]);
//     //     System.out.println(marks[1]);
//     //     System.out.println(marks[2]);
//     // }
// }

// 2D ARRAY
//type[][] arrayName = new type[rows][columns];
//int[][] numbers = new int[3][5];

public class lecture6 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        int[][] arr = new int[rows][cols];
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        int target = sc.nextInt();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(arr[i][j] == target)
                {
                    System.out.println(arr[i][j]);
                    sc.close();
                    return;
                }
            }
        }
        sc.close();
    }
}