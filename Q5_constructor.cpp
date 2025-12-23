 // 5. Distance Addition (Meters & Centimeters) 
// Create a class Distance with meters and centimeters. 
// Use two constructors: 
// •	One for meters only 
// •	One for meters and centimeters 
// Write a function to add two distances and display total distance in proper format. 
#include <iostream>
using namespace std;

class Distance {
    int meters;
    int centimeters;

public:
    
    Distance(int m):meters(m),centimeters(0) {
          
    }

    Distance(int m, int cm) :meters(m),centimeters(cm){
        
    }
    Distance addDistance(Distance d) {
        Distance temp(0, 0);
         temp.centimeters = centimeters + d.centimeters;
        temp.meters = meters + d.meters 
                       + temp.centimeters / 100;
         temp.centimeters=temp.centimeters%100;
         return temp;
    }

    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

int main() {
    Distance d1(7);        
    Distance d2(1, 95);    

    Distance d3 = d1.addDistance(d2);

    cout << "Total Distance: ";
    d3.display();

    return 0;
}

