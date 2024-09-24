#include "Parser.h"
#include <iostream>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
#include <vector>
#include <sstream>
#include <cctype>
#include <string>

vector<string> Parser::split(string line)
{
    stringstream ss(line);
        string word;
        vector<string> result;
        while (ss >> word) {
            result.push_back(word);
        }
        return result;
}
Client Parser::parseToClient(string line) {
        auto data = split(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double balance = stod(data[3]);
        return Client(id, name, password, balance);
    }
Employee Parser::parseToEmployee( string line) {
        auto data = split(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double salary = stod(data[3]);
        return Employee(id, name, password, salary);
    }
Admin Parser::parseToAdmin(string line) {
        auto data = split(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double salary = stod(data[3]);
        return Admin(id, name, password, salary);
    }
