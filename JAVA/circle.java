package Shape;
public class circle {
	double r;
	
	public circle(double r)
	{
		this.r = r;
	}

	public double CalArea()
	{
		return Math.PI*r*r;
	}
}
