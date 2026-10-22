import java.util.Scanner;
class Employee {
    int id;
    String name;

    Employee(int id,String name)
    {
        this.id = id;
        this.name = name;
    }
}

class Salary extends Employee{
    double basic;

    Salary(int id,String name,double basic)
    {
        super(id,name);
        this.basic = basic;
    }
}

class Payroll extends Salary {
    Payroll(int id,String name,double basic){
        super(id,name,basic);
    }
    double CalGrossSalary(){
        return basic + (0.20 * basic) + (0.10 * basic);
    }

    void display(){
        System.out.println(id);
        System.out.println(name);
        System.out.printf("%.2f%n",basic);
        System.out.printf("%.2f%n",CalGrossSalary());

    }
}

public class week5_1 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int id = sc.nextInt();
        sc.nextLine();
        String name = sc.nextLine();
        double basic = sc.nextDouble();

        Payroll p  = new Payroll(id,name,basic);
        p.display();

        sc.close();
    }
    
}