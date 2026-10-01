interface Shape 
{
    double area();
}

class Circle implements Shape 
{

    double radius;
    Circle(double radius) 
  {
        this.radius = radius;
    }

    public double area() 
 {
        return Math.PI * radius * radius;
    }
}

class Rectangle implements Shape 
{

    double length, width;

    Rectangle(double length, double width) 
{
        this.length = length;
        this.width = width;
    }

    public double area() 
  {
        return length * width;
    }
}

class Triangle implements Shape 
{

    double base, height;

    Triangle(double base, double height) 
{
        this.base = base;
        this.height = height;
    }

    public double area() 
{
        return 0.5 * base * height;
    }
}

public class Main 
{
    public static void main(String[] args) 
{

        Shape[] shapes = 
     {
            new Circle(5),
            new Rectangle(10, 5),
            new Triangle(8, 6)
        };

        for (Shape s : shapes) {
            System.out.printf("Area = %.2f%n", s.area());
        }
    }
}
