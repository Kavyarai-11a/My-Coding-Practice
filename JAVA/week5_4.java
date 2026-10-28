import java.util.Scanner;

enum Evaluation{
    O,A_PLUS,A,B_PLUS,B
}

interface Evaluation{
    int calTotal();
    double calPer();
    Grade calgrade();
}

class Student{
    int id;
    String name;

    Student(int id,String name){
        this.id = id;
        this.name = name;
    }
}



