//package assignment3;
//
//class ElectricityBill
//{
//	String customerName;
//	int units;
//	
//	ElectricityBill(String customerName , int units)
//	{
//		this.customerName = customerName;
//		this.units = units;
//	}
//	
//	int calculateBill()
//	{
//		int bill_amount;
//		
//		if(units <= 100)
//		{
//			bill_amount = units * 5;
//		}
//		else if(units <= 200)
//		{
//			bill_amount = (100 * 5) + ((units - 100) * 7);
//		}
//		else
//		{
//			bill_amount = units * 10;
//		}
//		return bill_amount;
//	}
//}
//
//public class Program14
//{
//	public static void main(String[]args)
//	{
//		ElectricityBill EB1 = new ElectricityBill("PARTH" , 150);
//		ElectricityBill EB2 = new ElectricityBill("RUPESH" , 250);
//		
//		EB1.calculateBill();
//		EB2.calculateBill();
//		
//		System.out.println("The Bill of "+EB1.customerName+" is :"+EB1.calculateBill());
//		System.out.println("The Bill of "+EB2.customerName+" is :"+EB2.calculateBill());
//			
//	}
//}