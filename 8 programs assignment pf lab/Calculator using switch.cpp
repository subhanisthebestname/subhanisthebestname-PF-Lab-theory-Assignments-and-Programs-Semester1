#include <iostream>
using namespace std;
int main() {
	int a,b;
	char operation;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << "Enter the operation: ";
	cin >> operation;
	switch (operation){
		case '+':
			cout << "The Sum of two values are: "<<a+b;
			break;
		case '-':
			cout << "The Difference of two number are: "<<a-b;
			break;
		case '*':
			cout << "The Product of two numbers are: "<<a*b;
			break;
		case '/':
			cout << "The Division of two number are: "<<a/b;
			break;
	}
}
