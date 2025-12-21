#include <iostream>
using namespace std;

class angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    angle() : degrees(0), minutes(0.0), direction('N') {}

    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    void displayAngle() const {
        cout << degrees << "° " << minutes << "' " << direction;
    }
};


class ship {
private:
    static int count;       
    int  num;       
    angle latitude;         
    angle longitude;      

public:
    ship() {                
        count++;
         num = count;
    }

    void getPosition() {
        cout << "\nEnter latitude for Ship " <<  num << ":\n";
        latitude.getAngle();

        cout << "Enter longitude for Ship " <<  num << ":\n";
        longitude.getAngle();
    }

    void showPosition() const {
        cout << "\nShip Number: " <<  num << endl;
        cout << "Latitude : ";
        latitude.displayAngle();
        cout << "\nLongitude: ";
        longitude.displayAngle();
        cout << "\n";
    }
};


int ship::count = 0;

int main() {
    ship s1, s2, s3;    

    cout << "\nEnter position of Ship 1:";
    s1.getPosition();

    cout << "\nEnter position of Ship 2:";
    s2.getPosition();

    cout << "\nEnter position of Ship 3:";
    s3.getPosition();

    cout << "\n---- SHIP POSITIONS ----\n";
    s1.showPosition();
    s2.showPosition();
    s3.showPosition();

    return 0;
}
