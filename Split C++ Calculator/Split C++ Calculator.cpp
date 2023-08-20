#include <iostream>
#include "Calculations.h"

int main()
{
    Calculations c;
    int* a = new int;
    char* o = new char;
    int* b = new int;

    std::cout << "Calculation: ";
    std::cin >> *a >> *o >> *b;
    std::cout << std::endl;

    if (*o == '+') {
        std::cout << *a << " + " << *b << " = " << c.add(*a, *b) << std::endl;
    }
    else if (*o == '-') {
        std::cout << *a << " - " << *b << " = " << c.subtract(*a, *b) << std::endl;
    }
    else if (*o == '*') {
        std::cout << *a << " * " << *b << " = " << c.times(*a, *b) << std::endl;
    }
    else if (*o == '/') {
        std::cout << *a << " / " << *b << " = " << c.divide(*a, *b) << std::endl;
    }
    else {
        std::cout << *o << " is not a valid operator." << std::endl;
    }

    std::cout << std::endl << "End of program." << std::endl;

    delete a;
    delete o;
    delete b;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
