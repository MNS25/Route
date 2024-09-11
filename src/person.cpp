#include "person.h"
#include <iostream>
#include "Validation.h"

using namespace std;
person::person()
{
    this->id = 0;
}
person::person(int id, string name, string password)
{
    this->id = id;
    this->name = name;
    this->password = password;
}

int person::Getid()
{
    return id;
}
void person::Setid(int val)
{
    id = val;
}
string person::Getname()
{
    return name;
}
bool person::Setname(string val)
{
    if (Validation::validateName(val))
    {
        name = val;
        return true;
    }
    cout << "Your name must be between 5 and 20 characters.\n";
    return false;
}
string person::Getpassword()
{
    return password;
}
bool person::Setpassword(string val)
{
    if (Validation::validatePassword(val))
    {
        password = val;
        return true;
    }
    cout << "Your password must be between 8 and 20 characters.\n";
    return false;
}
void person::DisplayInfo()
{
    cout << "ID = " << id << endl;
    cout << "Name = " << name << endl;
    cout << "Password = " << password << endl;
}

