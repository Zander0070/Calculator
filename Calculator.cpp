#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float num1, num2;
	char input;


	cout << "hello to the caluclator :)" << endl;
	cout << "-------------------" << endl;
	cout << "Please enter your two values below " << endl;
	cin >> num1 >> num2;

	cout << "Please add your operator ";
	cin >> input;

	switch (input) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	default:
		cout << "invalid operator " << endl;


	
	}

	return 0;

}
