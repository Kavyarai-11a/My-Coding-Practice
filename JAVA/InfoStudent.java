class Student {
	int rollNo;
	String name;
	float marks;

	void DisplayInfo(){
	System.out.println("Roll No : " + rollNo);
	System.out.println("Name : " + name);
	System.out.println("Marks : " + marks);
	}
}

public class InfoStudent {
	public static void main(String[] args) {

	Student s1 = new Student();
	s1.rollNo = 101;
	s1.name = "Kavya";
	s1.marks = 100;

	s1.DisplayInfo();
	}
}

