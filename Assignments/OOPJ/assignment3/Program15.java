//package assignment3;
//
//class Employee
//{
//	String name; 
//	float salary;
//	int rating;
//	  
//	Employee(String name , float salary , int rating)
//	{
//		this.name = name;
//		this.salary = salary;
//		this.rating = rating;
//	}
//	
//	float incrementSalary()
//	{
//		if(rating >= 9)
//		{
//			salary = salary + (salary * 20 / 100);
//		}
//		else if(rating >= 7)
//		{
//			salary = salary +(salary * 10) / 100;
//		}
//		else if(rating >= 5)
//		{
//			salary = salary +(salary * 5) / 100;
//		}
//		else
//		{
//			System.out.println("DIWALI KO MILO !!!");
//		}
//		return salary;
//	}
//}
//
//public class Program15
//{
//	public static void main(String[]args)
//	{
//		Employee e1 = new Employee("KIRAN" , 18000 , 9);
//		
//		float OriginalSalary = e1.salary;
//		
//		float FinalSalary = e1.incrementSalary();
//		
//		float increment = FinalSalary - OriginalSalary;
//		
//		System.out.println("Employee Name : "+e1.name);
//		System.out.println("Old Salary : "+OriginalSalary);
//		System.out.println("Rating : "+e1.rating);
//		System.out.println("Increment : "+increment);
//		System.out.println("Final Salary : "+FinalSalary);
//		
//	}
//}