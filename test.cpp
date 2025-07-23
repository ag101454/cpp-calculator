#include <iostream>
#include <cassert>
#include "calculator.cpp"  // Include your calculator code

using namespace std;

int main() {
    Calculator cal(10, 5);

    assert(cal.addition() == 15);
    assert(cal.subtraction() == 5);
    assert(cal.multiplication() == 50);
    assert(cal.division() == 2);

    cout << "All tests passed!" << endl;
    return 0;
}
