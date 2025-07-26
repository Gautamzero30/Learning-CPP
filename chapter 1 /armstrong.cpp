#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Step 1: Count digits manually
    int digits = 0, temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Step 2: Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
