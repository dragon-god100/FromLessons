//
// Created by Lotus on 27/07/2020.
//

#include "BankSystem.h"
#include <iostream>
using namespace std;

void BankSystem::clientLogin() {
    int current_id;
    int current_pass;

    cout << "hello, enter your id: ";
    cin >> current_id;
    cout << "enter your password: ";
    cin >> current_pass;

    for(int i = 0; i < bankData.clients.size(); i++) {
        if (bankData.clients[i].password == current_pass && bankData.clients[i].id == current_id) {
            cout << "the process success. welcome " << bankData.clients[i].name << " :)";
            this->logged_client = &(bankData.clients[i]);
            return;
        }
    }

    cout << "Client not found" << endl;
    this->logged_client = nullptr;
}

void BankSystem::clientRegister() {
    bankData.clients.emplace_back();

    cout << "enter your name: ";
    cin >> bankData.clients.back().name;
    cout << endl;

    cout << "enter your family name : ";
    cin >> bankData.clients.back().family_name;
    cout << endl;

    cout << "enter your mail: ";
    cin >> bankData.clients.back().email;
    cout << endl;

    cout << "enter your age : ";
    cin >> bankData.clients.back().age;
    cout << endl;

    cout << "enter your bank branch: ";
    cin >> bankData.clients.back().branch;
    cout << endl;

    cout << "enter your id: ";
    cin >> bankData.clients.back().id;
    cout << endl;

    cout << "enter your password: ";
    cin >> bankData.clients.back().password;
    cout << endl;
}

bool BankSystem::console() {
    // Choose to be client or worker in the system
    bool is_client = false;
    std::cout << "Are you a worker (0) or client (1)?";
    std::cin >> is_client;

    if(is_client) {
        bool is_signup = false;
        std::cout << "Do you want to login (0) or signup (1)?";
        std::cin >> is_signup;

        // Sign up a client if requested
        if(is_signup) this->clientRegister();

        // Request login until a match is found
        while(this->logged_client == nullptr) this->clientLogin();

        // Start client console
        Client::clientConsole(*(this->logged_client));

        this->logged_client = nullptr; // Disconnect client
        return true;
    }
}

BankSystem::BankSystem() {
    // Empty constructor
}

