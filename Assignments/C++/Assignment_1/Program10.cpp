//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <sstream>
//
//using namespace std;
//
//string formatCurrency(double amount)
//{
//    stringstream ss;
//
//    ss << fixed << setprecision(2) << amount;
//
//    string s = ss.str();
//
//    int decimalPos = s.find('.');
//
//    int pos = decimalPos - 3;
//
//    while (pos > 0)
//    {
//        s.insert(pos, ",");
//        pos -= 3;
//    }
//
//    return s;
//}
//
//struct Layout1
//{
//    char c1;
//    int i;
//    char c2;
//};
//
//struct Layout2
//{
//    int i;
//    char c1;
//    char c2;
//};
//
//class Employee
//{
//private:
//
//    int empId;
//    string name;
//    string department;
//    char grade;
//    double basicSalary;
//    bool isActive;
//
//    static int employeeCount;
//    static int nextId;
//
//
//public:
//
//
//    Employee()
//    {
//        empId = nextId++;
//        name = "";
//        department = "";
//        grade = ' ';
//        basicSalary = 0.0;
//        isActive = true;
//
//        employeeCount++;
//    }
//
//
//    // ========================================================
//    // Set Name
//    // ========================================================
//
//    void setName(const string& n)
//    {
//        if (n.empty())
//        {
//            cout << "ERROR: Name cannot be empty." << endl;
//        }
//        else
//        {
//            name = n;
//        }
//    }
//
//
//    // ========================================================
//    // Set Department
//    // ========================================================
//
//    bool setDepartment(const string& dept)
//    {
//        if (dept == "Engineering" ||
//            dept == "HR" ||
//            dept == "Finance" ||
//            dept == "Operations")
//        {
//            department = dept;
//            return true;
//        }
//
//        cout << "ERROR: '" << dept
//             << "' is not a registered department."
//             << endl;
//
//        return false;
//    }
//
//
//    // ========================================================
//    // Set Grade
//    // ========================================================
//
//    bool setGrade(char g)
//    {
//        if (g == 'A' ||
//            g == 'B' ||
//            g == 'C' ||
//            g == 'D')
//        {
//            grade = g;
//            return true;
//        }
//
//        cout << "ERROR: Invalid grade '" << g
//             << "'. Accepted values: A, B, C, D."
//             << endl;
//
//        return false;
//    }
//
//
//    // ========================================================
//    // Set Basic Salary
//    // ========================================================
//
//    bool setBasicSalary(double salary)
//    {
//        if (salary >= 10000 && salary <= 500000)
//        {
//            basicSalary = salary;
//            return true;
//        }
//
//        cout << "ERROR: Salary must be between "
//             << "Rs.10,000 and Rs.5,00,000. "
//             << "Value rejected."
//             << endl;
//
//        return false;
//    }
//
//
//    // ========================================================
//    // Getters
//    // ========================================================
//
//    int getEmpId() const
//    {
//        return empId;
//    }
//
//    string getName() const
//    {
//        return name;
//    }
//
//    string getDepartment() const
//    {
//        return department;
//    }
//
//    char getGrade() const
//    {
//        return grade;
//    }
//
//    double getBasicSalary() const
//    {
//        return basicSalary;
//    }
//
//    bool getIsActive() const
//    {
//        return isActive;
//    }
//
//
//    // ========================================================
//    // Deactivate Employee
//    // ========================================================
//
//    void deactivate()
//    {
//        isActive = false;
//    }
//
//
//    // ========================================================
//    // Calculate Allowances
//    // ========================================================
//
//    double computeAllowances() const
//    {
//        double rate = 0.0;
//
//        if (grade == 'A')
//        {
//            rate = 0.40;
//        }
//        else if (grade == 'B')
//        {
//            rate = 0.30;
//        }
//        else if (grade == 'C')
//        {
//            rate = 0.20;
//        }
//        else if (grade == 'D')
//        {
//            rate = 0.10;
//        }
//
//        return basicSalary * rate;
//    }
//
//
//    // ========================================================
//    // Calculate Gross Salary
//    // ========================================================
//
//    double computeGrossSalary() const
//    {
//        return basicSalary + computeAllowances();
//    }
//
//
//    // ========================================================
//    // Calculate Tax
//    // ========================================================
//
//    double computeTax() const
//    {
//        double gross = computeGrossSalary();
//
//        if (gross <= 50000)
//        {
//            return 0.0;
//        }
//
//        if (gross <= 100000)
//        {
//            return (gross - 50000) * 0.10;
//        }
//
//        return 5000 + (gross - 100000) * 0.20;
//    }
//
//
//    // ========================================================
//    // Calculate Net Salary
//    // ========================================================
//
//    double computeNetSalary() const
//    {
//        return computeGrossSalary() - computeTax();
//    }
//
//
//    // ========================================================
//    // Print Payslip
//    // ========================================================
//
//    void printPayslip() const
//    {
//        if (!isActive)
//        {
//            return;
//        }
//
//        int pct = 0;
//
//        if (grade == 'A')
//        {
//            pct = 40;
//        }
//        else if (grade == 'B')
//        {
//            pct = 30;
//        }
//        else if (grade == 'C')
//        {
//            pct = 20;
//        }
//        else if (grade == 'D')
//        {
//            pct = 10;
//        }
//
//        string allowLabel =
//            "Allowances (" + to_string(pct) + "%)";
//
//
//        cout << "=================================================="
//             << endl;
//
//        cout << "              EMPLOYEE PAYSLIP"
//             << endl;
//
//        cout << "                  AUG 2026"
//             << endl;
//
//        cout << "=================================================="
//             << endl;
//
//
//        cout << left << setw(16)
//             << "Emp ID"
//             << ": " << empId
//             << endl;
//
//        cout << left << setw(16)
//             << "Name"
//             << ": " << name
//             << endl;
//
//        cout << left << setw(16)
//             << "Department"
//             << ": " << department
//             << endl;
//
//        cout << left << setw(16)
//             << "Grade"
//             << ": " << grade
//             << endl;
//
//        cout << left << setw(16)
//             << "Status"
//             << ": "
//             << (isActive ? "Active" : "Inactive")
//             << endl;
//
//
//        cout << "--------------------------------------------------"
//             << endl;
//
//
//        cout << left << setw(16)
//             << "Basic Salary"
//             << ": Rs. "
//             << formatCurrency(basicSalary)
//             << endl;
//
//
//        cout << left << setw(16)
//             << allowLabel
//             << ": Rs. "
//             << formatCurrency(computeAllowances())
//             << endl;
//
//
//        cout << left << setw(16)
//             << "Gross Salary"
//             << ": Rs. "
//             << formatCurrency(computeGrossSalary())
//             << endl;
//
//
//        cout << "--------------------------------------------------"
//             << endl;
//
//
//        cout << left << setw(16)
//             << "Tax Deduction"
//             << ": Rs. "
//             << formatCurrency(computeTax())
//             << endl;
//
//
//        cout << left << setw(16)
//             << "Net Salary"
//             << ": Rs. "
//             << formatCurrency(computeNetSalary())
//             << endl;
//
//
//        cout << "=================================================="
//             << endl;
//
//        cout << endl;
//    }
//
//
//    // ========================================================
//    // Accept Details
//    // ========================================================
//
//    void acceptDetails()
//    {
//        string n;
//        string d;
//        char g;
//        double s;
//
//
//        // Name
//        cout << "Enter Name: ";
//        getline(cin >> ws, n);
//
//        setName(n);
//
//
//        // Department
//        while (true)
//        {
//            cout << "Enter Department: ";
//            getline(cin, d);
//
//            if (setDepartment(d))
//            {
//                break;
//            }
//        }
//
//
//        // Grade
//        while (true)
//        {
//            cout << "Enter Grade: ";
//            cin >> g;
//
//            if (setGrade(g))
//            {
//                break;
//            }
//        }
//
//
//        // Basic Salary
//        while (true)
//        {
//            cout << "Enter Basic Salary: ";
//            cin >> s;
//
//            if (setBasicSalary(s))
//            {
//                break;
//            }
//        }
//
//        cout << endl;
//    }
//
//
//    // ========================================================
//    // Static Employee Count
//    // ========================================================
//
//    static int getEmployeeCount()
//    {
//        return employeeCount;
//    }
//};
//
//
//// ============================================================
//// Initialize Static Variables
//// ============================================================
//
//int Employee::employeeCount = 0;
//
//int Employee::nextId = 1001;
//
//
//// ============================================================
//// MAIN
//// ============================================================
//
//int main()
//{
//    // One object on stack
//    Employee e1;
//
//    // Two objects on heap
//    Employee* e2 = new Employee();
//    Employee* e3 = new Employee();
//
//
//    // Accept employee details
//    e1.acceptDetails();
//
//    e2->acceptDetails();
//
//    e3->acceptDetails();
//
//
//    // Print payslips
//    e1.printPayslip();
//
//    e2->printPayslip();
//
//    e3->printPayslip();
//
//
//    // Simulate resignation
//    e3->deactivate();
//
//
//    if (!e3->getIsActive())
//    {
//        cout << e3->getName()
//             << " is no longer active. Payroll skipped."
//             << endl;
//    }
//
//
//    // Total employees
//    cout << endl;
//
//    cout << "Total Employees : "
//         << Employee::getEmployeeCount()
//         << endl;
//
//
//    // Free heap memory
//    delete e2;
//    delete e3;
//
//
//    // ========================================================
//    // Bonus: Struct Padding
//    // ========================================================
//
//    cout << endl;
//
//    cout << "--- Bonus: Struct Padding ---"
//         << endl;
//
//    cout << "sizeof(Layout1): "
//         << sizeof(Layout1)
//         << " bytes"
//         << endl;
//
//    cout << "sizeof(Layout2): "
//         << sizeof(Layout2)
//         << " bytes"
//         << endl;
//
//
//    return 0;
//}
