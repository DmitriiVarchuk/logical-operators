#include <iostream>

using namespace std;	

int main() {
	int num1, num2 ;	
	cout << "Enter first numbers: ";	
	cin >> num1 ;	
	cout << "Enter second numbers: ";	
	cin >> num2;
	if (num1 == num2) {
		cout << "The numbers are equal." << endl;
	}
	else {
		if (num1 < num2) {
			cout << num1 << " " << num2 << endl;
		}
		else {
			cout << num2 << " " << num1 << endl;
		}
	}	

	return 0;
}	