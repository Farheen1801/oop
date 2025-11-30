/*7.	Distance Conversion 
Create a class Distance with a data member in meters. Write functions to convert and display the
 distance in kilometers, centimeters, and millimeters. */
 #include<iostream>
 using namespace std;
 class Distance{
    private:
    double meters;
    public:
    void input(){
        cout<<"enter distance in meters:";
        cin>> meters;
    }
    void kilometer() {
        double km;
        km=meters/1000;
        cout<<"distance in kilometers is: "<<km<<endl;
    }
    void centimeter() {
        double cm;
        cm=meters*100;
        cout<<"distance in centimeters is: "<<cm<<endl;
    }
    void millimeter() {
        double mm;
        mm=meters*1000;
        cout<<"distance in millimeters is: "<<mm;
    }
 };
 int main(){
       Distance d;
       d.input();
       d.kilometer();
       d.centimeter();
       d.millimeter();
}
