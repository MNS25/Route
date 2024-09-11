#include "Validation.h"
#include <iostream>

using namespace std;

bool Validation::validateName(const string& name)
{
    if (name.length() < 5 || name.length() > 20)
    {
        return false;
    }
    for (int i = 0; i < name.size(); i++)
    {
        if (!isalpha(name[i]))
        {
            return false;
        }
    }
    return true;
}
bool Validation::validatePassword(const string& password)
{
    return password.size() >= 8 && password.size() <= 20;
}
bool Validation::validateBalance(double balance)
{
    return balance >= 1500;
}
bool Validation::validateSalary(double salary)
{
    return salary >= 5000;
}
bool Validation::validateDeposit(double amount)
{
    return amount >= 0;
}
bool Validation::validateWithdraw(double amount, double balance)
{
    return amount >= 0 && amount <= balance;
}
bool Validation::validateTransfer(double amount, double balance)
{
    return amount >= 0 && amount <= balance;
}
