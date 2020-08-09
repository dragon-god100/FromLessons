//
// Created by Lotus on 09/08/2020.
//

#include "MyString.h"
#include <iostream>


MyString::MyString(char* string, int size) {
    // Constructor code
    this->str = string;
    this->size = size;
}

MyString::~MyString() {
    std::cout << "Class has been deleted" << std::endl;
}

void MyString::print() {
    for(int i = 0; i < this->size; i++) {
        std::cout << this->str[i];
    }
}
