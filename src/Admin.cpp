#include "Admin.h"
#include "Employee.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
Admin::Admin() : Employee(){

}
void Admin::addEmployee(const Employee& employee){
employees.push_back(employee);
}

Employee* Admin::searchEmployee(int id){
    for (Employee& employee : employees)
    {
        if (employee.Getid() == id)
        {
            return &employee;
        }
    }
    return nullptr;

}

void Admin::editEmployee(int id, const string& name ,const string& password ,double salary)
{
   Employee* emp =searchEmployee(id);
   if (emp)
   {
       emp->Setname(name);
       emp->Setpassword(password);
       emp->setSalary(salary);
   }
   else{
    cout <<"Not Found!"<<endl;
   }

}

void Admin::listEmployee()const
{
     for (const Employee& employee : employees)
     {
         cout <<"ID: "<<employee.Getid()<<", Name: " << employee.Getname()<<", Salary: "<<employee.GetSalary() << endl;
     }

}



