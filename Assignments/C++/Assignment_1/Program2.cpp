//#include <iostream>
//using namespace std;
//
//int main()     // Sensor Log buffer
//{
//	int N = 0;
//	double arr[N];
//
//	cout << "Enter the Readings : " << endl;
//	cin >> N;
//
//	if(N < 1 && N > 100)
//	{
//		cout << "Invalid Number of Readings!"<< endl;
//		return 0;
//	}
//
//	double readings [100];
//
//	cout << "Enter" << N << " Temperature Values :" << endl;
//
//	for(int i = 0; i <= N; i++)
//	{
//		cin >> readings[i];
//	}
//
//	int Skippederrors = 0;
//
//	for(int i = 0; i < N;i++)
//	{
//		if(readings[i] < 0)
//		{
//			Skippederrors++;
//			continue;
//		}
//		cout << "Valid Readings :" << readings[i] << endl;
//	}
//
//	cout << "Skipped (Errors) :" << Skippederrors << endl;
//
//	int criticalindex = -1;
//
//	for(int i = 0; i < N ; i++)
//	{
//		if(readings[i] >= 45)
//		{
//			criticalindex = i;
//			break;
//		}
//	}
//
//	if(criticalindex != -1)
//	{
//		cout << "First CRITICAL  : Index " << criticalindex << "->" << readings[criticalindex] << "C" << endl;
//	}
//	else
//	{
//		cout << "First CRITICAL : Not Found !" << endl;
//	}
//
//	double minTemp = 0;
//	double maxTemp = 0;
//	double sum = 0;
//	int validCount = 0;
//
//	int normal = 0;
//	int warning = 0;
//	int critical = 0;
//	int shutdown = 0;
//
//	for(int i = 0;i < N; i++)
//	{
//		if(readings [i] < 0)
//		{
//			continue;
//		}
//
//		if(validCount == 0)
//		{
//			minTemp = readings[i];
//			maxTemp = readings[i];
//		}
//		else
//		{
//			if(readings[i] < minTemp)
//			{
//				minTemp = readings[i];
//			}
//
//			if(readings[i] > maxTemp)
//			{
//				maxTemp = readings[i];
//			}
//		}
//
//		sum = sum +readings[i];
//
//		validCount++;
//
//		if (readings[i] < 30)
//		{
//			normal++;
//		}
//
//		else if (readings[i] < 45)
//		{
//			warning++;
//		}
//
//		else if (readings[i] < 60)
//		{
//			critical++;
//		}
//
//		else
//		{
//			shutdown++;
//		}
//	}
//
//	if(validCount > 0)
//	{
//		double average = sum / validCount;
//
//		cout << endl;
//
//		cout << "Min: " << minTemp << "°C" << endl;
//
//		cout << "Max: " << maxTemp << "°C" << endl;
//
//		cout << "Avg: " << fixed << average << "°C" << endl;
//
//		cout << endl;
//
//		cout << "Normal: " << normal << endl;
//
//		cout << "Warning: " << warning << endl;
//
//		cout << "Critical: " << critical << endl;
//
//		cout << "Shutdown: " << shutdown << endl;
//	}
//
//	else
//	{
//		cout << "No valid readings available." << endl;
//	}
//
//	return 0;
//
//
//	}
//
//
//
//
