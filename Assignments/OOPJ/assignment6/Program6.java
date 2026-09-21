//package assignments6;
//
//import java.util.Scanner;
//
//public class Program6 
//{
//	public static void main(String[]args)
//	{
//		Scanner sc = new Scanner(System.in);
//		
//		System.out.println("Enter the size of Array Elements :");
//		int size = sc.nextInt();
//		
//		int arr[] = new int[size];
//		
//		System.out.println("Enter the Array Elements : ");
//		
//		for(int i = 0; i < size ; i++)
//		{
//			arr[i] = sc.nextInt();
//		}
//		
//		for(int i = 0 ; i < size / 2; i++)
//		{
//			int temp = arr[i];
//			arr[i] = arr[size - 1 - i];
//			arr[size - 1 -i] = temp;
//		}
//		
//		System.out.println("The Array in Reverse Order : ");
//		
//		for(int i = 0; i < size ; i++)
//		{
//			System.out.print( arr[i]+" ");
//		}
//		
//		sc.close();
//	}
//}
