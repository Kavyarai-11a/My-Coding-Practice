import java.util.ArrayList;

class StudentMarks {
    public static void main(String[] args) {

        ArrayList<Integer> marks = new ArrayList<>();

        marks.add(85);
        marks.add(90);
        marks.add(78);
        marks.add(92);
        marks.add(88);

        int total = 0;

        for (Integer mark : marks) {
            total += mark;
        }

        double average = (double) total / marks.size();

        System.out.println("Student Marks: " + marks);
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
    }
}

public class Wrraper_class {

    
}
