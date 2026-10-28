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

class Marks extends Student{
    int m1;
    int m2;
    int m3;

    Marks(int id,String name,int m1,int m2,int m3){
        super(id,name);
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }
}

class Result extends Marks implements Evaluation{

    Result(int id,String name,int m1,int m2,int m3){
        super(id,name,m1,m2,m3);
    }
    
}

