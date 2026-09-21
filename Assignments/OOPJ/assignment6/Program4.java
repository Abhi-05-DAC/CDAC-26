//package assignments6;
//
//import java.util.Scanner;
//
//public class Program4 
//{
//	public static void main(String[]args)
//	{
//			Scanner sc = new Scanner(System.in);
//			
//			System.out.println("Enter the Number of Elements : ");
//			int size = sc.nextInt();
//			
//			int arr[] = new int[size];
//			
//			System.out.println("Enter the Array Elements : ");
//			
//			for(int i = 0; i < size ; i++)
//			{
//				arr[i] = sc.nextInt();
//			}
//			
//			int copy[] = new int [size];
//			
//			for(int i = 0; i < size ; i++)
//			{
//				copy[i] = arr[i];
//			}
//			
//			System.out.println("The Original Array is :");
//			
//			for(int i = 0; i < size ; i++)
//			{
//				System.out.print(arr[i]+" ");
//			}
//			
//			System.out.println("");
//			
//			
//			System.out.println("The Copy Array is :");
//			
//			for(int i = 0; i < size ; i++)
//			{
//				System.out.print(copy[i]+" ");
//			}
//			
//			sc.close();
//	}
//}
