#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0, percentage;
    
    cout << "Enter marks of 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    cout << "\nTotal Marks = " << total << "/500";
    cout << "\nPercentage = " << percentage << "%";

    // Optional: Grade System
    if (percentage >= 90)
        cout << "\nGrade: A+";
    else if (percentage >= 80)
        cout << "\nGrade: A";
    else if (percentage >= 70)
        cout << "\nGrade: B+";
    else if (percentage >= 60)
        cout << "\nGrade: B";
    else if (percentage >= 50)
        cout << "\nGrade: C";
    else if (percentage >= 40)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: F (Fail)";

    return 0;
}
