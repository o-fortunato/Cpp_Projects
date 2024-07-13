// Ch12-Compound_Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string_view>

void swap(int* x, int* y) {
    int swap{ *x };
    *x = 4;
    *y = swap;
}

int main()
{
    short x{ 1 };
    short* sptr{ &x };
    short& xref{ x };
    std::string s{};
    std::string& sref{ s };
    std::string* strptr{ &s };

    std::cout << sizeof(short) << '\n';
    std::cout << sizeof(x) << '\n';
    std::cout << sizeof(sptr) << '\n';
    std::cout << sizeof(xref) << '\n';
    std::cout << sizeof(long) << '\n';
    std::cout << sizeof(long long) << '\n';
    std::cout << sizeof(std::string) << '\n';
    std::cout << sizeof(std::string_view) << '\n';
    std::cout << sizeof(s) << '\n';
    std::cout << sizeof(sref) << '\n';
    std::cout << sizeof(strptr) << '\n';
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
