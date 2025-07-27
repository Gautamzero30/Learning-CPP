#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to input time
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to display time
    void display() const {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }

    // Function to add two time objects
    Time add(const Time &t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }
};

int main() {
    Time t1, t2, total;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    // Add the two time objects
    total = t1.add(t2);

    cout << "\nTotal Time: ";
    total.display();

    return 0;
}
