#include <iostream>
using namespace std;
int main () {
	char alpha;
	cout << "Enter the Alphabet: ";
	cin >> alpha;
	switch(alpha){
		case 'a':
			cout << "Alphabet is vowel";
			break;
		case 'e':
			cout << "Alphabet is vowel";
			break;
		case 'i':
			cout << "Alphabet is vowel";
			break;
		case 'o':
			cout << "Alphabet is vowel";
			break;
		case 'u':
			cout << "Alphabet is vowel";
			break;
		default:
			cout << "Alphabet is not vowel";
			break;
	}
}
