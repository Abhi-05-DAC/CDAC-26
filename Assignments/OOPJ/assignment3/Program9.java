//package assignment3;
//
//class Employee
//{
//	String name;
//	int salary;
//	int hours;
//	
//	Employee(String name , int salary , int hours)
//	{
//		this.name = name;
//		this.salary = salary;
//		this.hours = hours;
//	}
//	
//	int addBonus()
//	{
//		if(salary < 30000)
//		{
//			salary = salary + 2000;
//		}
//		return salary;
//	}
//	
//	int addWorkBonus()
//	{
//		if(hours > 8)
//		{
//			salary = salary + 1000;
//		}
//		return salary;
//	}
//	
//	void displaySalary()
//	{
//		System.out.println(salary);
//	}
//}
//
//public class Program9
//{
//	public static void main (String[]args)
//	{
//		Employee e1 = new Employee("ABHI" , 20000 , 10);
//		
//		int OriginalSalary = e1.salary;
//		
//		e1.addBonus();
//		e1.addWorkBonus();
//		e1.displaySalary();
//		
//		System.out.println("Name : " +e1.name);
//		System.out.println("Salary : "+OriginalSalary);
//		System.out.println("Hours : " +e1.hours);
//		System.out.println("Expected final salary: " +e1.salary);
//		
//	}
//}
