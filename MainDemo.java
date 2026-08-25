import java.util.Scanner;
class StudentD {

	int rollNo;
	String name;
	float marks;
	
	void ReadInfo(Scanner sc) {

	System.out.print("Enter RollNo: ");
	rollNo = sc.nextInt();
	sc.nextLine();
	System.out.print("Enter Name: ");
	name = sc.nextLine();
	System.out.print("Enter Marks: ");
	marks = sc.nextFloat();
	}

	void PrintInfo() {
	System.out.println("Roll No: " + rollNo);
	System.out.println("Name: " + name);
	System.out.println("Marks: " +marks);
	}
}

public class MainDemo {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	StudentD s1 = new StudentD();
	StudentD s2 = new StudentD();
	StudentD s3 = new StudentD();

	s1.ReadInfo(sc);
	s2.ReadInfo(sc);
	s3.ReadInfo(sc);

	System.out.print("\n");
	s1.PrintInfo();
	s2.PrintInfo();
	s3.PrintInfo();

	sc.close();
	}
}
	