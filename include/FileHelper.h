#ifndef FILEHELPER_H
#define FILEHELPER_H
#include <iostream>
#include <Client.h>
#include <Employee.h>
#include <vector>
#include <Admin.h>
using namespace std;


class FileHelper
{
public:
    FileHelper();
    static void saveLast(string fileName, int id);
    static int getLast(string fileName);
    static void saveClient(Client c);
    static void saveEmployee( Employee e);
    static vector<Client> getClients();
    static vector<Employee> getEmployees();
    static vector<Admin> getAdmins();
    static void clearFile(string fileName, string lastIdFile);

};

#endif // FILEHELPER_H
