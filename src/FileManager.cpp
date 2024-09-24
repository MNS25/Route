#include "FileManager.h"
#include <FileHelper.h>
void addClient(Client c)
{
    FileHelper::saveClient(c);
}
void addEmployee(Employee e)
{
    FileHelper::saveEmployee(e);
}
void addAdmin(Admin a)
{
    FileHelper::saveEmployee(a);
}
void getAllClients()
{
    FileHelper::getClients();
}
void getAllEmployees()
{
    FileHelper::getEmployees();
}
void getAllAdmins()
{
    FileHelper::getAdmins();
}
void removeAllClients()
{
    FileHelper::clearFile("clients.txt","last_clients_id.txt");
}
void removeAllEmployees()
{
    FileHelper::clearFile("Employee.txt","last_employee_id.txt");
}
void removeAllAdmins()
{
    FileHelper::clearFile("Admin.txt","last_admin_id.txt");
}
