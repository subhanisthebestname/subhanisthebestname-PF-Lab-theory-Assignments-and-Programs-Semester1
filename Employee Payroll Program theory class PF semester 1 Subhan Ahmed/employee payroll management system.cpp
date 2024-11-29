#include <iostream>
using namespace std;
int main () {
	double basicsalary, bonusper, taxper;
	cout << "Enter Basic salary of employee: ";
	cin >> basicsalary;
	
	cout << "\nEnter Bonus Percentage for employee: ";
	cin >> bonusper;
	
	cout << "\nEnter Tax Percentage for employee: ";
	cin >> taxper;
	
	double tax = (taxper/100) * basicsalary;
	double bonus = (bonusper/100) * basicsalary;
	double originalsalary = basicsalary + bonus - tax;
	cout << "\nSalary of employee after adding bonus and cutting taxes: " << originalsalary << endl;
	
	// now checking for additional packages for employee according to their profile
	if (originalsalary >= 25000 && bonusper >= 2){
		cout << "Employee has been selected for healthcare insurance package";
	}else{
		cout << "Employee has not been selected for healthcare insurance package";
	}
	// Checking employee id using bitwise operator
	int employeeID;
	cout << "\nEnter Employee ID: ";
	cin >> employeeID;
	cout << "\nShifting employeid to left by 1 bit: " << (employeeID << 1);
	cout << "\nShifting employeid to right by 1 bit" << (employeeID >> 1);
	cout << "\nUsing bitwise And Operator on employeeID: " << (employeeID & 15);
	cout << "\nUsing bitwise OR Operator on employeeID: " << (employeeID | 15);
	
	originalsalary += 500;
	cout << "\nTotal Salary after extra bonus: " << originalsalary;
	string employeestatus = (originalsalary >= 50000) ? "Senior" : "Junior";
	cout << "\nEmployee Status: " << employeestatus;
	
}
