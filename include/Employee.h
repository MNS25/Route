#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include<vector>
#include <person.h>
#include <Client.h>
using namespace std;

class Employee : public person
{
private:
    double salary;
    vector<Client>clients;
public:
    //constructor
    Employee();
    Employee(int id, string name, string password, double salary);

    //getter
    double GetSalary();

    //setter
    bool setSalary(double s);

    //method
    void DisplayInfo();

    void addclient(Client&client);
    Client* searchclient(int id);
    void listClient();
    void editClient(int id, string name, string password, double balance);

};

#endif // EMPLOYEE_H
