#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a four-digit number:";
    cin >> number;

	if (number < 1000 || number > 9999) {
		cout << "eror" << endl;
		return 0;
	}

    int first = number / 1000;      
    int second = (number / 100) % 10; 
    int third = (number / 10) % 10;   
    int fourth = number % 10;       
    int new_number = second * 1000 + first * 100 + fourth * 10 + third;
    cout  << new_number << endl;

    return 0;
}