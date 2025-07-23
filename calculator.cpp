#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    Calculator(int x, int y) : a(x), b(y) {
	
	}

    int addition() { return a + b; }
    int subtraction() { return a - b; }
    int multiplication() { return a * b; }
    int division() {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

