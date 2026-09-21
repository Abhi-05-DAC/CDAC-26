//package selfassignment1;
//
//import java.util.Scanner;
//
//public class Program4 
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
//		
//		int max = arr[0];
//		int min = arr[0];
//		
//		int sum = 0;
//		float avg = 0;
//		
//		for(int i = 0; i < size ; i++)
//		{
//			if(arr[i] > max)
//			{
//				max = arr[i];
//			}
//			
//			if(arr[i] < min)
//			{
//				min = arr[i];
//			}
//		}
//		
//		for(int i = 0; i < size ; i++)
//		{
//			sum = sum + arr[i];
//		}
//		
//		avg = sum / size;
//		
//		System.out.println("The Maximum Element in an Array is :" +max);
//		System.out.println("The Minimum Element in an array is :" +min);
//		System.out.println("The Sum of the Elements in an array is :" +sum);
//		System.out.println("The Average of the Elements in ana Array is :" +avg);
//		
//		sc.close();	
//	}
//}
