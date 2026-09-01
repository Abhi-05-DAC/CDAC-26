//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Patient
//{
//private :
//
//	int patientId = 0;
//	string name ;
//	int age = 0;
//	string ward;
//	const string bloodGroup;
//
//public:
//
//	Patient() : patientId (10), name ("Viraj"), age(25) , ward("Genral"), bloodGroup("A+")    // Full Admission
//	{
//		cout << "Default Pateint Registered :" << endl;
//	}
//
//	Patient(int id, const string& name) :patientId(id), name(name), age(23), ward("Emergency"), bloodGroup("O+")			//Emergency Admission
//	{
//		cout << "Emergency : " << name << endl;
//	}
//
//	Patient(int id, const string& name, int age, const string& ward, const string&bg) : patientId(id), name(name), age(age), ward(ward), bloodGroup(bg)
//	{
//		cout << "Full Admission : " << name << endl;
//	}
//
//	~Patient()
//	{
//		cout << "Destructor Patient " << name << " discharged" << endl;
//	}
//
//	void displayRecord() const
//	{
//		cout << "\nPatient Record : " << endl;
//
//		cout << "ID : " << patientId << endl;
//		cout << "Name :" << name << endl;
//		cout << "Age :" << age << endl;
//		cout << "Ward : " << ward << endl;
//		cout << "Blood Group : " << bloodGroup <<endl;
//	}
//
//	void transferWard(const string& newWard)
//	{
//		cout << "Ward Transfer :" << name << "->" << newWard << endl;
//	}
//
//};
//
//int main()
//{
//	Patient p1 (1001, "Suraj", 65, "Cardiology", "A-");
//
//	Patient p2 (1003, "Jayesh");
//
//	Patient p3;
//
//	Patient* Patients = new Patient[4];
//
//	cout << "==========Patient Record ==========="<<endl;
//	for(int i =0 ; i < 4; i++)
//	{
//		Patients[i].displayRecord();
//	}
//
//	cout << "==========Ward Transfer ==========="<<endl;
//
//	Patients[1].transferWard("ICU");
//
//	cout << "==========Delete Patient ==========="<<endl;
//
//	delete[] Patients;
//
//	cout << " "<<endl;
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
