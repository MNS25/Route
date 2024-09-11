#ifndef VALIDATION_H
#define VALIDATION_H

#include <iostream>

using namespace std;

class Validation
{
    public:
        Validation();
        static bool validateName(const string& name);
        static bool validatePassword(const string& password);
        static bool validateBalance(double balance);
        static bool validateSalary(double salary);
        static bool validateDeposit(double amount);
        static bool validateWithdraw(double amount, double balance);
        static bool validateTransfer(double amount, double balance);


};

#endif // VALIDATION_H
