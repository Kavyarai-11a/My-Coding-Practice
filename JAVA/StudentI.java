import java.util.Scanner;
class Person {
	String name;

	Person(String name) {
		this.name = name;
	}
}

class Student extends Person {
	private int rollNo;
	private double marks;

	Student(String name,int rollNo,double marks) {
		super(name);
		this.rollNo = rollNo;
		this.marks = marks;
	}

	void display(String name,int rollNo,double marks) {
		System.out.println("Student Details");
		System.out.println("Name = " + name);
		System.out.println("RollNo = " + rollNo);
		System.out.println("Marks = " + marks);
	}
}

public class StudentI {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter name of Student : ");
		String name = sc.nextLine();
		System.out.print("Enter rollNo of Student : ");
		int rollNo = sc.nextInt();
		System.out.print("Enter marks of Student : ");
		double marks = sc.nextDouble();

		Student s = new Student(name,rollNo,marks);
		
		s.display(name,rollNo,marks);

		sc.close();
	}
}
