import java.util.Scanner;

enum Evaluation{
    O,A_PLUS,A,B_PLUS,B,F
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

    @Override;
    public int calTotal(){
        return m1,m2,m3;
    }

    @Override;
    public double calPer(){
        return calTotal()/3.0;
    }

    @Override;
    public Grade calgrade(){
        if(m1 < 35 || m2 < 35 || m3 < 35){
            return Grade.F
        }

        p = calPer();
        if(p >= 90) return Grade.O;
        else if(p >= 80) return Grade.A_PLUS;
        else if(p >= 70) return Grade.A;
        else if(p >= 60) return Grade.B_PLUS;
        else return Grade.B;
    }

    public void display(){

        Grade grade = calgrade();

        System.out.println(id);
        System.out.println(name);
        System.out.println(calTotal());
        System.out.printf("%.2f%n",calPer());
        System.out.println(grade);
        System.out.println(grade == Grade.F ? FAIL : PASS);
    }
}

public class main

