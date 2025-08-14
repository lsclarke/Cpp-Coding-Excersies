// MemoryLeakChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // Memory Leak Test raw pointer Example

    int* x = new int;        //create new int
    *x = 10;

    auto& result_One = *x;

    cout << "Memory Leak Test One" << endl;
    cout << "Address: " << &result_One << endl;
    cout << "Result: " << result_One << endl;
    cout << "Memory Leak no delete call\n" << endl;

//////////////////////////////////////////////////////////////////////////////////////

    // No Memory Leak raw point Example

    int* y = new int;        //create new int
    *y = 10;

    auto result_Two = *y;
    delete[] y;     //Delete is called after result equals y value

    cout << "Memory Leak Test Two" << endl;
    cout << "Address: " << &result_Two << endl;
    cout << "Result: " << result_Two << endl;
    cout << "No Memory Leak! Result equals y (value) before, right before delete call\n" << endl;

    //////////////////////////////////////////////////////////////////////////////////////

    // No Memory Leak smart pointer Example

    std::unique_ptr<int> z = std::make_unique<int>(10);

    auto result_Three = *z;

    cout << "Memory Leak Test Three" << endl;
    cout << "Address: " << &result_Three << endl;
    cout << "Result: " << result_Three << endl;
    cout << "No Memory Leak! Result equals z (value), smart pointer automatically makes delete call\n" << endl;

    //////////////////////////////////////////////////////////////////////////////////////

    // No Memory Leak smart pointer Example

    std::unique_ptr<int> a = std::make_unique<int>(100'000'000);

    auto temp = *a;

    auto result_four = temp;

    cout << "Memory Leak Test Four" << endl;
    cout << "Address: " << &result_four << endl;
    cout << "Result: " << result_four << endl;
    cout << "No Memory Leak! Result equals a (value), smart pointer automatically makes delete call\n" << endl;

    cin.get();

    return 0;
}