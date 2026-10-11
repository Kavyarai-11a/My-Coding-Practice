public class lecture4 {
    public static void main(String[] args)
    {
        // for(int i=0;i<5;i++)
        // {
        //     for(int j=0;j<5;j++)
        //     {
        //         System.out.print("*");
        //     }
        //     System.out.print("\n");
        // }
        // for(int j=0;j<5;j++)
        // {
        //     System.out.print("*");
        // }
        // System.out.print("\n");
        // for(int i=0;i<2;i++)
        // {
        //     System.out.print("*");
        //     for(int k=0;k<3;k++)
        //     {
        //         System.out.print(" ");
        //     }
        //     System.out.print("*");
        //     System.out.print("\n");
        // }
        // //System.out.print("\n");
        // for(int j=0;j<5;j++)
        // {
        //     System.out.print("*");
        // }


        // for(int i=0;i<4;i++)
        // {
        //     for(int j=1;j<=5;j++)
        //     {
        //         if(j == 1 || i == 0 || j == 5 || i == 3)
        //         {
        //             System.out.print("*");
        //         } else {
        //             System.out.print(" ");
        //         }
        //     }
        //     System.out.print("\n");
        // }


        // for(int i=1;i<=4;i++)
        // {
        //     for(int j=0;j<i;j++)
        //     {
        //         System.out.print("*");
        //     }
        //     System.out.print("\n");
        // }


        // for(int i=4;i>0;i--)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        for(int i=4;i>0;i--)
        {
            for(int j=1;j<i;j++)
            {
                System.out.print(" ");
            }
            for(int k=0;k<4;k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
