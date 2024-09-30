#ifndef CLIENTMANGER_H
#define CLIENTMANGER_H
#include "Person.h"
#include "Client.h"
#include <string>

using namespace std;

class ClientManger
{
    public:
        ClientManger();
        virtual ~ClientManger();
        static void printClientMenu();
        static void updatePassword(Person*person);
        static Client*login(int id , string password);
        static bool clientOptions(Client* client);

        private:
        static vector<Client*> clients;



};

#endif // CLIENTMANGER_H
