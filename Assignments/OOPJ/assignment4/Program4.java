package assignment4;

class Shape
{
	void Shape()
	{
		System.out.println("This is Shape. ");
	}
}

class Rectangle extends Shape
{
	void Rectangle()
	{
		System.out.println("This is rectangular shape.");
	}
}

class Circle extends Shape
{
	void Circle()
	{
		System.out.println("This is circular shape.");
	}
}

class Square extends Rectangle
{
	void Square()
	{
		System.out.println("Square is Rectangle.");
	}
}


public class Program4
{
	public static void main(String[]args)
	{
		Square sq = new Square();
		
		sq.Shape();
		
		sq.Rectangle();
	}
}
