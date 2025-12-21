#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth {
private:
    int cars;
    double cash;

public:
    TollBooth() : cars(0), cash(0.0) {}

    void payingCar() {
        cars++;
        cash += 0.50;
    }

    void nopayCar() {
        cars++;
    }

    void display()  {
        cout << "Total cars: " << cars << endl;
        cout << "Total cash: Rs " << cash << endl;
    }
};

int main() {
    TollBooth tb;
    int choice;

    cout << "Press 1 = paying car, 0 = non-paying car, 2 = exit\n";

     do{
        cout<<"entre: ";
        cin>>choice;
        if(choice==1)
        tb.payingCar();
        if(choice==0)
        tb.nopayCar();
            }while(choice!=2);

    tb.display();
    return 0;
}
