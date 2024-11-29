#include <iostream>;
using namespace std;
int main() {
	// declaration and initilization:
	char op,shiftlf,up;
	int x,y,n;
	// taking size of map from user:
	cout << "Enter the size of map: ";
	cin >> n;
	
	// checking that the map should be between size of 5 to 9:
	if(n>=5 && n<=9){
		// taking coordinates of treasure from user:
		cout << "\nEnter the Coordinates of treasure: ";
		cin >>x>>y;
		int i = 1;
		cout << endl;
		// loop for row example 5
		while(i<=n){
			cout << i;
			int j = 1;
			// loop for colume example 5
			while(j<=n){
				// if coordinates of user match the position of current position then printing X there:
				if(i==x && j==y){
					cout << "X";
				}else{ // else just putting ----- there:
					cout << "-";
				}
				j++;
			}
			i++;
			cout << endl;
		}
		// menu for updating,changing from left or right and changing from up or down:
		do{
			cout << endl;
			cout << "[1] Update the map.";
			cout << "\n[2] Shift X left or right.";
			cout << "\n[3] Shift X Up or Down";
			cout << "\nEnter q to exit the program!"<<endl;
			cin >> op;
			
			switch(op){
				case '1':
					cout << "Enter new Coordinates of x and y: ";
					cin >>x>>y;
					i = 1;
					cout << endl;
					// loop for row example 5
					while(i<=n){
						cout << i;
						int j = 1;
						// loop for colume example 5
						while(j<=n){
							// if coordinates of user match the position of current position then printing X there:
							if(i==x && j==y){
								cout << "X";
							}else{ // else just putting ----- there:
								cout << "-";
							}
							j++;
						}
						i++;
						cout << endl;
					}
				break;
				case '2':
					cout << "\nShift X left or right?: ";
					cin >> shiftlf;
					if(shiftlf == 'l'){
						y--;
					}else{
						y++;
					}	
					i = 1;
					cout << endl;
					// loop for row example 5
					while(i<=n){
						cout << i;
						int j = 1;
						// loop for colume example 5
						while(j<=n){
							// if coordinates of user match the position of current position then printing X there:
							if(i==x && j==y){
								cout << "X";
							}else{ // else just putting ----- there:
								cout << "-";
							}
							j++;
						}
						i++;
						cout << endl;
					}
				break;
				case '3':
					cout << "\nShift X up or down?: ";
					cin >> up;
					if(up == 'u'){
						x--;
					}else{
						x++;
					}
					i = 1;
					cout << endl;
					// loop for row example 5
					while(i<=n){
						cout << i;
						int j = 1;
						// loop for colume example 5
						while(j<=n){
							// if coordinates of user match the position of current position then printing X there:
							if(i==x && j==y){
								cout << "X";
							}else{ // else just putting ----- there:
								cout << "-";
							}
							j++;
						}
						i++;
						cout << endl;
					}
			}
		}while(op != 'q');
	}
}
