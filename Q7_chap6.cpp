#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction; 

public:
    Angle() : degrees(0), minutes(0), direction('N') {}

    Angle(int d, float m, char dir):degrees(d),minutes(m),direction(dir) { }
 void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    void display()  {
        cout << degrees << "\xF8" << minutes << "' " << direction << endl;
    }
};

int main() {
    Angle a1(179, 59.9, 'E');
    cout << "Initialized angle: ";
    a1.display();

    Angle a2;
    char choice;

    do {
        a2.getAngle();
        a2.display();
        cout << "Enter another? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
