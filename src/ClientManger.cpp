#include "ClientManger.h"
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include <string>
#include <vector>
#include <iostream>
vector<Client*> ClientManger::clients;
ClientManger::ClientManger()
{

}
void ClientManger::printClientMenu(){
cout <<"==> Client Menu <==" << endl;
cout <<"1- Check Balance"<< endl;
cout <<"2- Deposit money"<< endl;
cout <<"3- Withdraw money"<< endl;
cout <<"4- Transfer money"<< endl;
cout <<"5- Display client information"<< endl;
cout <<"6- Log out"<< endl;
cout <<"Please select an option from 1 to 6 :"<<endl;
}
void ClientManger ::updatePassword(Person*person)
{
   if (person == nullptr)
   {
       cout << "Invalid person object";
       return;
   }
   string NewPass ,ConfirmPass;
   cout <<"Please enter the new password :"<<endl;
   cin >> NewPass;
    cout <<"Please confirm the new password:"<<endl;
   cin >> ConfirmPass;

   if  (NewPass==ConfirmPass)
   {
       if(person->Setpassword(NewPass))
       {
           cout <<"Password updated successfully!" << endl;
       }
       else{
        cout <<"Failed to update password due to validation error"<<endl;
       }
   }
   else{
    cout <<"password don't match ,please try again"<<endl;
   }
}

Client* ClientManger::login(int id , string password)
{
   for (Client*client : clients)
   {
       if(client->Getid()==id)
       {
           if(client->Getpassword() == password)
           {
               return client;
           }
           else{
            cout << "Password is incorrect"<< endl;
            return nullptr;
           }
       }
      } else{
        cout <<"Client not found";
        return nullptr;
       }
   }
}

bool ClientManager::clientOptions(Client* client) {
    if (!client) {
        cout << "No client is logged in." << endl;
        return false;
    }
    int choice;
    do{
        printClientMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                client->checkBalance();
                break;
            case 2: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                client->Deposit(amount);
                break;
            }
            case 3: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                client->withdraw(amount);
                break;
            }
            case 4: {
                double amount;
                int recipientId;
                cout << "Enter amount to transfer: ";
                cin >> amount;
                cout << "Enter recipient ID: ";
                cin >> recipientId;
                 Client* recipient = Employee::searchClient(recipientId);
                 if (recipient) {
                                  if (client->transferTo(amount, *recipient)) {
                                cout << "Transfer successful!" << endl;
                                }
                 else {
                     cout << "Transfer failed. Please check your balance or the amount." << endl;
                      }
                      }
                else {
                     cout << "Recipient not found." << endl;
                     }

                break;
            }
            case 5:
                client->DisplayInfo();
                break;
            case 6:
                cout << "Logging out..." << endl;
                return true;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 6);

    return false;
    }
}


ClientManger::~ClientManger()
{

}
