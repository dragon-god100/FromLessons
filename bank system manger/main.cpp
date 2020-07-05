#include "include/Client.h"
#include <iostream>

struct BankUser {
    std::string name;
    std::string  family_name;
    std::string mail;
    int credit;
    int age;
    int money;
    int id;
};

int main() {
     Client client;
     Login youlog;
     int total_money = 0;
     int Cash_deposit ;
     int Cash_withdrawl;
     int current_withdrawl = 0;
     int current_deposit = 0;
    client.Register();
    youlog.login();


   while(true){
      cout << endl <<"enter your id: ";
      cin >> youlog.id;
      cout << endl << "enter your password: ";
      cin >> youlog.password;
     if(client.password == youlog.password && client.id == youlog.id){
          cout << "the process success. welcome :)";
          break;
     }
   else if(client.password != youlog.password || client.id != youlog.id){
          cout << "worng answer. try again: " << endl;
          continue;
     }
   }
   while(true){
      //get command
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
          client.actions_account();
          break;
     case 1:
          cout << "enter your deposit : ";
          cin >> Cash_deposit ;
          current_deposit += Cash_deposit;
          break;
     case 2:
          cout << "enter your withdrawl: ";
          cin >> Cash_withdrawl;
          current_withdrawl += Cash_withdrawl;
          break;
     }
      total_money = current_deposit - current_withdrawl ;
   }
   cout << "you have " << total_money << "$" << endl;
}
