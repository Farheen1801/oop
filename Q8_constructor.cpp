// Speed Calculator (Distance/Time) 
// Create a class Speed with distance (km) and time (hours). Use a parameterized constructor. 
// Calculate speed = distance / time Display speed in km/hr. 
 
#include <iostream>
using namespace std;

class Speed {
    double distance; 
    double time;     

public:
    
    Speed(double d, double t):distance(d),time(t) {
    }

    
    void calculateSpeed() {
        if (time == 0) {
            cout << "Time cannot be zero!" << endl;
        } else {
            double speed = distance / time;
            cout << "Speed = " << speed << " km/hr" << endl;
        }
    }
};

int main() {
    Speed s1(150, 3);  
    s1.calculateSpeed();

    cout << endl;

    Speed s2(200, 0);  
    s2.calculateSpeed();

    return 0;
}
