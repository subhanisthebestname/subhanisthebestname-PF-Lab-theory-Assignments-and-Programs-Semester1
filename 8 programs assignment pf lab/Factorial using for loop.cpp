#include <iostream>
using namespace std;
int main() {
    int factof,factorial;
    factorial = 1;
    cout << "Enter the number you want factorial of: ";
    cin >> factof;
    cout << endl;
    if(factof < 0){
        cout << "You Entered Negative Number So Invalid!";
    }

    if(factof == 1 || factof == 0 ){
        cout << "Factorial of " << factof << " is 1.";
        return 0;
    }

    for(int i=1;i<=factof;i++){
        factorial *= i;
    }
    cout << "The factorial of " << factof << " is " << factorial;
}
