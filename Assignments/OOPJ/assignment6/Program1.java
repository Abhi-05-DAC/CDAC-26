//package assignments6;
//
//import java.util.Scanner;
//
//public class Program1
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
//		for(int i = 0; i < size - 1; i++)
//		{
//			for(int j = i + 1; j < size ; j++)
//			{
//				if(arr[i] > arr[j])
//				{
//					int temp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = temp;
//				}
//			}
//		}
//		
//		System.out.println("The Sorted Array is :");
//		
//		for(int i = 0; i < size ; i++)
//		{
//			System.out.printf(arr[i]+" ");
//		}
//		sc.close();
//	}
//}