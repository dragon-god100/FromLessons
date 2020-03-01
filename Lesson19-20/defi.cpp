//
// Created by Lotus on 01/03/2020.
//
#include <iostream>
#include "first.h"
#include "second.h"

void static_a() {
    std::cout << "Ya Kakayu" << std::endl;
}

void extern_b() {
    static_a();
}