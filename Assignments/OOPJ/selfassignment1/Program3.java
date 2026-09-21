//package selfassignment1;
//
//import java.util.Scanner;
//
//public class Program3 
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner (System.in);
//		
//		System.out.println("Enter the Size of the Array :");
//		int size = sc.nextInt();
//		
//		int arr[] = new int [size];
//		
//		System.out.println("Enter the Elemnets in ana Array :");
//		
//		for(int i = 0; i < size ; i++)
//		{
//			arr[i] = sc.nextInt();
//		}
//		
//		//for Even Numbers 
//		int evenCount = 0;
//		int oddCount = 0;
//		
//		for(int i = 0; i < size ; i++)
//		{
//			if(arr[i] % 2 == 0)
//			{
//				System.out.println("The Even Numbers are : " +arr[i]);
//				evenCount++;
//			}
//			else
//			{
//				System.out.println("The Odd Numbers are : " +arr[i]);
//				oddCount++;
//			}
//		} 
//		
//		System.out.println("The Count of Even Numbers is " +evenCount);
//		System.out.println("The Count of Odd Numbers is " +oddCount);
//		
//		sc.close();
//	}
//}
