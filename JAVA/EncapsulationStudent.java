class Student {
    private double marks = 100;
    String name;
    String srn;

    Student(String name,String srn) {
        this.name = name;
        this.srn = srn;
    }
    void display()
    {
        System.out.println("Name = " + name);
        System.out.println("Srn = " + srn);
        System.out.println("Marks : " + marks);
    }
}
public class EncapsulationStudent {
    public static void main(String[] args) {
        Student s = new Student("Abcd","R25");
        s.display();
    }
}
