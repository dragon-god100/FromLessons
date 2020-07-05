#include "Client.h"
#include <iostream>

using namespace std;

void Client::Register(){
     Client client;
     cout << "enter your name: ";
     cin >> this->name;
     cout << endl;

     cout << "enter your family name : ";
     cin >> this->family_name;
     cout << endl;

     cout << "enter your mail: ";
     cin >> this->mail;
     cout << endl;

     cout << "enter your age : ";
     cin >> this->age;
     cout << endl;

     cout << "enter your bank name: ";
     cin >> this->bank_name;
     cout << endl;

     cout << "enter your bank branch: ";
     cin >> this->bank_branch;
     cout << endl;

     cout << "enter your id: ";
     cin >> this->id;
     cout << endl;

     cout << "enter your password: ";
     cin >> this->password;
     cout << endl;
}

void Login::login(){
     Login youlog;
     cout << "hello user. enter your id: ";
     cin >> this->id;
     cout << "enter your password: ";
     cin >> this->password;
}

 void Client::Account_information(){
     cout << "name: " << this->name << endl;
     cout << "family name:" << this->family_name << endl;
     cout << "mail: " << this->mail << endl;
     cout << "age: " << this->age << endl;
     cout << "bank name: " << this->bank_name << endl;
     cout << "bank branch: " << this->bank_branch << endl;
     cout << "id: " << this->id << endl;
}

void Client::security_deposit(){
     int secur_deposit;
     int years;
     int total_money;
     cout << " calculate your profit from security deposit " << endl << "you will receive 3% in year  " << endl;
     cout << "how long you want put your money in the bank?  ";
     cin >> years;
     cout << "how much money you want put in the bank? ";
     cin >> secur_deposit;
     for(int i = 0; i < years; i++){
     int profit = secur_deposit / 100 * 3;
      total_money = secur_deposit + profit;
     secur_deposit = total_money;
     }
     cout << "your will have " << secur_deposit <<"$  after " << years << " years" << endl;
}


void Client::actions_account(){
     Client client;
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
          this->security_deposit();
          break;
     case 1:
          this->Account_information();
          break;

          }
     }
}





