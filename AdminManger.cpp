#include "AdminManger.h"
#include"Admin.h"
#include"Employee.h"
#include<string>



void printAdminMenu() {

    cout << "Admin Menu:\n";

    cout << "1. View Employees\n";

    cout << "2. Add Employee\n";

    cout << "3. Remove Employee\n";

    cout << "4. Exit\n";

}



Admin* login(int id, const std::string& password) {

        auto it = admins.find(id);

        if (it != admins.end() && it->second.password == password) {

            return &it->second;

    }
            return nullptr;
}



static bool AdminOptions(Employee* employee) {

    int choice;

    printAdminMenu();

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Viewing Employees...\n";
            break;
        case 2:
            cout << "Adding Employee: " << employee->name << "\n";
            break;
        case 3:
           cout << "Removing Employee: " << employee->name << "\n";
            break;
        case 4:
            cout << "Exiting...\n";
            return false;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }
    return true;

}



















