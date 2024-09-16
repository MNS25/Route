#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <person.h>
using namespace std;

class Client :public person
{
protected:
    double balance;
public:
    Client();
    Client(int id, string name, string password, double balance);
    double GetBalance();
    bool setBalance(double b);
    bool Deposit(double amount);
    bool withdraw(double amount);
    bool transferTo(double amount, Client& recipient);
    void checkBalance();
    void DisplayInfo();
};

#endif // CLIENT_H
