class NumOfPara {

    void add(int a){
        System.out.println(a);
        
    }
    void add(int a,int b){
        System.out.println(a + b);
        
    }
    void add(int a,int b,int c){
        System.out.println(a + b + c);
    }
}

class DiffPara {
    
    void show(int x) {
        System.out.println(x);
    }
    void show(double x){
        System.out.println(x);
    }
    void show(String x){
        System.out.println(x);
    }

}

class SwichPara {
    void change(int a,double b) {
        System.out.println(a + b);
    }
    void change(double b,int a) {
        System.out.println(a + b);
    }

}
public class overloading {
    public static void main(String[] args) {
        NumOfPara n = new NumOfPara();
        n.add(1);
        n.add(1,2);
        n.add(1,2,3);
        
        DiffPara p = new DiffPara();
        p.show(8);
        p.show(8.8);
        p.show("K");

        SwichPara w = new SwichPara();
        w.change(1,0.5);
        w.change(0.5,1);

    }
}
