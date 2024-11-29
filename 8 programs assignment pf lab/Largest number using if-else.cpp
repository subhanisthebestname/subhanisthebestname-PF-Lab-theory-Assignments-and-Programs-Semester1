#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "\nEnter Second Number: ";
    cin >> n2;
    cout << "\nEnter third Number: ";
    cin >> n3;
    cout << endl;

    if(n1 > n2){
        if(n1 > n3){
            cout << n1 << " is largest!";
        }
    }else{
        if(n2 > n3){
            cout << n2 <<" is largest!";
        }else{
            cout << n3 << " is largest!";
        }
    }
}
