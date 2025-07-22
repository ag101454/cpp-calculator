#include<iostream>
using namespace std;

class Calculator{
	public:
	int a;
	int b;
	
	Calculator(int x, int y) : a(x), b(y){
		
	}
	
	void Addition () {
		cout << "Sum of a+b: " << a+b << endl;
	}
	
	void Subtraction () {
		cout << "Subtraction of a-b : " << a-b << endl;
	}
	
	void Multiplication () {
		cout << "Multiplication of a*b : " << a*b <<endl;
	}
	
	void Division () {
		cout << "Division of a/b : " << a/b << endl;
	}
};

int main () {
	cout << "Welcome to Calculator " << endl;
	
	Calculator cal(5,6);
	cal.Addition();
	cal.Subtraction();
	cal.Multiplication();
	cal.Division();
	return 0;
}

