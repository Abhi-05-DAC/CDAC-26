//package selfassignment1;
//
//import java.util.Scanner;
//
//class BankAccount
//{
//	int accountNumber;
//	String accountHolderName;
//	double balance;
//	
//	BankAccount(int accountNumber , String accountHolderName , double balance)
//	{
//		this.accountNumber = accountNumber;
//		this.accountHolderName = accountHolderName;
//		this.balance = balance;	
//	}
//	
//	public void deposit(double amount)
//	{
//		if(amount <= 0)
//		{
//			 System.out.println("Invalid amount! Deposit amount must be positive.");
//		}
//		else
//		{
//			balance = balance + amount;
//			System.out.println("Amount deposited successfully.");
//            System.out.println("Deposited Amount: " + amount);
//		}
//	}
//	
//	public void withdraw(double amount)
//	{
//		if(amount <= 0)
//		{
//			System.out.println("Invalid amount! Withdrawal amount must be positive.");
//		}
//		else if(amount > balance)
//		{
//			 System.out.println("Insufficient balance! Withdrawal cannot be completed.");
//		}
//		else
//		{
//			balance = balance - amount;
//			System.out.println("Amount withdrawn successfully.");
//	        System.out.println("Withdrawn Amount: " + amount);
//		}
//	}
//	
//	public void displayBalance()
//	{
//		  System.out.println("Account Number   : " + accountNumber);
//	      System.out.println("Account Holder   : " + accountHolderName);
//	      System.out.println("Current Balance  : " + balance);
//	}
//}
//
//
//public class Program6 
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner (System.in);
//		
//		 System.out.print("Enter Account Number: ");
//	        int accountNumber = sc.nextInt();
//
//	        sc.nextLine();
//
//	        System.out.print("Enter Account Holder Name: ");
//	        String accountHolderName = sc.nextLine();
//
//	        System.out.print("Enter Initial Balance: ");
//	        double balance = sc.nextDouble();
//	        
//	        BankAccount account = new BankAccount( accountNumber, accountHolderName, balance );
//	        
//	        int choice;
//	        
//	        do
//	        {
//	        	
//	        	System.out.println("\n===== BANK MENU =====");
//	            System.out.println("1. Deposit");
//	            System.out.println("2. Withdraw");
//	            System.out.println("3. Check Balance");
//	            System.out.println("4. Exit");
//	            System.out.print("Enter your choice: ");
//
//	            choice = sc.nextInt();
//	            
//	            switch(choice)
//	            {
//	        	case 1:
//	        		 System.out.print("Enter amount to deposit: ");
//	                    double depositAmount = sc.nextDouble();
//	                    account.deposit(depositAmount);
//	                    break;
//	                    
//	        	 case 2:
//	                    System.out.print("Enter amount to withdraw: ");
//	                    double withdrawAmount = sc.nextDouble();
//	                    account.withdraw(withdrawAmount);
//	                    break;
//
//	                case 3:
//	                    account.displayBalance();
//	                    break;
//
//	                case 4:
//	                    System.out.println("Thank you for using the Bank Application.");
//	                    break;
//
//	                default:
//	                    System.out.println("Invalid choice! Please select 1 to 4.");
//	            }
//	        }
//				while(choice !=4);
//				
//				sc.close();
//	}
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
//}
