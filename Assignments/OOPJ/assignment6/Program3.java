//package assignments6;
//
//import java.util.Scanner;
//
//public class Program3
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner(System.in);
//		
//		System.out.println("Enter the Size of the Array :");
//		int size = sc.nextInt();
//		
//		int arr[] = new int[size];
//		
//		System.out.println("Enter the Elements :");
//		
//		for(int i = 0; i < size ; i++)
//		{	
//			arr[i] = sc.nextInt();
//		}
//		
//		int sum = 0;
//		int avg = 0;
//		
//		for(int i = 0; i < size ; i++)
//		{
//			sum = sum + arr[i];
//		}
//		
//		avg = sum / size;
//		
//		
//		System.out.println("The average value of an array elements is : "+avg);
//		sc.close();
//	}
//}