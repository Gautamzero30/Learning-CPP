#include <iostream>
using namespace std;

// Defining a class
class Student {
public:
    string name;
    int age;

    // Member function to display data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating an object of Student
    Student s1;

    // Assigning values
    s1.name = "Gautam";
    s1.age = 20;

    // Calling member function
    s1.display();

    return 0;
}
