#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <person.h>
using namespace std;

class Employee : public person
{
private:
    double salary;
public:
    Employee();
    Employee(int id, string name, string password, double salary);
    double GetSalary();
    bool setSalary(double s);
    void DisplayInfo();


};

#endif // EMPLOYEE_H
