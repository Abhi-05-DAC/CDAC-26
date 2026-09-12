package assignment1;

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		int Day = 0;
		int Month = 0;
		int Year = 0;
		int choice;

		do
		{
			System.out.println("\n===== DATE MENU =====");
			System.out.println("1. Set Date");
			System.out.println("2. Add Days");
			System.out.println("3. Add Months");
			System.out.println("4. Add Years");
			System.out.println("5. Display Date");
			System.out.println("6. Exit");
			System.out.println("Enter your choice: ");

			choice = sc.nextInt();

			switch(choice)
			{
				case 1:

					System.out.println("Enter Day: ");
					Day = sc.nextInt();

					System.out.println("Enter Month: ");
					Month = sc.nextInt();

					System.out.println("Enter Year: ");
					Year = sc.nextInt();

					if(isValidDate(Day, Month, Year))  			//We Have to Validate Date 
					{
						System.out.println("Date Set Successfully!");
					}
					else
					{
						System.out.println("Invalid Date!");
						Day = 0;
						Month = 0;
						Year = 0;
					}

					break;


				case 2:

					if(Year == 0)
					{
						System.out.println("Please Set Date First!");
					}
					else
					{
						System.out.println("Enter Days to Add: ");
						int days = sc.nextInt();

						while(days > 0)
						{
							Day++;

							if(Day > getDaysInMonth(Month, Year))
							{
								Day = 1;
								Month++;

								if(Month > 12)
								{
									Month = 1;
									Year++;
								}
							}

							days--;
						}

						System.out.println("Days Added Successfully!");
					}

					break;


				case 3:

					if(Year == 0)
					{
						System.out.println("Please Set Date First!");
					}
					else
					{
						System.out.println("Enter Months to Add: ");
						int months = sc.nextInt();

						Month = Month + months;

						while(Month > 12)
						{
							Month = Month - 12;
							Year++;
						}

						if(Day > getDaysInMonth(Month, Year)) 			// Adjust Day if required
						{
							Day = getDaysInMonth(Month, Year);
						}

						System.out.println("Months Added Successfully!");
					}

					break;


				case 4:

					if(Year == 0)
					{
						System.out.println("Please Set Date First!");
					}
					else
					{
						System.out.println("Enter Years to Add: ");
						int years = sc.nextInt();

						Year = Year + years;

						if(Month == 2 && Day == 29)						// Handle February 29 for LEap Year 
						{
							if(!isLeapYear(Year))
							{
								Day = 28;
							}
						}

						System.out.println("Years Added Successfully!");
					}

					break;


				case 5:

					if(Year == 0)
					{
						System.out.println("Please Set Date First!");
					}
					else
					{
						System.out.println("Date is : "
								+ Day + "/" + Month + "/" + Year);
					}

					break;


				case 6:

					System.out.println("Program Exited Successfully!");
					break;


				default:

					System.out.println("Invalid Choice!");
			}

		} while(choice != 6);

		sc.close();
	}

	public static boolean isLeapYear(int Year) 								// Check Leap Yea
	{
		if(Year % 400 == 0)
		{
			return true;
		}
		else if(Year % 100 == 0)
		{
			return false;
		}
		else if(Year % 4 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	public static int getDaysInMonth(int Month, int Year)							// Get Number of Days in Month
	{
		switch(Month)
		{
			case 1:
				return 31;

			case 2:
				if(isLeapYear(Year))
				{
					return 29;
				}
				else
				{
					return 28;
				}

			case 3:
				return 31;

			case 4:
				return 30;

			case 5:
				return 31;

			case 6:
				return 30;

			case 7:
				return 31;

			case 8:
				return 31;

			case 9:
				return 30;

			case 10:
				return 31;

			case 11:
				return 30;

			case 12:
				return 31;

			default:
				return 0;
		}
	}


	public static boolean isValidDate(int Day, int Month, int Year)							// Validate Date
	{
		if(Month < 1 || Month > 12)
		{
			return false;
		}

		if(Day < 1 || Day > getDaysInMonth(Month, Year))
		{
			return false;
		}

		return true;
	}
}