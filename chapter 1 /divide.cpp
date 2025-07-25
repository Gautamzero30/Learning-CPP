#include <iostream>
using namespace std;

int main() {
    float num1, num2, quotient;

    cout << "Enter dividend: ";
    cin >> num1;

    cout << "Enter divisor: ";
    cin >> num2;

    if(num2 != 0) {
        quotient = num1 / num2;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Error! Division by zero is not allowed." << endl;
    }

    return 0;
}
