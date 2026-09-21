//package errorHandllingPrograms;
//
//import java.util.Scanner;
//
//class NameException extends Exception
//{
//	public NameException(String message)
//	{
//		super(message);
//	}
//}
//
//class AgeException extends Exception
//{
//	public AgeException(String message)
//	{
//		super(message);
//	}
//}
//
//
//class Student
//{
//	int Id;
//	String Name;
//	int Age;
//	
//	public Student(int Id , String Name , int Age)
//	{
//		this.Id = Id;
//		this.Name = Name;
//		this.Age = Age;
//	}
//	
//	public void validateStudent() throws AgeException , NameException
//	{
//		for(int i = 0; i < Name.length() ; i++)
//		{
//			char ch = Name.charAt(i);
//			
//			if(Character.isDigit(ch))
//			{
//				throw new NameException("Name Should not Contain Numbers ");
//			}
//		}
//		
//		if(Age < 18)
//		{
//			throw new AgeException("Age should be 18 or above.");
//		}
//		
//		 System.out.println("Student details are valid.");
//	}
//	
//	public void display()
//	{
//		System.out.println("Student ID :" + Id);
//		System.out.println("Student Name :" +Name);
//		System.out.println("Student Age :" +Age);
//	}
//}
//
//public class Program2 
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner(System.in);
//		
//		System.out.println("Enter the Student Id :");
//		int Id = sc.nextInt();
//		
//		sc.nextLine();
//		
//		System.out.println("Enter the Student Name :");
//		String Name = sc.nextLine();
//		
//		
//		System.out.println("Enter the Student Age :");
//		int Age = sc.nextInt();
//		
//		
//		Student s = new Student(Id , Name , Age);
//		
//		try
//		{
//			s.validateStudent();
//			s.display();
//		}
//		
//		catch(NameException e)
//		{
//			System.out.println("Name Exception: " + e.getMessage());
//		}
//		
//		catch(AgeException e)
//		{
//			System.out.println("Age Exception: " + e.getMessage());
//		}
//		finally
//		{
//			 System.out.println("\nFinally block executed.");
//	         sc.close();
//		}
//	}
//}
