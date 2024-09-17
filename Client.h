#pragma once
#include "Person.h"
class Client : public Person {
private:
	//Attribute
	double balance;
public:
	//Setter
	void setBalance(double balance) {
		this->balance = balance;
	}
	//Getter
	double getBalance() {
		return this->balance;
	}
	//Methods
	void display() {
		Person::display();
		cout << "Balance: " << this->balance << endl;
	}
	void deposit(double amount) {
		if (amount > 0) {
			this->balance += amount;
			cout << "\nSuccessful transaction.\n";
		}
		else cout << "\nThe amount is less than Permitted.\n";
	}
	void withdraw(double amount) {
		if (amount <= balance) {
			this->balance -= amount;
			cout << "\nSuccessful transaction.\n";
		}
		else cout << "\nAmount Exceeded.\n";
	}
	void transferTo(double amount, Client& recipient) {
		if (amount <= balance) {
			this->balance -= amount;
			recipient.balance += amount;
			cout << "\nSuccessful transaction.\n";
		}
		else cout << "\nAmount Exceeded.\n";
	}
	void checkBalance() {
		cout << "Balance: " << this->balance << endl;
	}
};

static vector<Client> allClients;
static vector<Client>::iterator clIt;