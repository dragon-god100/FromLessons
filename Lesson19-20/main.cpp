#include <iostream>
#include "first.h"
#include "second.h"

void static_a() {
    std::cout << "Ya Ne Kakayu" << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    static_a();
    extern_b();
    return 0;
}
