//
// Created by Lotus on 09/08/2020.
//

#ifndef STRINGSLESSON_MYSTRING_H
#define STRINGSLESSON_MYSTRING_H

/**
 * Class is basically s struct with function & an option to make some variables/function private
 * public, private, protected
 * constructor/destructor
 */
class MyString {
public: // Everyone can see and access
    bool is_awesome = false;
    MyString(char* string, int size); // Constructor
    ~MyString(); // Destructor
    int getSize();
    void print(); // Print the current string
private: // Only the object itself can access them
    char* str;
    int size;
};


#endif //STRINGSLESSON_MYSTRING_H
