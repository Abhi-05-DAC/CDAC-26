//package assignments6;
//
//import java.util.Scanner;
//
//class ComplexNumber
//{
//	int num1;
//	int num2;
//	
//	public void setNum1(int num1)
//	{
//		this.num1 = num1;
//	}
//	
//	public int getNum1()
//	{
//		return num1;
//	}
//	
//	public void setNum2(int num2)
//	{
//		this.num2 = num2;
//	}
//	
//	public int getNum2()
//	{
//		return num2;
//	}
//	
//	public int computeComplexNumbe()
//	{
//		return num1 * num2;
//	}
//}
//
//public class Program8
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner (System.in);
//		
//		ComplexNumber arr[] = new ComplexNumber[5];
//		
//		for(int i = 0; i < 5; i++)
//		{
//			arr[i] = new ComplexNumber();
//			System.out.println("Enter details for ComplexNumber " + (i + 1));
//			
//			System.out.print("Enter number1: ");
//            int num1 = sc.nextInt();
//            
//            System.out.print("Enter number2: ");
//            int num2 = sc.nextInt();
//            
//            arr[i].setNum1(num1);
//            arr[i].setNum2(num2);
//		}
//		
//		System.out.println("\nResults:");
//        
//        for (int i = 0; i < 5; i++)
//        {
//            System.out.println(
//                arr[i].getNum1() + " * " +
//                arr[i].getNum2() + " = " +
//                arr[i].computeComplexNumbe()
//            );
//        }
//
//        sc.close();
//		
//	}
//}
