class Student {
	int rollNo;
	String name;
	int room;
	
	void display() {
	System.out.println("Roll No = " + rollNo);
	System.out.println("Name = " + name);
	System.out.println("Class = " + room);
	}
}

public class StudentInfo_1 {
	public static void main(String[] args) {
	Student s1 = new Student();
	s1.rollNo = 101;
	s1.name = "Alfa";
	s1.room = 5th;
	
	s1.display();
	}
}