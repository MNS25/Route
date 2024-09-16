#include "Employee.h"
#include <iostream>
#include "person.h"
#include "Validation.h"
#include <Client.h>
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

void Employee::addclient(Client&client)
{
    clients.push_back(client);

}

Client* Employee::searchclient(int id)
{
   for (int i=0 ; i<clients.size();i++)
   {
       if(clients.at(i).Getid()==id)
       {
            return  &clients.at(i);
       }
       return nullptr;
   }
}
void Employee::listClient()
{
    for (int i=0 ; i<clients.size();i++)
     {
        cout << "ID: " << clients.at(i).Getid();
        cout << ", Name: " << clients.at(i).Getname();
        cout << ", Password: " << clients.at(i).Getpassword();
        cout << ", Balance: " << clients.at(i).GetBalance();
        cout << '\n';
    }
}
void Employee::editClient(int id, string Name, string Password, double Balance)
{
    for (int i=0 ; i<clients.size();i++)
   {
       if(clients.at(i).Getid()==id)
       {
            clients.at(i).Setname(Name);
            clients.at(i).Setpassword(Password);
            clients.at(i).setBalance(Balance);
       }

   }
}










