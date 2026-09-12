//package assignment3;
//
//class Product
//{
//	String productName;
//	int price;
//	int quantity;
//	
//	Product(String productName , int price , int quantity)
//	{
//		this.productName = productName;
//		this.price = price;
//		this.quantity = quantity;
//	}
//	
//	int calculateTotal()
//	{	
//		return price * quantity;
//	}
//	
//	void applyDiscount()
//	{
//		if(price > 5000)
//		{
//			int discountAmount = (price * 10) / 100;
//			this.price = price;
//		}
//		else
//		{
//			System.out.println("No Discount !");
//		}
//	}
//}
//
//
//public class Program11
//{
//	public static void main(String[]args)
//	{
//		Product p1 = new Product ("SamSung S26 Ultra", 160000 , 2);
//		
//		int OriginalPrice = p1.price;
//		
//		p1.calculateTotal();
//		p1.applyDiscount();
//		p1.applyDiscount();
//		
//		
//		int finalTotalAmount = p1.calculateTotal();
//		
//		System.out.println("Product Name : "+p1.productName);
//		System.out.println("Quantity: "+p1.quantity);
//		System.out.println("Original Amount: "+OriginalPrice);
//		System.out.println("Final Amount: "+finalTotalAmount);
//	}
//}
