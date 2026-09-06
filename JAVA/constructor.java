class Student {
    String srn;
    String name ;
    int sem;
    double cgpa;

    Student(String srn,String name,int sem,double cgpa) {
        this.srn = srn;
        this.name = name;
        this.sem = sem;
        this.cgpa = cgpa;
    }

    void display() {
        System.out.println("Srn : " + srn);
        System.out.println("Name : " + name);
        System.out.println("Sem : " + sem);
        System.out.println("Cgpa : " + cgpa);
    }
}

public class constructor {
    public static void main(String args[]) {
        Student s1 = new Student("R25EF101","Aman",3,9.5);
        Student s2 = new Student("R25EF102","Amrita",3,9.8);
        Student s3 = new Student("R25EF103","Apoorva",3,9.95);

        s1.display();
        s2.display();
        s3.display();
    }
}