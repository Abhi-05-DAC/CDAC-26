//package assignment3;
//
//class Student
//{
//	String name;
//	int rollNo;
//	int marks;
//	
//	Student(String name , int rollNo , int marks)
//	{
//		this.name = name;
//		this.rollNo = rollNo;
//		this.marks = marks;
//	}
//	
//	char calculateGrade()
//	{
//		char Grade ;
//		if(marks >= 90 && marks <= 100)
//		{
//			Grade = 'A';
//		}
//		else if(marks >= 75 && marks <= 89)
//		{
//			Grade = 'B';
//		}
//		else if(marks >= 60 && marks <= 74)
//		{
//			Grade = 'C';
//		}
//		else if(marks >= 40 && marks <= 59)
//		{
//			Grade = 'D';
//		}
//		else
//		{
//			Grade = 'F';
//		}
//		return Grade;
//	}
//}
//
//public class Program13
//{
//	public static void main(String []args)
//	{
//		Student s1 = new Student("YASH" , 56 , 75);
//		Student s2 = new Student("OM" , 84 , 45);
//		Student s3 = new Student("YOGESH" , 35 , 30);
//		
//		s1.calculateGrade();
//		s2.calculateGrade();
//		s3.calculateGrade();
//		
//		System.out.println("Grade of " + s1.name + " is :" +s1.calculateGrade());
//		System.out.println("Grade of " + s2.name + " is :" +s2.calculateGrade());
//		System.out.println("Grade of " + s3.name + " is :" +s3.calculateGrade());
//		
//	}
//}