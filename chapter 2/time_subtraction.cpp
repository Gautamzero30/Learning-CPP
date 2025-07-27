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

    // Function to subtract two time objects
    Time subtract(const Time &t) const {
        Time result;
        int totalSec1 = hours * 3600 + minutes * 60 + seconds;
        int totalSec2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        int diffSec = totalSec1 - totalSec2;
        if (diffSec < 0) diffSec = 0;  // Prevent negative time

        result.hours = diffSec / 3600;
        diffSec %= 3600;
        result.minutes = diffSec / 60;
        result.seconds = diffSec % 60;

        return result;
    }
};

int main() {
    Time t1, t2, diff;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    // Subtract the two time objects
    diff = t1.subtract(t2);

    cout << "\nDifference of Time: ";
    diff.display();

    return 0;
}
