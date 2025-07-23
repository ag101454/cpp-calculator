#include <iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int x, int y) {
        num1 = x;
        num2 = y;
    }

    void add() {
        cout << "Result of addition: " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "Result of subtraction: " << (num1 - num2) << endl;
    }

    void multiply() {
        cout << "Result of multiplication: " << (num1 * num2) << endl;
    }

    void divide() {
        if (num2 == 0) {
            cout << "Cannot divide by zero." << endl;
        } else {
            cout << "Result of division: " << (num1 / num2) << endl;
        }
    }
};

int main() {
    cout << "=== Simple Calculator ===" << endl;

    // Let's say we want to do operations on 10 and 5
    Calculator calc(10, 5);

    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}



