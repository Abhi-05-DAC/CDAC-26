//package errorHandllingPrograms;
//import java.util.Scanner;
//
//public class Student
//{
//	int StudentId;
//	String StudentName;
//	int StudentAge;
//	
//	public Student(int StudentId , String StudentName , int StudentAge)
//	{
//		this.StudentId = StudentId;
//		this.StudentName = StudentName;
//		this.StudentAge = StudentAge;
//	}
//	
//	public void acceptData()throws NameException , AgeException
//	{
//		if(StudentName.length() < 5)
//		{
//			throw new NameException();
//		}
//		
//		else if(StudentAge < 18)
//		{
//			throw new AgeException();
//		}
//	}
//	
//public static void main(String []args)
//{
//	Scanner sc = new Scanner(System.in);
//	
//	System.out.println("Enter the Student ID : ");
//	int StudentId = sc.nextInt();
//	
//	sc.nextLine();
//	System.out.println("Enter the Student Name : ");
//	String StudentName = sc.nextLine();
//	
//	System.out.println("Enter the Age : ");
//	int StudentAge = sc.nextInt();
//	
//	try
//	{
//		Student s = new Student(StudentId , StudentName , StudentAge);
//		
//		s.acceptData();
//		
//		s.displayData();
//	}
//	catch(NameException | AgeException e)
//	{
//		e.printStackTrace();	
//	}
//	sc.close();
//}
//public void displayData()
//{
//	System.out.println("==========Student Details==========");
//	
//	System.out.println("Studemt Id   :"+StudentId);
//	
//	System.out.println("Student Name :"+StudentName);
//	
//	System.out.println("Age          :"+StudentAge);
//}
//
//}
//
//class NameException extends Exception
//{
//	public NameException()
//	{
//		super("Name is Short !");
//	}
//}
//
//class AgeException extends Exception
//{
//	public AgeException()
//	{
//		super("Age is Below 18 !");
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
