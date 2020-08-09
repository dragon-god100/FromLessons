#include <iostream>
#include <cstring>
#include <string>
#include "MyString.h"

/**
 * Copy a string and return the new location of the copy
 * @param input The string to copy
 * @return Pointer to the copied string
 */
char* copyString(const char* input) {
    char* result = new char[strlen(input) + 1];
    strcpy(result, input);
    return result;
}

/**
 * Using a std::string as input will copy the string passed to it
 * std::string_view will copy only the pointer to the input and its size
 * @param filename
 * @return
 */
std::string getExtension(std::string_view filename) { // Feature of c++17
    return filename.substr(filename.rfind('.') + 1).data(); // To convert a string view to a string use .data()
}

int main() {
    // C-Style String (Char array)
    std::cout << "Hello, World!" << std::endl; // String Literal
    // They will have the same location in memory
    char* ptr = "Hello, World!";
    const char* a = "Hello, World!"; // This is the best practice

    // This will make a copy and have its own memory
    char arr[] = "Hello"; // '\0' - NULL Character
    std::cout << strlen(arr) << std::endl;
    std::cout << sizeof(arr) << std::endl; // real size: strlen(arr) + 1

    ptr = copyString("Hello"); // String literal as input (char*)

    char brr[] = ", World";
    char combine[strlen(arr) + strlen(brr) + 1];
    strcat(combine, arr);
    strcat(combine, brr);
    // Hello, World
    std::cout << combine << std::endl;

    // C++-Style String
    std::string s = "Yey\n\t\"";
    std::string other = R"(bey
"" sdfsdf
sdfsdf)"; // Another way to make a string literal
    std::string n = s + other; // Yeybey

    std::cout << getExtension("C:/koldavar.hacol") << std::endl;
    std::cout << n.size() << std::endl;
    std::cout << n << std::endl;

    // MyString example
    MyString *mys = new MyString("some shit", 9);
    mys->print();
    mys->is_awesome = true;
    delete mys; // Calls destructor
    // mys.size = 6; - Cannot access a private variable
    MyString mama("hello", 5);
    mama.print();

    return 0;
}
