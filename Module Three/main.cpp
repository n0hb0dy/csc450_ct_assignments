#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variables
    int value1;
    char value2;
    string value3;

    // Prompt user
    std::cout << "Enter integer, then character, then string:\n";
    std::cin >> value1 >> value2 >> value3;

    // Pointers
    int *ptr1 = new int(value1);
    char *ptr2 = new char(value2);
    string *ptr3 = new string(value3);

    // Print Variables and Pointers
    std::cout << "\nContents of variables:\n";
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << "Value 3: " << value3 << std::endl;

    std::cout << "\nContents of pointers:\n";
    std::cout << "Pointer 1: " << *ptr1 << std::endl;
    std::cout << "Pointer 2: " << *ptr2 << std::endl;
    std::cout << "Pointer 3: " << *ptr3 << std::endl;

    // Relieve memory
    delete ptr1, ptr2, ptr3;

    return 0;
}