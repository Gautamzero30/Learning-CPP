#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
    }

    // Function to input a complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex &c) const {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }
};

int main() {
    Complex c1, c2, diff;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    // Subtract the second complex number from the first
    diff = c1.subtract(c2);

    cout << "\nDifference of the complex numbers: ";
    diff.display();

    return 0;
}
