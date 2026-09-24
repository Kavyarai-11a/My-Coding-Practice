import Stud.Cal;
import Stud.Stu;
public class S1 {
    public static void main(String[] args)
    {
        Stu s = new Stu();
        Cal c = new Cal();
        System.out.println("Addition = " + c.add(20,10));
        System.out.println("Subraction = " + c.sub(20,10));
        s.display();
    }
}
