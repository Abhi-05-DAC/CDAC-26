//#include <iostream>
//using namespace std;
//
//void resetSensorPairV1(int reading1, int reading2)			//the Bug in Sensor Recalibration
//{
//	int Temp = reading1;
//	reading1 = reading2;
//	reading2 = Temp;
//}
//
//void resetSensorPairV2(int& reading1, int& reading2)
//{
//	int Temp = reading1;
//		reading1 = reading2;
//		reading2 = Temp;
//}
//
//void resetSensorPairV3(int* reading1, int* reading2)
//{
//	int Temp = *reading1;
//		*reading1 = *reading2;
//		*reading2 = Temp;
//}
//
//int main()
//{
//	int A = 55;
//	int B = 12;
//
//	cout << "-----V1 : Call by Value:-----" << endl;
//	cout << "Before A : " << A << " Before B :" << B << endl;
//
//	resetSensorPairV1(A,B);
//
//	cout << "After A : " << A << " After B :" << B << endl;
//
//	cout << endl;
//
//	cout << "-----V2 : Call by Reference:-----" << endl;
//
//	cout << "Before A : " << A << " Before B :" << B << endl;
//
//	resetSensorPairV2(A,B);
//
//	cout << "After A : " << A << " After B :" << B << endl;
//
//	cout << endl;
//
//	cout << "-----V1 : Call by Pointer:-----" << endl;
//
//	cout << "Before A : " << A << " Before B :" << B << endl;
//
//	resetSensorPairV3(&A,&B);
//
//	cout << "After A : " << A << " After B :" << B << endl;
//
//	return 0;
//
//}
//
//
//
