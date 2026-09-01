//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() 				Building Sensor Grid
//{
//	double Temperature [3][3];
//
//	for(int i = 0; i <3;i++)
//	{
//		for(int j = 0;j <3; j++)
//		{
//			cout << "Enter the Tempertaure for the floor : " << i + 1 << ", Room " << j+1 << " :" << endl;
//			cin >> Temperature[i][j];
//		}
//	}
//
//	cout << "\n Temperature Grid: \n";
//
//	cout << fixed << setprecision(1);
//
//	cout << "\tRoom1\tRppm2\tRoom3" << endl;
//
//	for(int i = 0; i < 3; i++)
//	{
//		cout << "Floor " << i+1 << " :";
//
//		for(int j = 0; j < 3; j++)
//		{
//			 cout << Temperature[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	double hottest = Temperature[0][0];
//	int hottestFloor = 0;
//	int hottestRoom = 0;
//
//	for(int i = 0; i < 3 ;i++)
//	{
//		for(int j = 0; j < 3 ;j++)
//		{
//			if(Temperature [i][j] > hottest)
//			{
//				hottest = Temperature[i][j];
//				hottestFloor = i;
//				hottestRoom = j;
//			}
//		}
//	}
//
//	double highestfloor = 0;
//	double highestavg = 0;
//
//	for(int i = 0; i < 3; i++)
//	{
//		double sum = 0;
//
//		for(int j = 0; j < 3; j++)
//		{
//			 sum = sum + Temperature[i][j];
//		}
//
//		double Average = sum / 3;
//
//		if(Average > highestavg)
//		{
//			highestavg = Average;
//			highestfloor = i;
//		}
//	}
//
//	int WarningRooms = 0;
//
//	for (int i = 0; i < 3; i++)
//	    {
//	        for (int j = 0; j < 3; j++)
//	        {
//	            if (Temperature[i][j] >= 30)
//	            {
//	                WarningRooms++;
//	            }
//	        }
//	    }
//
//	cout << "\nHottest Room : Floor " << hottestFloor + 1 << ", Room " << hottestRoom + 1 << " " << hottest << "°C" << endl;
//	cout << "\nHottest Floor : Floor " << highestavg + 1 << " (avg " << highestavg << "°C)" << endl;
//	cout << "Rooms at WARNING or above: " << WarningRooms << endl;
//
//	return 0;
//
//}
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
//
