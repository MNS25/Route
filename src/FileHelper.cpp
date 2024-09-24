#include "FileHelper.h"
#include <fstream>
#include <string>
#include <vector>
#include <Client.h>
#include <parser.h>
#include <Employee.h>
using namespace std;
FileHelper::FileHelper()
{

}
void FileHelper::saveLast(string fileName, int id)
{
    ofstream file(fileName);
    if (file.is_open())
    {
        file << id;
        file.close();
    }
    else
    {
        cout << "Unable to open file: " << fileName << endl;
    }
}
int FileHelper::getLast(string fileName)
{
    ifstream file(fileName);
    int id = 0;
    if (file.is_open())
    {
        file >> id;
        file.close();
    }
    else
    {
        cout << "Unable to open file: " << fileName << endl;
    }
    return id;
}
void FileHelper::saveClient(Client c) {
        ofstream file("clients.txt", ios::app);
        if (file.is_open()) {
            file << c.Getid() << " " << c.Getname() << " " << c.Getpassword() << " " << c.GetBalance() << endl;
            file.close();
        } else {
            cout << "Unable to open file: Clients.txt" << endl;
        }
    }
void FileHelper::saveEmployee(Employee e) {
        ofstream file("Employee.txt", ios::app);
        if (file.is_open()) {
            file << e.Getid() << " " << e.Getname() << " " << e.Getpassword() << " " << e.GetSalary() << endl;
            file.close();
        } else {
            cout << "Unable to open file: Employee.txt" << endl;
        }
    }
vector<Client> FileHelper::getClients() {
        vector<Client> clients;
        ifstream file("clients.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                clients.push_back(Parser::parseToClient(line));
            }
            file.close();
        } else {
            cout << "Unable to open file: clients.txt" << endl;
        }
        return clients;
    }
vector<Employee> FileHelper::getEmployees() {
        vector<Employee> employees;
        ifstream file("employees.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                employees.push_back(Parser::parseToEmployee(line));
            }
            file.close();
        } else {
            cout << "Unable to open file: employees.txt" << endl;
        }
        return employees;
    }
vector<Admin> FileHelper::getAdmins() {
        vector<Admin> admins;
        ifstream file("admins.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                admins.push_back(Parser::parseToAdmin(line));
            }
            file.close();
        } else {
            cout << "Unable to open file: admins.txt" << endl;
        }
        return admins;
    }
void FileHelper::clearFile(string fileName, string lastIdFile) {
        ofstream file(fileName, ios::trunc);
        if (file.is_open()) {
            file.close();
            saveLast(lastIdFile, 0);
        } else {
            cout << "Unable to open file: " << fileName << endl;
        }
    }
