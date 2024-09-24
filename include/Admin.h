#ifndef ADMIN_H
#define ADMIN_H

#include "Employee.h"
#include <string>
#include <vector>
using namespace std;

class Admin :public Employee
{
private:
    vector<Employee>employees;
public:
        Admin();
        Admin(int id, string name, string password, double salary);
        //methods
        void addEmployee(const Employee& employee);
        Employee* searchEmployee(int id);
        void editEmployee(int id,  string Name , string Password ,double salary);
        void listEmployee();

};

#endif // ADMIN_H
