#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
class Parser {
public:
    static vector<string> split(string line);
    static Client parseToClient(string line);
    static Admin parseToAdmin( string line);
    static Employee parseToEmployee( string line);


};

#endif // PARSER_H
