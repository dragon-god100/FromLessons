#include <iostream>
#include "SuperArray.h"

int main() {
    SuperArray sarr(0);

    int a = 0;
    std::cout << "Enter amount of element: ";
    std::cin >> a;
    sarr.expand(a);
    for(int i = 0; i < a; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> sarr[i];
    }

    for(int i = 0; i < sarr.size(); i++) std::cout << sarr[i] << " ";

    return 0;
}
