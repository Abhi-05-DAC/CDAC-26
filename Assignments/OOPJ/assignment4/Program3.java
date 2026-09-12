package assignment4;

class Rectangle
{
	int length;
	int breadth;
	
	
	void Area()
	{
		 System.out.println("Area of Rectangle : " + (length * breadth));
	}
	
	void Perimeter()
	{
		System.out.println("Perimeter of Rectangle : " + (2 * (length + breadth)));
	}
	
	Rectangle(int length , int breadth)
	{
		this.length = length;
		this.breadth = breadth;
	}
}


class Square extends Rectangle
{
	Square(int side)
	{
		super (side , side);
	}
}

public class Program3
{
	public static void main(String[]args)
	{
		Rectangle rc = new Rectangle( 45 ,12);
		
		Square sq = new Square( 8);
		
		System.out.println("=====Rectangle=====");
		rc.Area();
		rc.Perimeter();
		
		System.out.println("=====Square=====");
		sq.Area();
		sq.Perimeter();
	}
}

