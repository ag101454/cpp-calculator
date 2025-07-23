#include <iostream>
#include <cassert>
#include "calculator.cpp"  // assuming Calculator class is in this file

using namespace std;

int main() {
    // Creating a calculator object with sample values
    Calculator calc(10, 5);

    // Running simple test cases
    assert(calc.addition() == 15);          
    assert(calc.subtraction() == 5);       
    assert(calc.multiplication() == 50);   
    assert(calc.division() == 2);          

    cout << "All basic tests passed successfully." << endl;

    return 0;
}

