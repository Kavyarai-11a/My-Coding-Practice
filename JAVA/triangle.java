package Shape;
public class triangle
{
	double b;
	double h;
	
	public triangle(double b,double h)
	{
		this.b = b;
		this.h = h;
	}

	public double CalArea()
	{
		return 0.5*b*h;
	}
}