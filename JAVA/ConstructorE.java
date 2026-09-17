import java.util.Scanner;
class Employee {

    double Salary;

    Employee(double Salary) {
        this.Salary = Salary;
    }

    void display() {
        System.out.println("Salary = " + Salary);
    }
}

public class ConstructorE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Employee e = new Employee(100000);

        e.display();

        sc.close();
    }
}