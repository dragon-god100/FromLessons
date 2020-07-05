#include <iostream>
#include <vector>
#include "BankData.h"
#include "Client.h"
#include "Worker.h"

// Workers
// Clients

int main() {
    std::vector<Worker> workers;

    bool is_client = false;
    std::cout << "Are you a client (0) or worker (1)?";
    std::cin >> is_client;

    if(is_client) {
        // Client logic
        while(true) {
            clients.emplace_back(Client());
            clients.front().signup();
            Client *to_use = Client::login();
            while (to_use == nullptr) to_use = Client::login();
            to_use->clientConsole();
        }
    }
    else {
        // Worker logic
    }

    return 0;
}
