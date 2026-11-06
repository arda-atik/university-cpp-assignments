#include <iostream>

using namespace std;

struct Time {
    int hour;
    int minute;
};

void printTime(const Time &t) {
    cout << t.hour << ":" << (t.minute < 10 ? "0" : "") << t.minute << endl;
}

void setTime(Time *pt) {
    int h, m;
    cout << "Enter hours and minutes: ";
    cin >> h >> m;
    pt->hour = h;
    pt->minute = m;
}

int main()
{
    Time t = {13, 30};
    cout << "Initial time: ";
    printTime(t);

    setTime(&t);
    cout << "Updated time: ";
    printTime(t);

    return 0;
}
