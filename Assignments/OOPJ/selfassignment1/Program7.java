//package selfassignment1;
//
//class Shape
//{
//	public void displayShape()
//	{
//		System.out.println("This is a Shape");
//	}
//}
//
//class Rectangle extends Shape
//{
//	int length;
//	int breadth;
//	Rectangle(int length , int breadth)
//	{
//		this.length = length;
//		this.breadth = breadth;
//	}
//	
//	public void calculateRectangleArea()
//	{
//		int area = length * breadth;
//		System.out.println("The Area of the Rectangle is : "+area);
//	}
//}
//
//class Circle extends Shape
//{
//	double radius;
//	
//	Circle(double radius)
//	{
//		this.radius = radius;
//	}
//	
//	
//	public void calculateCircleArea()
//	{
//		double area = 3.14 * radius * radius;
//		System.out.println("The area of the Circle is : "+area);
//	}
//}
//
//
//public class Program7 
//{
//	public static void main(String[]args)
//	{
//		Rectangle rect = new Rectangle(10 , 5);
//		
//		rect.displayShape();
//		rect.calculateRectangleArea();
//		
//		Circle cir = new Circle(15);
//		
//		cir.displayShape();
//		cir.calculateCircleArea();	
//	}
//}
