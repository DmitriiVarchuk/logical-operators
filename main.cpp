#include <iostream>

using namespace std;	

int main() {
    int numbers[7];
    cout << "7 Numbers: " << endl;
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4] >> numbers[5] >> numbers[6];
    int max1 = (numbers[0] > numbers[1]) ? numbers[0] : numbers[1];
    int max2 = (numbers[2] > numbers[3]) ? numbers[2] : numbers[3];
    int max3 = (numbers[4] > numbers[5]) ? numbers[4] : numbers[5];
    int max4 = numbers[6];
    int max5 = (max1 > max2) ? max1 : max2;
    int max6 = (max3 > max4) ? max3 : max4;
    int max_final = (max5 > max6) ? max5 : max6;
    cout << "Maximum number : " << max_final << endl;
	return 0;   
}	