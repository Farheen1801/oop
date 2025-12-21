#include <iostream>
using namespace std;

class Time {
private:
    int hrs, mins, secs;

public:
    Time() : hrs(0), mins(0), secs(0) {}
    Time(int h, int m, int s) : hrs(h), mins(m), secs(s) {}

    void display()  {
        cout << hrs << ":" << mins << ":" << secs << endl;
    }

    
    void add(Time t1, Time t2) {
        secs = t1.secs + t2.secs;
        mins = t1.mins + t2.mins + secs / 60;
        hrs  = t1.hrs + t2.hrs + mins / 60;

        secs %= 60;
        mins %= 60;
    }
};

int main() {
    Time t1(1, 20, 30), t2(2, 40, 50), t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}
