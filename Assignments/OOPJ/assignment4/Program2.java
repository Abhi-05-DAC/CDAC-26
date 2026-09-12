//package assignment4;
//import java.util.Scanner;
//class Member
//{
//	String name;
//	int age;
//	String phoneNo;
//	String address;
//	float salary;
//	
//	public void setName(String name)
//	{
//		this.name = name;
//	}
//	
//	public void setAge(int age)
//	{
//		this.age = age;
//	}
//	
//	public void setPhoneNo(String phoneNo)
//	{
//		this.phoneNo = phoneNo;
//	}
//	
//	public void setaddress(String address)
//	{
//		this.address = address;
//	}
//	
//	public void setsalary(float salary)
//	{
//		this.salary = salary;
//	}
//	
//	public String getName()
//	{
//		return name;
//	}
//	
//	public int getAge()
//	{
//		return age;
//	}
//	
//	public String getPhoneNo()
//	{
//		return phoneNo;
//	}
//	
//	public String getaddress()
//	{
//		return address;
//	}
//	
//	public float getsalary()
//	{
//		return salary;
//	}
//	
//	
//	
//	public void printSalary()
//	{
//		System.out.println("Salary : " + salary);
//	}
//	
//	public void display()
//	{
//		System.out.println("Name : " +getName());
//		System.out.println("Age : " +getAge());
//		System.out.println("Phone Number : " +getPhoneNo());
//		System.out.println("Address : " +getaddress());
//		System.out.println("Salary : " +getsalary());
//	}
//}
//
//class PrimeMembers extends Member
//{
//	private int joiningYear;
//	private int joiningFees;
//	private boolean isActive;
//	
//	
//	public void setjoiningYear(int joiningYear)
//	{
//		this.joiningYear = joiningYear;
//	}
//	
//	public void setjoiningFees(int joiningFees)
//	{
//		this.joiningFees = joiningFees;
//	}
//	
//	public void isActive(boolean isActive)
//	{
//		this.isActive = isActive;
//	}
//	
//	public int setjoiningYear()
//	{
//		return joiningYear;
//	}
//	
//	public int setjoiningFees()
//	{
//		return joiningFees;
//	}
//	
//	public boolean isActive()
//	{
//		return isActive;
//	}
//	
//}
//
//public class Program2
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner(System.in);
//		
//		PrimeMembers PM = new PrimeMembers();
//		
//		System.out.println("Enter the Name :");
//		PM.setName (sc.nextLine());
//		
//		System.out.println("Enter the Age :");
//		PM.setAge(sc.nextInt());
//		
//		System.out.println("Enter the Phone Number :");
//		PM.setPhoneNo(sc.nextLine());
//		
//		sc.nextLine();
//		
//		System.out.println("Enter the Address :");
//		PM.setaddress(sc.nextLine());
//		
//		System.out.println("Enter the Salary :");
//		PM.setsalary(sc.nextInt());
//		
//		System.out.println("Enter the Joining Year : ");
//		PM.setjoiningYear(sc.nextInt());
//		
//		System.out.println("Enter the Joining Fees :");
//		PM.setjoiningFees(sc.nextInt());
//		
//		System.out.println("Is Active :");
//		PM.isActive(sc.nextBoolean());
//		
//		PM.display();
//		
//		sc.close();
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
