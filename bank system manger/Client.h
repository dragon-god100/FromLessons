#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

using namespace std;


class Client{
public:
    std::string name;
    std::string family_name;
    std::string mail;
    std::string bank_name;
    std::string bank_branch;
    int age;
    int id;
    int password;
    void Register();
    void Account_information();
    void actions_account();
    void security_deposit();
    void Log_out();
};

class Login{
public:
    int id;
    int password;
    void login();
};




/*class Client
{
     public:
          Client();
          virtual ~Client();

     protected:

     private:
};*/

#endif // CLIENT_H
