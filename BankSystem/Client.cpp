//
// Created by Lotus on 05/07/2020.
//

#include "Client.h"
#include "BankData.h"

using namespace std;

void Client::showInfo() {

}

void Client::signup() {
    cout << "enter your name: ";
    cin >> this->name;
    cout << endl;

    cout << "enter your family name : ";
    cin >> this->family_name;
    cout << endl;

    cout << "enter your mail: ";
    cin >> this->email;
    cout << endl;

    cout << "enter your age : ";
    cin >> this->age;
    cout << endl;

    cout << "enter your bank branch: ";
    cin >> this->branch;
    cout << endl;

    cout << "enter your id: ";
    cin >> this->id;
    cout << endl;

    cout << "enter your password: ";
    cin >> this->password;
    cout << endl;
}

Client* Client::login() {
    int current_id;
    int current_pass;

    cout << "hello, enter your id: ";
    cin >> current_id;
    cout << "enter your password: ";
    cin >> current_pass;

    for(int i = 0; i < clients.size(); i++) {
        if (clients[i].password == current_pass && clients[i].id == current_id) {
            cout << "the process success. welcome " << clients[i].name << " :)";
            return &(clients[i]);
        }
    }

    cout << "Client not found" << endl;
    return nullptr;
}

void Client::clientConsole() {
    int deposit;
    int withdrawl;

    while(true){
        // get command
        int command;
        cout << "enter command( 0 - actions with account, 1 - cash deposit, 2 - cash withdrawl ,  3- exit )" ;
        cin >> command;

        if(command == 3) break;
        if(command > 3) {
            std::cout << "Illegal Command" << std::endl;
            continue;
        }
        switch(command){
            case 0:
                this->additionalActions();
                break;
            case 1:
                cout << "enter your deposit : ";
                cin >> deposit ;
                deposit += deposit;
                break;
            case 2:
                cout << "enter your withdrawl: ";
                cin >> withdrawl;
                withdrawl += withdrawl;
                break;
        }
        this->total_money = deposit - withdrawl ;
    }
    cout << "you have " << this->total_money << "$" << endl;
}

void Client::additionalActions() {
    while(true){
        int commando;
        cout << "enter command(0 - calculate security deposit  , 1 - information about you,  2 - exit)";
        cin >> commando;
        if(commando == 2) break;
        if(commando > 2) {
            std::cout << "Illegal Command" << std::endl;
            continue;
        }
        switch(commando){
            case 0:
                this->ribit();
                break;
            case 1:
                this->showInfo();
                break;
        }
    }
}

void Client::ribit() {
    int secure_deposit;
    int years;
    int total_money;

    cout << " calculate your profit from security deposit " << endl << "you will receive 3% in year  " << endl;
    cout << "how long you want put your money in the bank?  ";
    cin >> years;
    cout << "how much money you want put in the bank? ";
    cin >> secure_deposit;
    // secure_deposit *= pow(1.03, years);
    for(int i = 0; i < years; i++){
        secure_deposit = 1.03 * secure_deposit;
    }
    cout << "your will have " << secure_deposit <<"$  after " << years << " years" << endl;
}
