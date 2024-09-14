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

void Employee::addclient(Client&client){
    clients.push_back(client);

}

Client Employee::searchclient(int id){
for (const Cilent & client:clients){
    if(client.id==id){
        return client;
     }
        return nullptr;
   }
}

void Employee::listClient() const {
    for (const auto& client : clients) {
        cout << "ID: " << client.id;
        cout << ", Name: " << client.name;
        cout << ", Password: " << client.password;
        cout << ", Balance: " << client.balance ;
        cout << '\n';


    }
}

void Employee::editclient(int id;string name,string password,double balance){
    Client*client=searchclient(id);
    if(client!=nullptr){
       client->Setname(name);
       client->SetPassword(Password);
       client->setBalance(Balance);

    }else{
      cout<<" client with Id "<<id<<endl;
    }


}












