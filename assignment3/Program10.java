//package assignment3;
//
//class BankAccount
//{
//	int accountNumber;
//	String name;
//	int balance;
//	
//	BankAccount(int accountNumber , String name , int balance)
//	{
//		this.accountNumber = accountNumber;
//		this.name = name;
//		this.balance = balance;
//	}
//	
//	void deposit(int amount)
//	{
//		balance = balance + amount;
//	}
//	
//	void withdraw(int amount)
//	{	
//		if(amount <= balance)
//		{
//			balance = balance - amount;
//		}
//		else
//		{
//			System.out.println("Insufficient Balance !");
//		}
//	}
//	
//	void displayBalance()
//	{
//		System.out.println(+balance);
//	}
//}
//
//public class Program10
//{
//	public static void main(String[]args)
//	{
//		BankAccount ba = new BankAccount(1891 , "ABHISHEK" , 150000);
//		
//		ba.deposit(50000);
//		ba.withdraw(10000);
//		ba.displayBalance();
//		System.out.println("Balance is : "+ba.balance);
//		
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
