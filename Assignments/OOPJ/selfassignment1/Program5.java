//package selfassignment1;
//
//import java.util.Scanner;
//
//class Employee
//{
//	int employeeId;
//	String employeeName;
//	int salary;
//	String department;
//	
//	Employee(int employeeId , String employeeName , int salary , String department)
//	{
//		this.employeeId = employeeId;
//		this.employeeName = employeeName;
//		this.salary = salary;
//		this.department = department;
//	}
//	
//	void acceptData(Scanner sc)
//	{
//		System.out.println("Enter teh Employee ID : ");
//		employeeId = sc.nextInt();
//		sc.nextLine();
//		
//		System.out.println("Enter the Employee Name :");
//		employeeName = sc.nextLine();
//		
//		System.out.println("Enter the Salary :");
//		salary = sc.nextInt();
//		sc.nextLine();
//		
//		System.out.println("Enter the Department :");
//		department = sc.nextLine();
//	}
//	
//	void displayData()
//	{
//		System.out.println("\n----- Employee Details -----");
//		System.out.println("Employee ID : "+employeeId);
//		System.out.println("Employee Name :" +employeeName);
//		System.out.println("Salary :" +salary);
//		System.out.println("Department :" +department);
//	}
//	
//	int calculateAnnualSalary()
//	{
//		return  salary * 12;
//	}
//}
//
//public class Program5 
//{
//	public static void main(String[]args)
//	{
//		
//		Scanner sc = new Scanner (System.in);
//	 
//		Employee e1 = new Employee(0 , "" , 0 , " ");
//		Employee e2 = new Employee(0 , "" , 0 , " ");
//		Employee e3 = new Employee(0 , "" , 0 , " ");
//		Employee e4 = new Employee(0 , "" , 0 , " ");
//		Employee e5 = new Employee(0 , "" , 0 , " ");
//	
//		System.out.println("Enter the Employee 1 Details :");
//		e1.acceptData(sc);
//		
//		System.out.println("Enter the Employee 2 Details :");
//		e2.acceptData(sc);
//		
//		System.out.println("Enter the Employee 3 Details :");
//		e3.acceptData(sc);
//		
//		System.out.println("Enter the Employee 4 Details :");
//		e4.acceptData(sc);
//		
//		System.out.println("Enter the Employee 5 Details :");
//		e5.acceptData(sc);
//		
//		System.out.println("=====Employee 1=====");
//		e1.displayData();
//		
//		System.out.println("=====Employee 2=====");
//		e2.displayData();
//		
//		System.out.println("=====Employee 3=====");
//		e3.displayData();
//		
//		System.out.println("=====Employee 4=====");
//		e4.displayData();
//		
//		System.out.println("=====Employee 5=====");
//		e5.displayData();
//		
//		Employee highestSalaryEmployee = e1;
//		
//		if(e2.salary > highestSalaryEmployee.salary)
//		{
//			highestSalaryEmployee = e2;
//		}
//		
//		if(e3.salary > highestSalaryEmployee.salary)
//		{
//			highestSalaryEmployee = e3;
//		}
//		
//		if(e4.salary > highestSalaryEmployee.salary)
//		{
//			highestSalaryEmployee = e4;
//		}
//		
//		if(e5.salary > highestSalaryEmployee.salary)
//		{
//			highestSalaryEmployee = e5;
//		}
//		
//		System.out.println("\n===== Employee Having Highest Salary =====");
//		highestSalaryEmployee.displayData();
//		
//		sc.close();
//	}
//}
