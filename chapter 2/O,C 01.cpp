#include <iostream>
using namespace std;

class Addition {
public:
    int num1, num2;

    void getNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        int sum = num1 + num2;
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    Addition obj;  // Creating object

    obj.getNumbers(); // Calling function to take input
    obj.add();        // Calling function to display sum

    return 0;
}
