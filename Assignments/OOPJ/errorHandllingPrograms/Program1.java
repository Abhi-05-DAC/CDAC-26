//package errorHandllingPrograms;
//
//import java.util.Scanner;
//
//public class Program1 				//NumberChecking 
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner(System.in);
//		System.out.println("Enter the Number : ");
//		int num = sc.nextInt();
//		
//		try
//		{
//			if(num >=0 && num <=10)
//			{
//				throw new smallNumberException();
//			}
//			else if(num >=11 && num <=15)
//			{
//				throw new properNumberException();
//			}
//			else if(num >=16 && num <=20)
//			{
//				throw new greaterNumberException();
//			}
//			else
//			{
//				System.out.println("The Number is Out of Specific Range!");
//			}
//		}
//		
//		catch(smallNumberException | properNumberException | greaterNumberException e)
//		{
//			e.printStackTrace();
//		}
//	}
//}
//
//class smallNumberException extends Exception
//{
//    public smallNumberException()
//    {
//        super("Number is Small!");
//    }
//}
//
//class properNumberException extends Exception
//{
//    public properNumberException()
//    {
//        super("Number is in Proper Range!");
//    }
//}
//
//class greaterNumberException extends Exception
//{
//    public greaterNumberException()
//    {
//        super("Number is Greater!");
//    }
//}