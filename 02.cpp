#include <iostream>
using namespace std;

class Employee
{
    int Empnumber;
    string Empname;

public:
    // Member function to get data
    void getdata()
    {
        cout << "Enter Employee Number: ";
        cin >> Empnumber;
        cout << "Enter Employee Name: ";
        cin >> Empname;
    }

    // Member function to display data
    void display()
    {
        cout << "Employee Number: " << Empnumber << ", Name: " << Empname << endl;
    }
};

int main()
{
    // Array of Employee objects
    Employee employees[6];

    // Input details of 6 employees
    cout << "Enter details of 6 employees:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].getdata();
    }

    // Display details of 6 employees
    cout << "\nEmployee details:" << endl;
    for (int i = 0; i < 6; i++)
    {
        employees[i].display();
    }

    return 0;
}
