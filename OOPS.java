//https://chatgpt.com/share/6a7f5bb6-7c84-83ee-b09f-d29c73084030
//Access the link for explanation of this code
class Pen {
    String color;
    String type;
    public void write()
    {
        System.out.println("writing something");
    }
    public void printColor() {
        System.out.println(this.color); //this is a keyword use to tell the color or any thing of object which call this funs.
    }
}

public class OOPS {
    public static void main(String args[]) {
        Pen pen1 = new Pen(); //new is a java key use to creat a new object.
        pen1.color = "blue";
        pen1.type = "gel";

        Pen pen2 = new Pen();
        pen2.color = "black";
        pen2.type = "ballpoint";

        pen1.printColor();
        pen2.printColor();
    }
}
