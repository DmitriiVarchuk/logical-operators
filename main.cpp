#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a six-digit number:";
    cin >> number;

    
    if (number < 100000 || number > 999999) {
        cout << "Error: You must enter a six-digit number!" << endl;
        return 1;
    }

    
    int first_sum = (number / 100000) + (number / 10000 % 10) + (number / 1000 % 10);
    int second_sum = (number / 100 % 10) + (number / 10 % 10) + (number % 10);

   
    if (first_sum == second_sum) {
        cout << "Its lucky number" << endl;
    }
    else {
        cout << "Its not lucky number" << endl;
    }

    return 0;
}