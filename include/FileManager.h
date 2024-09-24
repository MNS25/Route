#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <Client.h>
#include <DataSourceInterface.h>
class FileManager :public DataSourceInterface
{
public:
    void addClient(Client c);
    void addEmployee(Employee e);
    void getAllClients();
    void getAllEmployees();
    void getAllAdmins();
    void removeAllClients();
    void removeAllEmployees();
    void removeAllAdmins();

};

#endif // FILEMANAGER_H
