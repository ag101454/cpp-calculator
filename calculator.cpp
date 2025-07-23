#include<iostream>
using namespace std;

class Calculator {
public:
    int a;
    int b;

    Calculator(int x, int y) : a(x), b(y) {}

    void Addition () {
        cout << "Sum of a+b: " << a+b << endl;
    }

    void Subtraction () {
        cout << "Subtraction of a-b: " << a-b << endl;
    }

    void Multiplication () {
        cout << "Multiplication of a*b: " << a*b << endl;
    }

    void Division () {
        if (b != 0)
            cout << "Division of a/b: " << a/b << endl;
        else
            cout << "Cannot divide by zero." << endl;
    }
};

int main () {
    cout << "Welcome to Calculator " << endl;

    Calculator cal(10, 5);
    cal.Addition();
    cal.Subtraction();
    cal.Multiplication();
    cal.Division();

    return 0;
}

