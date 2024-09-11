#include "Client.h"
#include <iostream>
#include "person.h"
#include "Validation.h"
using namespace std;
Client::Client() :person()
{
    this->balance = 0;
}
Client::Client(int id, string name, string password, double balance) : person(id, name, password)
{
    this->balance = balance;
}

double Client::GetBalance()
{
    return balance;
}

bool Client::setBalance(double b)
{
    if (Validation::validateBalance(b))
    {
        balance = b;
        return true;
    }
    cout << "Your balance must be more than 1500.\n";
    return false;
}

bool Client::Deposit(double amount)
{
    if (Validation::validateDeposit(amount))
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        return true;
    }
    cout << "Invalid deposit amount.\n";
    return false;
}

bool Client::withdraw(double amount)
{
    if (Validation::validateWithdraw(amount, balance))
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        return true;
    }
    cout << "Invalid withdrawal amount or insufficient balance.\n";
    return false;
}

bool Client::transferTo(double amount, Client& recipient)
{
    if (Validation::validateTransfer(amount, balance))
    {
        balance -= amount;
        recipient.Deposit(amount);
        cout << "Transferred: " << amount << " to " << recipient.Getname() << endl;
        return true;
    }
    cout << "Invalid transfer amount or insufficient balance.\n";
    return false;
}

void Client::checkBalance()
{
    cout << "Current balance: " << balance << endl;
}

void Client::DisplayInfo()
{
    person::DisplayInfo();
    cout << "Balance = " << balance << endl;
}

