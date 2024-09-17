#pragma once
#include "Person.h"
#include "Client.h"
#include <vector>
#include <iterator>
class Employee : public Person {
protected:
	//Attribute
	double salary;
public:
	Employee() : Person() {
		salary = 0;
	}
	Employee(int id, string name, string password, double salary) : Person(id, name, password) {
		setSalary(salary);
	}
	//Setter
	void setSalary(double salary) {
		this->salary = salary;
	}
	//Getter
	double getSalary() {
		return this->salary;
	}
	//Methods
	void display() {
		Person::display();
		cout << "Salary: " << this->salary << endl;
	}
	void addClient(Client& client) {
		allClients.push_back(client);
	}
	Client* searchClient(int id) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getID() == id) return clIt._Ptr;
		}
		return NULL;
	}
	void listClient() {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			clIt->display();
			cout << "-------------------------\n";
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}
};


static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;

