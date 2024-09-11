#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class person
{
private:
    int id;
    string name;
    string password;
public:
    person();
    person(int id, string name, string password);
    int Getid();
    void Setid(int val);
    string Getname();
    bool Setname(string val);
    string Getpassword();
    bool Setpassword(string val);
    void DisplayInfo();
};

#endif // PERSON_H
