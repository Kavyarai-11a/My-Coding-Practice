// public class lecture8 {
//     public static void main(String args[])
//     {
//         StringBuilder sb = new StringBuilder("Tony");
//         System.out.println(sb);

//         //char at index 0
//         System.out.println(sb.charAt(0));

//         //set char at index 0
//         sb.setCharAt(0,'P');
//         System.out.println(sb);

//         //insert a value at index
//         sb.insert(0, 'S');
//         System.out.println(sb);

//         //delete the extra 
//         sb.delete(0,1);
//         System.out.println(sb);

//         sb.delete(2,3);
//         System.out.println(sb);

//         sb.append("h");//str = str + "e";
//         sb.append("e");
//         sb.append("l");
//         sb.append("l");
//         sb.append("o");
//         System.out.println(sb);

//     }
// }

//Inverse a string
public class lecture8 {
    public static void main(String args[])
    {
        StringBuilder sb = new StringBuilder("kavya");
        for(int i=0;i<sb.length()/2;i++)
        {
            int f = i;
            int b = sb.length() - 1 - i;
            
            char fchar = sb.charAt(f);
            char bchar = sb.charAt(b);

            sb.setCharAt(f,bchar);
            sb.setCharAt(b,fchar);
        }
        System.out.println(sb);
    }
}

