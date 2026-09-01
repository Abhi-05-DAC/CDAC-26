//#include <iostream>
//using namespace std;
//
//int main()					//Sensor Reading Classifire
//{
//	double Temperature;
//	int StatusCode = 0;
//
//	cout << "Enter the Temperature :" << endl;
//			cin >> Temperature;
//
//	if(Temperature < 0)
//	{
//		StatusCode = -1;
//	}
//
//	else if(Temperature <= 29)
//	{
//		StatusCode = 0;
//	}
//
//	else if(Temperature <= 44)
//	{
//		StatusCode = 1;
//	}
//
//	else if(Temperature <= 59)
//	{
//		StatusCode = 2;
//	}
//
//	else
//	{
//		StatusCode = 3;
//	}
//
//	double fahrenheit = (Temperature * 9 / 5) + 32 ;
//
//	string reading = (Temperature > 25) ? "Above Average" : "Below Average";
//
//	cout << endl;
//
//	cout << "Temperature : " << Temperature << "C  /  " << fahrenheit << "F" << endl;
//
//	switch(StatusCode)
//	{
//	case -1 :
//		cout << "Status : SENSOR_ERROR" << endl;
//		cout << "Action : Sensor Fault -- Check Wiring" << endl;
//		break;
//
//
//	case 0 :
//		cout << "Status : NORMAL" << endl;
//		cout << "Action : No Action Required" << endl;
//		break;
//
//	case 1 :
//		cout << "Status : WARNING" << endl;
//		cout << "Action : Alert Send to Supervisor" << endl;
//		break;
//
//	case 2 :
//		cout << "Status : CRITICAL" << endl;
//		cout << "Action : Cooling System Triggered" << endl;
//		break;
//
//	case 3 :
//		cout << "Status : SHUTDOWN" << endl;
//		cout << "Action : Emergency shutdown initiated" << endl;
//		break;
//	}
//
//	cout << "Reading : " << reading << endl;
//}
