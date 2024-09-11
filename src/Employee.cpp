#include "Employee.h"
#include <iostream>
#include "person.h"
#include "Validation.h"
using namespace std;
Employee::Employee() :person()
{
    salary = 0;
}
Employee::Employee(int id, string name, string password, double salary) : person(id, name, password)
    {
        this->salary = salary;
    }
double Employee::GetSalary()
    {
        return salary;
    }

bool Employee::setSalary(double s)
    {
        if (Validation::validateSalary(s))
        {
            salary = s;
            return true;
        }
        cout << "Your salary must be more than 5000.\n";
        return false;
    }

void Employee::DisplayInfo()
{
    person::DisplayInfo();
    cout << "Salary = " << salary << endl;
}
