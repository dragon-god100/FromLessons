//
// Created by Lotus on 26/09/2020.
//

#ifndef SUPERARR_SUPERARRAY_H
#define SUPERARR_SUPERARRAY_H

// Super Array:
// Add element to top of array (push) V
// Remove last one (pop) V
// Remove by index (remove)
// Get elements by index (get => operator[]) V
// Change elements by index (set => operator[]) V
// Expand array size by value provided (expand) V
// Get size of array (size) V
// Print the array (print)

class SuperArray {
public:
    SuperArray();
    SuperArray(int length);
    int size() const; // Spectator
    void pop(); // Mutator
    void expand(int amount);
    void push(int value);
    int& operator[](int index);

private:
    int * arr;
    int length;
};

#endif //SUPERARR_SUPERARRAY_H
