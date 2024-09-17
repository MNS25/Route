#include <iostream>
#include <fstream>
#include <person.h>
#include <Employee.h>
#include <Validation.h>
#include <Client.h>
#include <Admin.h>
using namespace std;

int main()
{

    //Admin
    cout << "\nSetting up Admin details..." << endl;
    ofstream TextFile("Admin.txt");
    TextFile<< "Admin"<<endl;
    Admin AdminObj;
    cout<< "Enter Admin name: ";
    string AdminName;
    cin>>AdminName;
    TextFile<<AdminName<< " ";
    cout<<endl;
    if(AdminObj.Setname(AdminName))
        cout << "Name set successfully." << endl;
    else
        cout << "Failed to set name." << endl;
    cout<< "Enter Admin pass: ";
    string AdminPass;
    cin>>AdminPass;
    TextFile<<AdminPass<< " ";
    cout<<endl;
    if(AdminObj.Setpassword(AdminPass))
        cout << "Password set successfully." << endl;
    else
        cout << "Failed to set password." << endl;
    cout<< "Enter "<<AdminName<< " salary : ";
    double Adminsalary;
    cin>>Adminsalary;
    cout<<endl;
    TextFile<<Adminsalary<< " ";
    if (AdminObj.setSalary(Adminsalary))
        cout << "salary set successfully." << endl;
    else
        cout << "Failed to set salary." << endl;
    int AdminId;
    cout<< "Enter the ID of "<<AdminName<< " : ";
    cin>>AdminId;
    cout<<endl;
    TextFile<<AdminId<< " ";
    AdminObj.Setid(AdminId);
    cout<< "\nDisplaying employee info:"<<endl;
    AdminObj.DisplayInfo();
    TextFile.close();
    //employee
    cout << "\nSetting up employee details..." << endl;
    ofstream text("Employee.txt");
    text<< "Employee"<<endl;
    Employee e;
    cout<< "Enter employee name: ";
    string s;
    cin>>s;
    text<<s<< " ";
    cout<<endl;
    if(e.Setname(s))
        cout << "Name set successfully." << endl;
    else
        cout << "Failed to set name." << endl;
    cout<< "Enter employee pass: ";
    string p;
    cin>>p;
    text<<p<< " ";
    cout<<endl;
    if(e.Setpassword(p))
        cout << "Password set successfully." << endl;
    else
        cout << "Failed to set password." << endl;
    cout<< "Enter "<<s<< " salary : ";
    double salary;
    cin>>salary;
    cout<<endl;
    text<<salary<< " ";
    if (e.setSalary(salary))
        cout << "salary set successfully." << endl;
    else
        cout << "Failed to set salary." << endl;
    int i;
    cout<< "Enter the ID of "<<s<< " : ";
    cin>>i;
    cout<<endl;
    text<<i<< " ";
    e.Setid(i);
    cout<< "\nDisplaying employee info:"<<endl;
    e.DisplayInfo();
    text.close();
    //client
    ofstream file("Clients.txt");
    file<<"Client1"<<endl;
    cout << "\nSetting up client1 details..." << endl;
    Client client1;
    string name;
    cout<< "Enter the name of first Client : ";
    cin>>name;
    cout<<endl;
    file<<name<<" ";
    if (client1.Setname(name))
        cout << "Name set successfully." << endl;
    else
        cout << "Failed to set name." << endl;
    string pass;
    cout<< "Enter the pass of "<<name<< " account : ";
    cin>>pass;
    cout<<endl;
    file<<pass<<" ";
    if (client1.Setpassword(pass))
        cout << "Password set successfully." << endl;
    else
        cout << "Failed to set password." << endl;
    int balance;
    cout<< "Enter the balance of "<<name<< " account : ";
    cin>>balance;
    cout<<endl;
    file<<balance<<" ";
    if (client1.setBalance(balance))
        cout << "Balance set successfully." << endl;
    else
        cout << "Failed to set balance." << endl;
    int id;
    cout<< "Enter the ID of "<<name<< " account : ";
    cin>>id;
    cout<<endl;
    file<<id<<endl;
    client1.Setid(id);

    cout << "\nDisplaying client1 info:" << endl;
    client1.DisplayInfo();
    int n;
    cout<< "Enter the amount you want to deposit: ";
    cin>>n;
    cout<< endl;
    cout << "\nDepositing "<<n<< " to "<<name<< " account..." << endl;
    if (client1.Deposit(n))
        client1.checkBalance();
    int m;
    cout<< "Enter the amount you want to withdraw: ";
    cin>>m;
    cout<< endl;
    cout << "\nWithdrawing " <<m<< " from "<<name<< " account..." << endl;
    if (client1.withdraw(m))
        client1.checkBalance();

    AdminObj.addclient(client1);
    // Create another object
    file<<"client 2 "<<endl;
    Client client2;
    cout << "\nSetting up client2 details..." << endl;
    string name1;
    cout<< "Enter the name of seconde Client : ";
    cin>>name1;
    cout<<endl;
    file<<name1<< " ";
    if (client2.Setname(name1))
        cout << "Name set successfully." << endl;
    else
        cout << "Failed to set name." << endl;
    string pass1;
    cout<< "Enter the pass of "<<name1<< " account : ";
    cin>>pass1;
    cout<<endl;
    file<<pass1<<" ";
    if (client2.Setpassword(pass1))
        cout << "Password set successfully." << endl;
    else
        cout << "Failed to set password." << endl;
    int balance1;
    cout<< "Enter the balance of "<<name1<< " account : ";
    cin>>balance1;
    cout<<endl;
    file<<balance1<<" ";
    if (client2.setBalance(balance1))
        cout << "Balance set successfully." << endl;
    else
        cout << "Failed to set balance." << endl;
    int id1;
    cout<< "Enter the ID of "<<name1<< " account : ";
    cin>>id1;
    cout<<endl;
    file<<id1<<endl;
    client2.Setid(id1);


    cout << "\nDisplaying client2 info:" << endl;
    client2.DisplayInfo();

    int amount;
    cout << "Enter the amount to transfer: ";
    cin >> amount;
    cout << endl;

    string senderName, receiverName;
    cout << "Who will transfer the amount? ";
    cin >> senderName;
    cout << "Who will receive the amount? ";
    cin >> receiverName;
    cout << endl;

    if (senderName == client1.Getname() && receiverName == client2.Getname())
    {
        cout << "Transferring " << amount << " from " << client1.Getname() << " to " << client2.Getname() << "..." << endl;
        if (client1.transferTo(amount, client2))
        {
            cout << "Transfer successful." << endl;
        }
        else
        {
            cout << "Transfer failed." << endl;
        }
    }
    else if(senderName == client2.Getname() && receiverName == client1.Getname())
    {
         cout << "Transferring " << amount << " from " << client2.Getname() << " to " << client1.Getname() << "..." << endl;
        if (client2.transferTo(amount, client1))
        {
            cout << "Transfer successful." << endl;
        }
        else
        {
            cout << "Transfer failed." << endl;
        }
    }
    else
    {
        cout << "Error: Invalid sender or receiver name." << endl;
    }

    cout << "\nFinal balances after transfer:" << endl;
    cout << "Client1 ("<<name<<") Balance: ";
    client1.checkBalance();

    cout << "Client2 ("<<name1<<") Balance: ";
    client2.checkBalance();
    file.close();
    AdminObj.addclient(client2);
    cout<< "List All Clients:"<<endl;
    AdminObj.listClient();

    return 0;
}
