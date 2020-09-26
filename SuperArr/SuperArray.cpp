//
// Created by Lotus on 26/09/2020.
//

#include "SuperArray.h"
#include <exception>
#include <stdexcept>

SuperArray::SuperArray() {
    this->length = 0;
    this->arr = new int[this->length];
}

SuperArray::SuperArray(int length) {
    this->length = length;
    this->arr = new int[this->length];
}

int SuperArray::size() const {
    return this->length;
}

void SuperArray::pop() {
    if(this->length > 0) this->length--;
}

void SuperArray::expand(int amount) {
    if(amount <= 0) return;
    int * temp = new int[this->length + amount];
    for(int  i = 0; i < this->length; i++ ){
        temp[i] = this->arr[i];
    }
    if(this->length != 0) delete[] this->arr; // Delete previous memory location
    this->arr = temp; // Copy new location and store it
    this->length += amount; // Update length to match new one
}

void SuperArray::push(int value) {
    this->expand(1); // Expand array by one
    this->arr[this->length - 1] = value; // Assign last new value
}

int &SuperArray::operator[](int index) {
    if(index < 0) throw std::out_of_range("Under 0");
    if(index >= this->length) throw std::out_of_range("Out of range");
    return this->arr[index];
}

