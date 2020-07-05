//
// Created by Lotus on 05/07/2020.
//

#ifndef BANKSYSTEM_CLIENT_H
#define BANKSYSTEM_CLIENT_H

#include <iostream>
#include <string>


class Client {
public:
    // Client metadata
    std::string name;
    std::string family_name;
    std::string email;
    int id;
    int age;
    int password;
    int branch;

    // Client bank data
    int total_money;

    // Client functions
    void showInfo();
    void signup();
    void clientConsole();
    void additionalActions();
    void ribit();

    static Client* login(); // No what what object, this is the same function
};


#endif //BANKSYSTEM_CLIENT_H
