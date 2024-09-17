#pragma once
#include <iostream>
#include <string>
#include"Validation.h"
using namespace std;

class Person {
protected:
	//Attributes
	string name;
	int id;
	string password;
public:
	Person() {
		id = 0;
	}
	Person(int id, string name, string password) {
		this->id = id;
		this->name = name;
		this->password = password;
	}
	//Setters
	void setName(string name) {
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	void setPassword(string password) {
		this->password = password;
	}
	//Getters
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	string getPassword() {
		return password;
	}
	//Method
	void display() {
		cout << "Name: " << this->name << endl;
		cout << "Id: " << this->id << endl;
		cout << "Password: " << this->password << endl;
	}
};

