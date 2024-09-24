#include "Admin.h"
#include "Employee.h"
#include <iostream>
#include <vector>
#include <string>
#include <Employee.h>

using namespace std;
Admin::Admin() : Employee(){

}
Admin::Admin(int id, string name, string password, double salary) : Employee(id, name, password,salary)
{

}
void Admin::addEmployee(const Employee& employee){
employees.push_back(employee);
}

Employee* Admin::searchEmployee(int id){
    for (int i=0 ; i<employees.size();i++)
   {
       if(employees.at(i).Getid()==id)
       {
            return  &employees.at(i);
       }
       return nullptr;
   }

}

void Admin::editEmployee(int id,  string Name , string Password ,double salary)
{
   for (int i=0 ; i<employees.size();i++)
   {
       if(employees.at(i).Getid()==id)
       {
            employees.at(i).Setname(Name);
            employees.at(i).Setpassword(Password);
            employees.at(i).setSalary(salary);
       }
   }

}

void Admin::listEmployee()
{
     for (int i=0 ; i<employees.size();i++)
     {
        cout << "ID: " << employees.at(i).Getid();
        cout << ", Name: " << employees.at(i).Getname();
        cout << ", Password: " << employees.at(i).Getpassword();
        cout << ", Salary: " << employees.at(i).GetSalary();
        cout << '\n';
    }

}



