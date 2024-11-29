#include <iostream>
using namespace std;
int main () {
	char gender;
	cout << "Enter the gender: ";
	cin >> gender;
	switch (gender) {
		case 'M':
			cout << "Gender is Male!";
			break;
		case 'F':
			cout << "Gender is Female";
			break;
		default:
			cout << "Invalid!";
			break;
	}
}
